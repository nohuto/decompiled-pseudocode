/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1400E76C0
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400465D0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400E7800 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1400E7840 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  unsigned int DeviceCapsAllInternal; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v9[14]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v11; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() == 1 && a1 == (HDC)-589410304LL )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v10);
    v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968) + 48LL);
    if ( v11 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v11, a2);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v10);
      return DeviceCapsAllInternal;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v10);
    return 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( !v9[0] )
  {
    EngSetLastError(6u);
    goto LABEL_5;
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)v8,
    (*(_DWORD *)(*(_QWORD *)(v9[0] + 48LL) + 40LL) & 0x8000) == 0);
  v10 = *(_QWORD *)(v9[0] + 48LL);
  if ( !v10 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v8);
LABEL_5:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
    return 0LL;
  }
  DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v10, a2);
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v8);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return DeviceCapsAllInternal;
}
