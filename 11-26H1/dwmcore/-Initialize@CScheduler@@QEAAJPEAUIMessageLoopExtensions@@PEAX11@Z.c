/*
 * XREFs of ?Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z @ 0x1801E4434
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CScheduler::Initialize(void **this, struct IMessageLoopExtensions *a2, void *a3, void *a4, void *a5)
{
  signed int v8; // ebx
  HANDLE WaitableTimerW; // rax
  HANDLE v10; // rsi
  signed int LastError; // eax

  *this = a5;
  v8 = 0;
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  v10 = WaitableTimerW;
  if ( WaitableTimerW )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 1,
      WaitableTimerW);
    this[3] = a3;
    this[4] = a4;
    this[5] = v10;
  }
  else
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1Du, 0LL);
  }
  return (unsigned int)v8;
}
