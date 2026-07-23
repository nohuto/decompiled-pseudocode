/*
 * XREFs of PerfInfoLogIpiSend @ 0x1404E9E00
 * Callers:
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogIpiSend(__int64 a1, int a2, __int64 a3, int a4, unsigned __int16 *a5)
{
  int v6; // edx
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-9h] BYREF
  int v13; // [rsp+40h] [rbp-1h]
  int v14; // [rsp+44h] [rbp+3h]
  int v15; // [rsp+48h] [rbp+7h]
  _QWORD v16[5]; // [rsp+50h] [rbp+Fh] BYREF
  int v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+7Ch] [rbp+3Bh]

  v13 = a2;
  v12 = a3;
  v6 = *a5;
  v16[4] = a5 + 4;
  v14 = a4;
  v15 = v6;
  v16[2] = &v12;
  v17 = 8 * v6;
  result = EtwpHostSiloState;
  v16[3] = 20LL;
  v18 = 0;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  while ( _BitScanForward((unsigned int *)&v11, v8) )
  {
    v8 &= v8 - 1;
    result = EtwpHostSiloState + 32LL * (unsigned int)v11 + 4556;
    if ( result )
    {
      if ( (*(_DWORD *)(result + 8) & 0x400000) != 0 )
      {
        v9 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v11 + 4505) - 1LL;
        v16[1] = 8LL;
        v16[0] = a1 + 8 * v9;
        result = EtwpLogKernelEvent(
                   (__int64)v16,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v11 + 4504),
                   3u,
                   0xF70u,
                   0x501A02u);
      }
    }
  }
  return result;
}
