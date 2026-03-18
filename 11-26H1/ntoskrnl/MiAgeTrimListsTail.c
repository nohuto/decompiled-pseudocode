/*
 * XREFs of MiAgeTrimListsTail @ 0x140464350
 * Callers:
 *     MiResetAccessBitsTail @ 0x140464050 (MiResetAccessBitsTail.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleasePrcbAgeTrimLists @ 0x14046445C (MiReleasePrcbAgeTrimLists.c)
 *     MiProcessVpabAccessedInfo @ 0x1404644BC (MiProcessVpabAccessedInfo.c)
 *     MiQueryVpabAccessedState @ 0x1404646AC (MiQueryVpabAccessedState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiAgeTrimListsTail(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v9; // r14d
  __int64 v10; // rcx
  ULONG_PTR v11; // r8
  _DWORD *v12; // rax
  unsigned __int64 v13; // rbx
  char v14; // bl
  int VpabAccessedState; // eax

  v9 = 1;
  while ( 1 )
  {
    if ( a3 )
      guard_dispatch_icall_no_overrides(a1, a2);
    v10 = *a2;
    if ( !*a2 )
      break;
    if ( *(_DWORD *)(v10 + 28) )
      MiFlushTbList(v10);
    v11 = a2[1];
    if ( *(_DWORD *)(v11 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), (__int64)a2, v11, 0);
    v12 = (_DWORD *)a2[2];
    if ( !v12 )
      break;
    if ( !*v12 )
      break;
    v14 = *(_BYTE *)(a1 + 9);
    *(_BYTE *)(a1 + 9) = 17;
    VpabAccessedState = MiQueryVpabAccessedState(a1, a2, a4);
    *(_BYTE *)(a1 + 9) = v14;
    v9 = VpabAccessedState;
    if ( !VpabAccessedState )
      break;
    MiProcessVpabAccessedInfo(a1, a2[2], a5, *(_QWORD *)(a1 + 184));
  }
  if ( *a2 )
  {
    MiReleasePrcbAgeTrimLists(a2);
    if ( !v9 )
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
}
