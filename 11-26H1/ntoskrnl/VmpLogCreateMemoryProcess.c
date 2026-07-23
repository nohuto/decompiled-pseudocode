/*
 * XREFs of VmpLogCreateMemoryProcess @ 0x140824744
 * Callers:
 *     VmCreateMemoryProcess @ 0x140B518E0 (VmCreateMemoryProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

void __fastcall VmpLogCreateMemoryProcess(
        __int64 a1,
        void *a2,
        UNICODE_STRING *a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8,
        struct _KPROCESS *Process,
        int a10)
{
  unsigned int ProcessId; // edi
  void *InitialStack; // rbx
  __int64 v14; // r8
  int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  PVOID v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  unsigned int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  unsigned int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  _DWORD *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  wchar_t *Buffer; // [rsp+E0h] [rbp-20h]
  _DWORD v36[2]; // [rsp+E8h] [rbp-18h] BYREF
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  __int64 *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  UNICODE_STRING *p_DestinationString; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  PVOID *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]

  DestinationString = 0LL;
  if ( a3 )
    DestinationString = *a3;
  else
    RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a2 )
  {
    v17 = 0LL;
    ObReferenceObjectByHandle(a2, 0, (POBJECT_TYPE)PsProcessType, 0, &v17, 0LL);
    ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v17);
    ObfDereferenceObject(v17);
  }
  else
  {
    ProcessId = -1;
  }
  InitialStack = stru_140F06A28.InitialStack;
  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
  {
    v18 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
    v27 = &v18;
    v28 = 4LL;
    v19 = (unsigned int)PsGetProcessId(Process);
    v30 = 4LL;
    v29 = &v19;
    v20 = ProcessId;
    v31 = &v20;
    v32 = 4LL;
    v33 = v36;
    Buffer = DestinationString.Buffer;
    v36[0] = DestinationString.Length;
    v37 = &v21;
    v22 = a5;
    v39 = &v22;
    v23 = a7;
    v41 = &v23;
    v25 = a6;
    v43 = &v25;
    *(_QWORD *)&DestinationString.Length = a8;
    p_DestinationString = &DestinationString;
    LODWORD(v17) = a10;
    v47 = &v17;
    v34 = 2LL;
    v36[1] = 0;
    v21 = a4;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 8LL;
    v46 = 8LL;
    v48 = 4LL;
    tlgWriteEx_EtwWriteEx(
      (__int64)InitialStack,
      (unsigned __int8 *)&byte_140053F1D,
      v14,
      0,
      Object,
      HandleInformation,
      0xDu,
      &v26);
  }
}
