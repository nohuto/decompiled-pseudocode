/*
 * XREFs of MiTrimWorkingSetTail @ 0x14045D050
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiTrimWorkingSetTailHelper @ 0x14045D148 (MiTrimWorkingSetTailHelper.c)
 *     MiReleasePrcbAgeTrimLists @ 0x14045D41C (MiReleasePrcbAgeTrimLists.c)
 *     MiProcessVpabAccessedInfo @ 0x14045D47C (MiProcessVpabAccessedInfo.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  _QWORD *v1; // rsi
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG_PTR v6; // r8
  _DWORD *v7; // rax
  unsigned __int64 v9; // rbx
  char v10; // bl
  int VpabAccessedState; // eax

  v1 = *(_QWORD **)(a1 + 184);
  v3 = 1;
  while ( 1 )
  {
    MiTrimWorkingSetTailHelper(a1);
    v5 = v1[9];
    if ( !v5 )
      break;
    if ( *(_DWORD *)(v5 + 28) )
      MiFlushTbList(v5);
    v6 = v1[10];
    if ( *(_DWORD *)(v6 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v4, v6, 0);
    v7 = (_DWORD *)v1[11];
    if ( !v7 )
      break;
    if ( !*v7 )
      break;
    v10 = *(_BYTE *)(a1 + 9);
    *(_BYTE *)(a1 + 9) = 17;
    VpabAccessedState = MiQueryVpabAccessedState(a1, v1 + 9, 0LL);
    *(_BYTE *)(a1 + 9) = v10;
    v3 = VpabAccessedState;
    if ( !VpabAccessedState )
      break;
    MiProcessVpabAccessedInfo(a1, v1[11], MiTrimWorkingSetVpabCallback, *(_QWORD *)(a1 + 184));
  }
  if ( v1[9] )
  {
    MiReleasePrcbAgeTrimLists(v1 + 9);
    if ( !v3 )
    {
      v9 = *(unsigned __int8 *)(a1 + 9);
      if ( (_BYTE)v9 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 9));
        __writecr8(v9);
      }
    }
  }
  return 0LL;
}
