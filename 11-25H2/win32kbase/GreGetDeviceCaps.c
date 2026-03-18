/*
 * XREFs of GreGetDeviceCaps @ 0x140043070
 * Callers:
 *     xxxSetSysColors @ 0x1400AAAB0 (xxxSetSysColors.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x14014B5C0 (EnforceColorDependentSettings.c)
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

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int DeviceCapsInternal; // ebx
  __int64 v12; // [rsp+20h] [rbp-39h] BYREF
  bool v13; // [rsp+28h] [rbp-31h]
  _QWORD v14[16]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)PsIsWin32KFilterEnabled()
    && (unsigned int)PsGetWin32KFilterSet() == 5
    && a1 == (HDC)-589410304LL )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v15);
    v16 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 56968) + 48LL);
    if ( v16 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v16, a2);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v15);
      return DeviceCapsInternal;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v15);
    return 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
  if ( !v14[0] )
  {
    EngSetLastError(6u);
    goto LABEL_7;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(v14[0] + 48LL) + 40LL) & 0x8000;
  v13 = v5 == 0;
  v6 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  v12 = v6;
  if ( !v5 )
    GreAcquireSemaphoreShared<1,>(v6);
  v15 = *(_QWORD *)(v14[0] + 48LL);
  if ( !v15 )
  {
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded((NEEDDYNAMICMODECHANGESHARELOCK *)&v12);
LABEL_7:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
    return 0LL;
  }
  v8 = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v15, a2);
  if ( !v5 )
    GreReleaseSemaphoreShared<1,>(v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return v8;
}
