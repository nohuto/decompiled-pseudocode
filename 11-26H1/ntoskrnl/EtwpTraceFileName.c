/*
 * XREFs of EtwpTraceFileName @ 0x140215DC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceFileName(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, int a5, __int16 a6)
{
  __int64 CurrentServerSilo; // rbx
  unsigned int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // edi
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int16 v18; // r8
  __int64 v19; // rdx
  const EVENT_DESCRIPTOR *v20; // rdx
  __int16 v21; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  unsigned int v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+74h] [rbp+Bh]
  __int16 *v27; // [rsp+78h] [rbp+Fh]
  __int64 v28; // [rsp+80h] [rbp+17h]

  v22[1] = 0LL;
  v21 = 0;
  if ( a1 )
    CurrentServerSilo = *(_QWORD *)(a1 + 1520);
  else
    CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a3;
  v22[0] = a2;
  if ( v10 > 0x2000 )
    v10 = 0x2000;
  *(_QWORD *)&UserData.Size = 8LL;
  v25 = v10;
  UserData.Ptr = (ULONGLONG)v22;
  v24 = *((_QWORD *)a3 + 1);
  v27 = &v21;
  v26 = 0;
  v28 = 2LL;
  result = EtwpHostSiloState + 4812;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)result & 0x200) != 0 )
  {
    if ( a6 == 1056 )
    {
      v20 = (const EVENT_DESCRIPTOR *)KFileEvt_NameCreate;
      goto LABEL_30;
    }
    result = 1059LL;
    if ( a6 == 1059 )
    {
      v20 = &KFileEvt_NameDelete;
LABEL_30:
      EtwWriteEx((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Flink, v20, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      goto LABEL_7;
    }
  }
  if ( a6 != 1060 )
  {
LABEL_7:
    result = EtwpHostSiloState;
    v12 = *(_DWORD *)(EtwpHostSiloState + 4520);
    while ( 1 )
    {
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
      if ( v13 )
        break;
      v12 &= v12 - 1;
      result = EtwpHostSiloState + 32LL * (unsigned int)v14 + 4556;
      if ( result )
      {
        if ( (*(_DWORD *)result & 0x200) != 0 )
          result = EtwpLogKernelEvent(
                     (unsigned int)&UserData,
                     EtwpHostSiloState,
                     *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4504),
                     3,
                     a6,
                     5249026);
      }
    }
    if ( CurrentServerSilo )
    {
      result = PsGetServerSiloGlobals(CurrentServerSilo);
      v15 = *(_QWORD *)(result + 832);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 4520);
        while ( 1 )
        {
          v13 = !_BitScanForward((unsigned int *)&v17, v16);
          if ( v13 )
            break;
          v16 &= v16 - 1;
          result = v15 + 32LL * (unsigned int)v17 + 4556;
          if ( result && (*(_DWORD *)result & 0x200) != 0 )
            result = EtwpLogKernelEvent(
                       (unsigned int)&UserData,
                       v15,
                       *(unsigned __int8 *)(v15 + 2 * v17 + 4504),
                       3,
                       a6,
                       5249026);
        }
      }
    }
    return result;
  }
  if ( !a4 || a4 == CurrentServerSilo )
  {
    result = PsGetServerSiloGlobals(a4);
    v19 = *(_QWORD *)(result + 832);
    if ( v19 )
      return EtwpLogKernelEvent((unsigned int)&UserData, v19, a5, 3, v18, 5249026);
  }
  return result;
}
