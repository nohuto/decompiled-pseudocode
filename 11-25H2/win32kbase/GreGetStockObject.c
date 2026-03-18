/*
 * XREFs of GreGetStockObject @ 0x140041950
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 *     bInitICM @ 0x1402EA32C (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x140042C30 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GreGetStockObject(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 result; // rax

  v1 = a1;
  LOBYTE(v2) = 18;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
  {
    v5 = *CurrentThreadNonPaged;
    if ( *CurrentThreadNonPaged )
    {
      if ( *(_QWORD *)(v5 + 408) )
        CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
      if ( *(_DWORD *)(v5 + 400) )
      {
        LOBYTE(v2) = *(_DWORD *)(v5 + 400);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
          v2 = *(_DWORD *)(CurrentProcessWin32Process + 268);
      }
    }
  }
  v7 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  if ( (unsigned int)v1 > 0x10
    || (v8 = 74752, !_bittest(&v8, v1))
    || (v2 & 0xF) != 0
    || (result = *(_QWORD *)(*(_QWORD *)(v7 + 3016) + 8 * v1)) == 0 )
  {
    if ( (_DWORD)v1 == 17 || (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return *(_QWORD *)(*(_QWORD *)(v7 + 3008) + 8 * v1);
  }
  return result;
}
