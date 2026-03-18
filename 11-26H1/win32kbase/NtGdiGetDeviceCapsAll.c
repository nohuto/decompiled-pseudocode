/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1400FE730
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001A90C (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400FE8B0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1400FE9C4 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  unsigned int DeviceCapsAllInternal; // ebx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 *v15[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v16[14]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() == 1 && a1 == (HDC)-589410304LL )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v17);
    v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 56968) + 40LL);
    if ( v18 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v18, a2);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v17,
        v14);
      return DeviceCapsAllInternal;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v17,
      v13);
    return 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  if ( !v16[0] )
  {
    EngSetLastError(6u);
    goto LABEL_5;
  }
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)v15,
    (*(_DWORD *)(*(_QWORD *)(v16[0] + 48LL) + 40LL) & 0x8000) == 0);
  v17 = *(_QWORD *)(v16[0] + 48LL);
  if ( !v17 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v15, v4, v5);
LABEL_5:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
    return 0LL;
  }
  DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v17, a2);
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(v15, v8, v9);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return DeviceCapsAllInternal;
}
