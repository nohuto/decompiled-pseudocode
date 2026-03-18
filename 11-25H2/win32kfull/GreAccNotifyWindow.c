/*
 * XREFs of GreAccNotifyWindow @ 0x1400952C0
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1401CC3AC (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 */

__int64 __fastcall GreAccNotifyWindow(Gre::Base *a1, void *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v10, v4);
  SURFREF::SURFREF((SURFREF *)v8);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v9 = v6;
  if ( v6 )
    vAccNotify((struct _SURFOBJ *)(v6 + 24), 5u, a2);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v10);
}
