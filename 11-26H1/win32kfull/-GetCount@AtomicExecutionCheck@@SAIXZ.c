/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4
 * Callers:
 *     xxxLW_LoadFonts @ 0x1400CC240 (xxxLW_LoadFonts.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401A4FFC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ClientLoadLocalT1Fonts @ 0x1401B620C (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x1401B6300 (ClientDeliverUserApc.c)
 *     xxxClientThreadSetup @ 0x1401B6400 (xxxClientThreadSetup.c)
 *     SfnINOUTNCCALCSIZE @ 0x1401B6510 (SfnINOUTNCCALCSIZE.c)
 *     ClientNoMemoryPopup @ 0x1402D508C (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1402D8670 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1)
{
  __int64 CurrentThreadWin32Thread; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    return *(unsigned int *)(CurrentThreadWin32Thread + 28);
  return result;
}
