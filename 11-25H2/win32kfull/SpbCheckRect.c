/*
 * XREFs of SpbCheckRect @ 0x1401566D4
 * Callers:
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     SpbCheckDce @ 0x14005A370 (SpbCheckDce.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1401554B0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     SpbCheckPwnd @ 0x140155C10 (SpbCheckPwnd.c)
 *     _ScrollDC @ 0x1401569D0 (_ScrollDC.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 * Callees:
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x140156758 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x14026EE9C (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2, unsigned int a3)
{
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagSPB *i; // rcx
  struct tagSPB *v10; // rbx

  LODWORD(UserSessionState) = IsVisible((__int64)a1);
  if ( (_DWORD)UserSessionState )
  {
LABEL_2:
    UserSessionState = W32GetUserSessionState(v8, v7);
    for ( i = *(struct tagSPB **)(*(_QWORD *)(UserSessionState + 56968) + 40LL); i; i = v10 )
    {
      v10 = *(struct tagSPB **)i;
      LODWORD(UserSessionState) = SpbCheckRect2(i, a1, a2, a3);
      if ( !(_DWORD)UserSessionState )
      {
        LOBYTE(UserSessionState) = IsSpbPresentOrNull(v10);
        if ( !(_BYTE)UserSessionState )
          goto LABEL_2;
      }
    }
  }
  return UserSessionState;
}
