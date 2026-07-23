/*
 * XREFs of EtwpSampledProfileRunDown @ 0x140B05658
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall EtwpSampledProfileRunDown(__int64 a1, char a2, char a3)
{
  unsigned __int16 v3; // si
  unsigned int v6; // eax
  $06DA74891900ABA548658392A057F771 *v7; // rcx
  $06DA74891900ABA548658392A057F771 *v8; // rdi
  __int64 v9; // r15
  unsigned int Flink_low; // r14d
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  LONG result; // eax
  __int64 v17; // [rsp+58h] [rbp-9h] BYREF
  int v18; // [rsp+60h] [rbp-1h]
  _QWORD v19[3]; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]

  v17 = 0LL;
  v18 = 0;
  v3 = 3914 - (a2 != 0);
  if ( a3 )
  {
    v7 = &stru_140F03830.1008;
    v6 = 1;
  }
  else
  {
    KeWaitForSingleObject(&stru_140F03830.880, Executive, 0, 0, 0LL);
    v6 = EtwpPmcProfile;
    v7 = ($06DA74891900ABA548658392A057F771 *)qword_140F03E98;
    if ( !EtwpPmcProfile )
      return KeReleaseMutex((PRKMUTEX)&stru_140F03830.880, 0);
  }
  v8 = v7 + 38;
  v9 = v6;
  do
  {
    Flink_low = SLOWORD(v8->GlobalUpdateVpThreadPriorityListEntry.Flink);
    if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL) < 0 )
      v11 = L"Unknown";
    else
      v11 = 0LL;
    v12 = L"Unknown";
    v18 = 0;
    v17 = Flink_low;
    if ( v11 )
      v12 = v11;
    v19[0] = &v17;
    v13 = -1LL;
    v19[1] = 12LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = *(_DWORD *)a1;
    v19[2] = v12;
    v15 = *(_QWORD *)(a1 + 1360);
    v20 = 2 * v13 + 2;
    v21 = 0;
    result = EtwpLogKernelEvent((__int64)v19, v15, v14, 2u, v3, 0x501903u);
    v8 = ($06DA74891900ABA548658392A057F771 *)((char *)v8 + 616);
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    return KeReleaseMutex((PRKMUTEX)&stru_140F03830.880, 0);
  return result;
}
