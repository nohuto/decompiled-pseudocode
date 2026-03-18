/*
 * XREFs of WmipCreateGuidObject @ 0x1409B3958
 * Callers:
 *     WmipOpenGuidObject @ 0x1409B518C (WmipOpenGuidObject.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1409B3B74 (WmipGetGuidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int128 *a1, int a2, _OWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  int GuidSecurityDescriptor; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PVOID v12; // rdi
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  char *v15; // rsi
  __int64 v17; // [rsp+28h] [rbp-E0h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  char *DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+94h] [rbp-74h]
  PVOID v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  struct _ACCESS_STATE AccessState; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v28[28]; // [rsp+148h] [rbp+40h] BYREF

  P = 0LL;
  DestinationString_8 = 0LL;
  memset_0(&AccessState, 0, sizeof(AccessState));
  memset_0(v28, 0, sizeof(v28));
  v8 = *((_QWORD *)a1 + 2);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString_8, (PCWSTR)(*(_QWORD *)(v8 + 8) + 18LL));
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString_8, &P);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v10 = a1[1];
    v21 = *a1;
    v11 = a1[2];
    v12 = P;
    v24 = HIDWORD(v10);
    v22 = 0LL;
    v26 = *((_QWORD *)&v11 + 1);
    v25 = P;
    v23 = 640;
    GuidSecurityDescriptor = SeCreateAccessState(&AccessState, v28, a2, &WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v13 = *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken;
      v14 = *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken;
      AccessState.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObjectEx(
                                 0,
                                 WmipGuidObjectType,
                                 (int)&v21,
                                 0,
                                 v17,
                                 168,
                                 0,
                                 0,
                                 &DestinationString,
                                 0LL);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v15 = DestinationString;
        memset_0(DestinationString, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v15, NotificationEvent, 0);
        *((_DWORD *)v15 + 28) = 4096;
        *((_DWORD *)v15 + 36) = 4096;
        *(_OWORD *)(v15 + 24) = *a3;
        GuidSecurityDescriptor = ObInsertObjectEx(v15, &AccessState, a2, 0, 0, 0LL, 0LL);
        if ( GuidSecurityDescriptor >= 0 )
        {
          *a4 = v15;
          GuidSecurityDescriptor = 0;
        }
      }
      *(_OWORD *)&AccessState.SubjectSecurityContext.ClientToken = v13;
      *(_OWORD *)&AccessState.SubjectSecurityContext.PrimaryToken = v14;
      SeDeleteAccessState((__int64)&AccessState);
    }
    if ( v12 && v12 != (PVOID)WmipDefaultAccessSd )
      ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
