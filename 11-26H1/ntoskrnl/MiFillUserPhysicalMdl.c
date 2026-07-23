/*
 * XREFs of MiFillUserPhysicalMdl @ 0x1407061B4
 * Callers:
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiInitializeAwePfn @ 0x14050A044 (MiInitializeAwePfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiFillUserPhysicalMdl(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rbp
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r12
  __int64 *v10; // r14
  __int64 v11; // rcx
  int v12; // edx
  __int64 *v14; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  int v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v5 = 2LL;
  v8 = a2;
  do
  {
    while ( *v8 != 0x3FFFFFFFFFLL )
      MiDemotePfnListChain(a2, 2LL);
    v8 += 3;
    --v5;
  }
  while ( v5 );
  v9 = v20;
  v10 = a2 + 6;
  v11 = a2[6];
  v12 = -1;
  while ( v11 != 0x3FFFFFFFFFLL )
  {
    if ( v11 + 16 > a3 )
      return 3221225485LL;
    v11 = *(_QWORD *)(48 * v11 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
  }
  *(_WORD *)(a1 + 10) |= 2u;
  v14 = (__int64 *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
  }
  v16 = *v10;
  if ( *v10 != 0x3FFFFFFFFFLL )
  {
    v17 = v9 >> 3;
    do
    {
      MiSimpleUnlinkPageEx((__int64)v10, v16);
      *v14 = v16;
      v18 = 48 * v16 - 0x220000000000LL;
      ++v14;
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      *(_QWORD *)v18 = v17 ^ (*(_QWORD *)v18 ^ v17) & 0xFFFFF00000000001uLL;
      *(_QWORD *)(v18 + 24) = *(_QWORD *)(v18 + 24) & 0xC000000000000000uLL | 1;
      MiInitializeAwePfn(48 * v16 - 0x220000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 = *v10;
    }
    while ( *v10 != 0x3FFFFFFFFFLL );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
