/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x14045D220
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleasePrcbAgeTrimLists @ 0x14045D41C (MiReleasePrcbAgeTrimLists.c)
 *     MiProcessVpabAccessedInfo @ 0x14045D47C (MiProcessVpabAccessedInfo.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // ebp
  __int64 v5; // rcx
  ULONG_PTR v6; // r8
  _DWORD *v7; // rax
  unsigned __int64 v9; // rbx
  char v10; // bl
  int VpabAccessedState; // eax

  v2 = *(_QWORD **)(a1 + 184);
  v4 = 1;
  while ( 1 )
  {
    v5 = v2[3];
    if ( !v5 )
      break;
    if ( *(_DWORD *)(v5 + 28) )
      MiFlushTbList(v5);
    v6 = v2[4];
    if ( *(_DWORD *)(v6 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), a2, v6, 0);
    v7 = (_DWORD *)v2[5];
    if ( !v7 )
      break;
    if ( !*v7 )
      break;
    v10 = *(_BYTE *)(a1 + 9);
    *(_BYTE *)(a1 + 9) = 17;
    VpabAccessedState = MiQueryVpabAccessedState(a1, v2 + 3, 0LL);
    *(_BYTE *)(a1 + 9) = v10;
    v4 = VpabAccessedState;
    if ( !VpabAccessedState )
      break;
    MiProcessVpabAccessedInfo(a1, v2[5], MiUpdateOldPagesVpabCallback, *(_QWORD *)(a1 + 184));
  }
  if ( v2[3] )
  {
    MiReleasePrcbAgeTrimLists(v2 + 3);
    if ( !v4 )
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
