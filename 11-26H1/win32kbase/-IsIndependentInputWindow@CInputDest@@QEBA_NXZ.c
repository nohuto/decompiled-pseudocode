/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400CE260
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400CE174 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14018E8AC (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     IsMessageOnlyWindow @ 0x14006F8D0 (IsMessageOnlyWindow.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 */

char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl
  struct tagWND *UserWindow; // rax

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    UserWindow = CInputDest::GetUserWindow(this);
    if ( UserWindow )
      return (unsigned int)IsMessageOnlyWindow((__int64)UserWindow) != 0;
  }
  return v2;
}
