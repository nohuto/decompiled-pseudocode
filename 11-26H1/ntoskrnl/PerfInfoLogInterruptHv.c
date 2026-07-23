/*
 * XREFs of PerfInfoLogInterruptHv @ 0x140476E50
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140733260 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140733310 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogInterruptHv(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+44h] [rbp-2Ch]
  _QWORD v12[4]; // [rsp+48h] [rbp-28h] BYREF

  v11 = 0;
  v12[2] = &v9;
  result = EtwpHostSiloState;
  v9 = a1;
  v10 = a2;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v12[3] = 12LL;
  while ( _BitScanForward((unsigned int *)&v8, v5) )
  {
    v5 &= v5 - 1;
    result = EtwpHostSiloState + 32LL * (unsigned int)v8 + 4556;
    if ( result )
    {
      if ( (*(_DWORD *)(result + 4) & 0x4000) != 0 )
      {
        v6 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4505) - 1LL;
        v12[1] = 8LL;
        v12[0] = a3 + 8 * v6;
        result = EtwpLogKernelEvent(
                   (__int64)v12,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v8 + 4504),
                   2u,
                   0xF43u,
                   0x500A02u);
      }
    }
  }
  return result;
}
