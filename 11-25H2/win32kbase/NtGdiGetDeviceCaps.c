/*
 * XREFs of NtGdiGetDeviceCaps @ 0x140043D20
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1400431E4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004507C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdi
  unsigned int DeviceCapsInternal; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-39h] BYREF
  bool v12; // [rsp+28h] [rbp-31h]
  _QWORD v13[14]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)PsIsWin32KFilterEnabled()
    && (unsigned int)PsGetWin32KFilterSet() == 5
    && a1 == (HDC)-589410304LL )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v14);
    v15 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 48LL);
    if ( v15 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v15, a2);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
      return DeviceCapsInternal;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
    return 0;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  if ( !v13[0] )
  {
    EngSetLastError(6u);
    goto LABEL_10;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v13[0] + 48LL) + 40LL) & 0x8000;
  v12 = v5 == 0;
  v6 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  v11 = v6;
  if ( !v5 )
    GreAcquireSemaphoreShared<1,>(v6);
  v14 = *(_QWORD *)(v13[0] + 48LL);
  if ( !v14 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)&v11);
LABEL_10:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
    return 0;
  }
  DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v14, a2);
  if ( !v5 )
    GreReleaseSemaphoreShared<1,>(v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return DeviceCapsInternal;
}
