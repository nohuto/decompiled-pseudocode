/*
 * XREFs of EtwpLogMemInfoWsHelper @ 0x1409BA2C0
 * Callers:
 *     EtwpLogMemInfoWs @ 0x1409BBBE8 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpLogMemInfoWsHelper(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  UserData.Ptr = (ULONGLONG)a2;
  v5 = a2 + 1;
  v2 = 68 * *a2;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = 0;
  v6 = v2;
  if ( a1 )
    return EtwpLogKernelEvent((__int64)&UserData, *(_QWORD *)(a1 + 1360), *(_DWORD *)a1, 2u, 0x27Du, 0x501804u);
  EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 637, 5249028);
  result = EtwpHostSiloState + 4812;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4816) & 0x800000) != 0 )
    return EtwWrite(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
             &KERNEL_MEM_EVENT_MEMINFO_WS,
             0LL,
             2u,
             &UserData);
  return result;
}
