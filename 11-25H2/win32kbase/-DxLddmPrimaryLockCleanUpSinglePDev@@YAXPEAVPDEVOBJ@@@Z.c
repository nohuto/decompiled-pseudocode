/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013E588
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x140072CEC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockSprite @ 0x1400863E0 (GreLockSprite.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     vSpUnTearDownSprites @ 0x14023E6C0 (vSpUnTearDownSprites.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rcx
  __int64 SessionState; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  int v9; // ecx

  GreLockVisRgn(*(_QWORD *)a1);
  GreLockSprite(*(_QWORD *)a1);
  GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)a1);
  v2 = (_QWORD **)(*(_QWORD *)a1 + 2616LL);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v6 = (_QWORD *)*v3;
    v7 = v3;
    v3 = v6;
    if ( (_QWORD *)v6[1] != v7 || (v8 = (_QWORD *)v7[1], (_QWORD *)*v8 != v7) )
      __fastfail(3u);
    *v8 = v6;
    v6[1] = v8;
    v9 = *((_DWORD *)v7 + 5);
    if ( v9 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2632LL) -= v9;
      vSpUnTearDownSprites(*(_QWORD *)a1, (char *)v7 + 28);
    }
    GreDeleteFastMutex((char *)v7);
  }
  GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)(*(_QWORD *)a1 + 48LL));
  SessionState = W32GetSessionState(v4);
  GreReleaseSemaphoreExclusive<6,>(*(struct _ERESOURCE ***)(SessionState + 88));
  GreUnlockVisRgn(*(_QWORD *)a1);
}
