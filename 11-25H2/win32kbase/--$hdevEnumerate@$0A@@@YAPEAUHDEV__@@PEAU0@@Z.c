/*
 * XREFs of ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140085148
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     hdevEnumerateAll @ 0x140085130 (hdevEnumerateAll.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1401770D0 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3CA0 (-DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

PDEV *__fastcall hdevEnumerate<0>(PDEV *this)
{
  __int64 v2; // rdi
  PDEV *v3; // rsi
  PDEV *v4; // rcx
  PDEV *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  GreAcquireSemaphore<19,>((struct _ERESOURCE **)v2);
  v3 = 0LL;
  v6 = this;
  if ( this )
    v4 = *(PDEV **)this;
  else
    v4 = *(PDEV **)(v2 + 3848);
  if ( v4 )
  {
    v3 = v4;
    PDEV::IncrementClientReferenceCount(v4);
  }
  if ( this )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)v2);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v6);
      return v3;
    }
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      PDEV::DecrementClientReferenceCountFastOpt(this, (struct Gre::Base::SESSION_GLOBALS *)v2);
    else
      PDEV::DecrementClientReferenceCount(this);
  }
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    *(_QWORD *)v2);
  return v3;
}
