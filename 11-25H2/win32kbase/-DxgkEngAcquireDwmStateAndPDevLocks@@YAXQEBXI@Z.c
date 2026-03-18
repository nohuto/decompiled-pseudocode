/*
 * XREFs of ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400878A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140047938 (--$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400877D0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 */

void __fastcall DxgkEngAcquireDwmStateAndPDevLocks(const void *a1, unsigned int a2)
{
  __int64 SessionState; // rax
  PDEV *i; // rcx
  PDEV *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  PDEV *v9; // [rsp+40h] [rbp+18h] BYREF

  SessionState = W32GetSessionState(a1);
  GreAcquireSemaphore<7,>(*(struct _ERESOURCE ***)(SessionState + 88));
  for ( i = 0LL; ; i = (PDEV *)v7 )
  {
    v6 = hdevEnumerate<1>(i);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v9 = v6;
    v8 = *((_QWORD *)v6 + 321);
    if ( v8 && (*(_DWORD *)(v7 + 40) & 0x20400) == 0 && *(const void **)(v8 + 232) == a1 && *(_DWORD *)(v8 + 248) < a2 )
    {
      GreAcquireSemaphore<8,PDEVOBJ>(v7);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v9,
        (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v7 + 2544) >> 64)),
        0LL,
        0xEu);
    }
  }
}
