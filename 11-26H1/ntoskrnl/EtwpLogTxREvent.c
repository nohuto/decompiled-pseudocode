/*
 * XREFs of EtwpLogTxREvent @ 0x14082E10C
 * Callers:
 *     EtwpTraceRegistryTransaction @ 0x140B66EB0 (EtwpTraceRegistryTransaction.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpLogTxREvent(
        unsigned int a1,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  unsigned int v10; // r9d
  int v11; // ecx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-21h] BYREF
  __int128 v15; // [rsp+38h] [rbp-19h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  __int64 v18; // [rsp+50h] [rbp-1h]
  __int64 *v19; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+70h] [rbp+1Fh]
  int v22; // [rsp+74h] [rbp+23h]

  v8 = *a3;
  v16 = a4;
  v9 = *a6;
  v10 = 1;
  v17 = a5;
  v14 = v9;
  v19 = &v14;
  v18 = 0LL;
  v15 = v8;
  v20[0] = 32LL;
  v11 = *(_WORD *)a7 & 0xFFFE;
  if ( v11 )
  {
    v10 = 2;
    v20[1] = *(_QWORD *)(a7 + 8);
    v21 = v11;
    v22 = 0;
  }
  v12 = 2LL * v10;
  v20[v12 - 1] = &EtwpNull;
  v20[v12] = 2LL;
  return EtwpLogKernelEvent((__int64)&v19, EtwpHostSiloState, a1, v10 + 1, a2 | 0x900u, 0x601902u);
}
