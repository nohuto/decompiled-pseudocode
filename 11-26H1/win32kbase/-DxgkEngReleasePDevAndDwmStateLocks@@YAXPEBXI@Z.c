/*
 * XREFs of ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x1400C7620
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400C6550 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C796C (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DxgkEngReleasePDevAndDwmStateLocks(const void *a1, unsigned int a2)
{
  __int64 i; // rcx
  struct _ERESOURCE *v5; // rax
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 SessionState; // rax
  struct _ERESOURCE *v11; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (__int64)v7 )
  {
    v5 = hdevEnumerate<1>(i);
    v7 = v5;
    if ( !v5 )
      break;
    v8 = ((__int64)v5->ExclusiveWaiters & 0x20400) == 0;
    v11 = v5;
    if ( v8 )
    {
      v9 = *(_QWORD *)&v5[24].NumberOfSharedWaiters;
      if ( *(const void **)(v9 + 232) == a1 && *(_DWORD *)(v9 + 248) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v11,
          (struct _SURFOBJ *)((v7[24].OwnerEntry.OwnerThread + 24) & ((unsigned __int128)-(__int128)v7[24].OwnerEntry.OwnerThread >> 64)),
          0LL,
          2u);
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v7);
      }
    }
  }
  SessionState = W32GetSessionState(v6);
  GreReleaseSemaphoreExclusive<7,>(*(_QWORD *)(SessionState + 88));
}
