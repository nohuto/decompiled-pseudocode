/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x14020E8D4
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x14020E860 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     bUnloadEudcFont @ 0x140104924 (bUnloadEudcFont.c)
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x14016EF30 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

void __fastcall CleanUpEUDC(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  char v7; // al
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8

  SessionState = W32GetSessionState(a1, a2);
  v6 = *(_QWORD *)(SessionState + 96) + 4864LL;
  if ( !*(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20392LL) || (v7 = 1, !*(_QWORD *)(v6 + 15456)) )
    v7 = 0;
  *(_DWORD *)(v6 + 8648) |= 2u;
  if ( v7 && !(unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus(v4, v3, v5) )
    GreEnableEUDC(0LL, v13, v14);
  v8 = *(void **)(v6 + 9208);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(v6 + 9208) = 0LL;
  }
  v9 = *(void **)(v6 + 9224);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(v6 + 9224) = 0LL;
  }
  if ( *(_DWORD *)(v6 + 14696) )
  {
    v11 = 0;
    v12 = v6 + 9548;
    do
    {
      if ( *(_DWORD *)(v12 - 124) && *(_WORD *)v12 && *(_QWORD *)(v12 + 524) )
        bUnloadEudcFont((struct PFE **)(v6 + 664LL * v11 + 10072));
      ++v11;
      v12 += 664LL;
    }
    while ( v11 < 7 );
  }
  v10 = *(void **)(v6 + 14712);
  if ( v10 )
  {
    Win32FreePool(v10);
    *(_QWORD *)(v6 + 14712) = 0LL;
  }
  if ( *(_DWORD *)(v6 + 14688) )
    PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v10, (unsigned __int16 *)(v6 + 14084));
}
