/*
 * XREFs of WmipCreateGuidObject @ 0x140A0F220
 * Callers:
 *     WmipOpenGuidObject @ 0x140A0D764 (WmipOpenGuidObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140A0F458 (WmipGetGuidSecurityDescriptor.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int64 a1, unsigned int a2, _OWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  int GuidSecurityDescriptor; // ebx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  PVOID v13; // rdi
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  char *v16; // rsi
  __int64 v18; // [rsp+28h] [rbp-E0h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  char *Event; // [rsp+60h] [rbp-A8h] BYREF
  PRKEVENT Event_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  PVOID v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  struct _ACCESS_STATE v28; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v29[224]; // [rsp+148h] [rbp+40h] BYREF

  P = 0LL;
  DestinationString = 0LL;
  memset_0(&v28, 0, sizeof(v28));
  memset_0(v29, 0, sizeof(v29));
  v8 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)Event_8 = 0uLL;
  v24 = 0;
  LODWORD(v26) = 0;
  v9 = (const WCHAR *)(*(_QWORD *)(v8 + 8) + 18LL);
  Event = 0LL;
  RtlInitUnicodeString(&DestinationString, v9);
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString, &P);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v11 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)Event_8 = *(_OWORD *)a1;
    v12 = *(_OWORD *)(a1 + 32);
    v13 = P;
    v24 = HIDWORD(v11);
    v23 = 640;
    v26 = *((_QWORD *)&v12 + 1);
    v25 = P;
    v22 = 0LL;
    GuidSecurityDescriptor = SeCreateAccessState(&v28, v29, a2, &WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v14 = *(_OWORD *)&v28.SubjectSecurityContext.ClientToken;
      v15 = *(_OWORD *)&v28.SubjectSecurityContext.PrimaryToken;
      v28.SubjectSecurityContext = ymmword_140FD8578;
      GuidSecurityDescriptor = ObCreateObjectEx(0, WmipGuidObjectType, (__int64)Event_8, 0, v18, 168, 0, 0, &Event, 0LL);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v16 = Event;
        memset_0(Event, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v16, NotificationEvent, 0);
        *((_DWORD *)v16 + 28) = 4096;
        *((_DWORD *)v16 + 36) = 4096;
        *(_OWORD *)(v16 + 24) = *a3;
        GuidSecurityDescriptor = ObInsertObjectEx(v16, &v28, a2, 0, 0, 0LL, 0LL);
        if ( GuidSecurityDescriptor >= 0 )
        {
          *a4 = v16;
          GuidSecurityDescriptor = 0;
        }
      }
      *(_OWORD *)&v28.SubjectSecurityContext.ClientToken = v14;
      *(_OWORD *)&v28.SubjectSecurityContext.PrimaryToken = v15;
      SeDeleteAccessState((__int64)&v28);
    }
    if ( v13 && v13 != (PVOID)WmipDefaultAccessSd )
      ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
