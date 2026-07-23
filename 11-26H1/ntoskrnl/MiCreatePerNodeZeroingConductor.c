/*
 * XREFs of MiCreatePerNodeZeroingConductor @ 0x140885510
 * Callers:
 *     MiZeroPageThread @ 0x140713D40 (MiZeroPageThread.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetNodeSystemInformation @ 0x140478A10 (MiGetNodeSystemInformation.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePerNodeZeroingConductor(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rsi
  int v7; // edx
  __int64 NodeSystemInformation; // r14
  __int64 PoolMm; // rax
  _BYTE *v10; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rax
  int v15; // ebx
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) + 56320LL * a2;
  NodeSystemInformation = MiGetNodeSystemInformation(a2);
  PoolMm = ExAllocatePoolMm(64LL, 0x6D0uLL, 1666869581, v7 | 0x80000000);
  v10 = (_BYTE *)PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  *(_DWORD *)(PoolMm + 56) = a2;
  *(_QWORD *)(PoolMm + 48) = a1;
  v12 = (_QWORD *)(PoolMm + 216);
  v12[1] = v12;
  *v12 = v12;
  v10[161] = a3;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 128LL);
  v14 = &qword_140E2D818;
  if ( (*(_BYTE *)(NodeSystemInformation + 36) & 1) == 0 )
    v14 = (__int64 *)NodeSystemInformation;
  v16 = *(_OWORD *)*v14;
  v15 = PsCreateSystemThreadEx(&v17, 0x1FFFFFLL, 0LL, v13, 0LL, MiNodeZeroConductor, v10, &v16, 0LL);
  if ( v15 < 0 )
    ExFreePoolWithTag(v10, 0);
  else
    *(_QWORD *)(v6 + 14208) = v17;
  return (unsigned int)v15;
}
