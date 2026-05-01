/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer @ 0x18052CC44
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnBeginBatchUpdate @ 0x18052A490 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--OnBeginBatchUpdate.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer(
        __int64 *a1)
{
  signed int Error; // edi
  HWND v3; // rsi
  signed int LastError; // eax
  signed int v5; // ebx
  __int64 v6; // rax

  Error = 0;
  if ( !a1[4] )
  {
    v3 = (HWND)SHCreateWorkerWindowW(
                 CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc,
                 -3LL,
                 0LL,
                 0LL,
                 0LL,
                 a1);
    if ( v3 || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      if ( SetTimer(v3, 0x64uLL, 0x3E8u, 0LL) )
        goto LABEL_10;
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      Error = v5;
      if ( v5 >= 0 )
      {
LABEL_10:
        v6 = *a1;
        a1[4] = (__int64)v3;
        (*(void (__fastcall **)(__int64 *))(v6 + 8))(a1);
      }
      else if ( v3 )
      {
        DestroyWindow(v3);
      }
    }
  }
  return (unsigned int)Error;
}
