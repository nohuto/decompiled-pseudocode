/*
 * XREFs of ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400C64A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400B30EC (--$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400C6550 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DxgkEngAcquireDwmStateAndPDevLocks(const void *a1, unsigned int a2)
{
  __int64 SessionState; // rax
  int v5; // edx
  int v6; // r8d
  __int64 i; // rcx
  struct _ERESOURCE *v8; // rax
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rax
  struct _ERESOURCE *v11; // [rsp+40h] [rbp+18h] BYREF

  SessionState = W32GetSessionState(a1);
  GreAcquireSemaphore<7,>(*(struct _ERESOURCE ***)(SessionState + 88), v5, v6);
  for ( i = 0LL; ; i = (__int64)v9 )
  {
    v8 = hdevEnumerate<1>(i);
    v9 = v8;
    if ( !v8 )
      break;
    v11 = v8;
    v10 = *(_QWORD *)&v8[24].NumberOfSharedWaiters;
    if ( v10
      && ((__int64)v9->ExclusiveWaiters & 0x20400) == 0
      && *(const void **)(v10 + 232) == a1
      && *(_DWORD *)(v10 + 248) < a2 )
    {
      GreAcquireSemaphore<8,PDEVOBJ>(v9);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v11,
        (struct _SURFOBJ *)((v9[24].OwnerEntry.OwnerThread + 24) & ((unsigned __int128)-(__int128)v9[24].OwnerEntry.OwnerThread >> 64)),
        0LL,
        0xEu);
    }
  }
}
