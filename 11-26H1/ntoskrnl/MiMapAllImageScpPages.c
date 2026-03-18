/*
 * XREFs of MiMapAllImageScpPages @ 0x140962E18
 * Callers:
 *     MiMapProcessExecutable @ 0x140962988 (MiMapProcessExecutable.c)
 * Callees:
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiMapImageScpCfgPages @ 0x14036A450 (MiMapImageScpCfgPages.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404057B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140405820 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     MiGetFirstVad @ 0x1404B80E0 (MiGetFirstVad.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140962FC0 (MiDoesImageContainFunctionOverrideFixups.c)
 */

void __fastcall MiMapAllImageScpPages(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 1189LL) |= 4u;
  CurrentThread = KeGetCurrentThread();
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
  for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( (MiReadVadFlags(i) & 0x1C) == 8 && (MiReadVadFlags2(v8) & 0x20) != 0 )
    {
      if ( (unsigned int)MiDoesImageContainFunctionOverrideFixups(**(_QWORD **)(v7 + 80)) )
        MiMapImageScpCfgPages(a1, v7, v9);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
