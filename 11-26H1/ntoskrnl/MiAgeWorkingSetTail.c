/*
 * XREFs of MiAgeWorkingSetTail @ 0x14032AD10
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleasePrcbAgeTrimLists @ 0x14045D41C (MiReleasePrcbAgeTrimLists.c)
 *     MiProcessVpabAccessedInfo @ 0x14045D47C (MiProcessVpabAccessedInfo.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v4; // r13d
  BOOL v5; // r12d
  unsigned __int8 v6; // di
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // rax
  unsigned __int64 v13; // rbx
  char v14; // bl
  int VpabAccessedState; // eax

  v2 = *(_QWORD *)(a1 + 184);
  v4 = 1;
  v5 = (*(_DWORD *)v2 & 3) != 0;
  while ( 1 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_QWORD *)(a1 + 184) + 80LL;
    do
    {
      if ( *(_BYTE *)(v8 + 72) )
        MiFlushDeferredAgingBucket(v8, v7, v6);
      ++v6;
      v8 += 80LL;
    }
    while ( v6 < 7u );
    v9 = *(_QWORD *)(v2 + 56);
    if ( !v9 )
      break;
    if ( *(_DWORD *)(v9 + 28) )
      MiFlushTbList(v9);
    v10 = *(_QWORD *)(v2 + 64);
    if ( *(_DWORD *)(v10 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), a2, v10, 0LL);
    v11 = *(_DWORD **)(v2 + 72);
    if ( !v11 )
      break;
    if ( !*v11 )
      break;
    v14 = *(_BYTE *)(a1 + 9);
    *(_BYTE *)(a1 + 9) = 17;
    VpabAccessedState = MiQueryVpabAccessedState(a1, v2 + 56, v5);
    *(_BYTE *)(a1 + 9) = v14;
    v4 = VpabAccessedState;
    if ( !VpabAccessedState )
      break;
    MiProcessVpabAccessedInfo(a1, *(_QWORD *)(v2 + 72), MiAgeWorkingSetVpabCallback, *(_QWORD *)(a1 + 184));
  }
  if ( *(_QWORD *)(v2 + 56) )
  {
    MiReleasePrcbAgeTrimLists(v2 + 56);
    if ( !v4 )
    {
      v13 = *(unsigned __int8 *)(a1 + 9);
      if ( (_BYTE)v13 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v13);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    *(_BYTE *)(v2 + 6) = 1;
  return 0LL;
}
