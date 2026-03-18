/*
 * XREFs of ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x140087710
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400479D0 (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400877D0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 */

void __fastcall DxgkEngReleasePDevAndDwmStateLocks(const void *a1, unsigned int a2)
{
  PDEV *i; // rcx
  PDEV *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 SessionState; // rax
  PDEV *v11; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (PDEV *)v7 )
  {
    v5 = hdevEnumerate<1>(i);
    v7 = (__int64 *)v5;
    if ( !v5 )
      break;
    v8 = (*((_DWORD *)v5 + 10) & 0x20400) == 0;
    v11 = v5;
    if ( v8 )
    {
      v9 = *((_QWORD *)v5 + 321);
      if ( *(const void **)(v9 + 232) == a1 && *(_DWORD *)(v9 + 248) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v11,
          (struct _SURFOBJ *)((v7[318] + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v7[318] >> 64)),
          0LL,
          2u);
        GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v7[6]);
      }
    }
  }
  SessionState = W32GetSessionState(v6);
  GreReleaseSemaphoreExclusive<7,>(*(struct _ERESOURCE ***)(SessionState + 88));
}
