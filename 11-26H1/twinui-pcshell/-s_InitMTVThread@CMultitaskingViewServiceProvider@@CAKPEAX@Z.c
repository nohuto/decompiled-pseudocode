/*
 * XREFs of ?s_InitMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x180496930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewServiceProvider::s_InitMTVThread(PVOID Parameter)
{
  HANDLE CurrentThread; // rax

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"MultitaskingView");
  return 1LL;
}
