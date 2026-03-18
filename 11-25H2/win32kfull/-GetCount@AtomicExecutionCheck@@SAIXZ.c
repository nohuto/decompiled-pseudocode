/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401A4014
 * Callers:
 *     xxxLW_LoadFonts @ 0x140147F80 (xxxLW_LoadFonts.c)
 *     SfnINOUTNCCALCSIZE @ 0x1401823E0 (SfnINOUTNCCALCSIZE.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x14018F204 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ClientLoadLocalT1Fonts @ 0x1401A3E24 (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x1401A3EC4 (ClientDeliverUserApc.c)
 *     xxxClientThreadSetup @ 0x1401A3F70 (xxxClientThreadSetup.c)
 *     ClientNoMemoryPopup @ 0x1402BA2B8 (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1402BE608 (xxxUserModeCallback.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1, __int64 a2)
{
  __int64 CurrentThreadNonPaged; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = W32GetCurrentThreadNonPaged(a1, a2);
  result = 0LL;
  if ( CurrentThreadNonPaged )
    return *(unsigned int *)(CurrentThreadNonPaged + 28);
  return result;
}
