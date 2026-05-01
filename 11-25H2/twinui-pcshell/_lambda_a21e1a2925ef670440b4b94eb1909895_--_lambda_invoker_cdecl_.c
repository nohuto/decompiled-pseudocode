/*
 * XREFs of _lambda_a21e1a2925ef670440b4b94eb1909895_::_lambda_invoker_cdecl_ @ 0x18039DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FCAD4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B1C50 (-UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall lambda_a21e1a2925ef670440b4b94eb1909895_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer)
{
  char v4; // di

  if ( *((_QWORD *)Context + 26) )
  {
    v4 = *((_BYTE *)Context + 216);
    UndockedSearchAppExperienceManager::UpdateMouseOnSearchState((UndockedSearchAppExperienceManager *)Context);
    if ( !*((_BYTE *)Context + 216) )
    {
      if ( v4 )
        ExperienceManagerUtils::PostToUIThread(
          *((__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))Context + 6),
          (struct IUnknown *)Context,
          (void *)0x401,
          15LL);
    }
  }
}
