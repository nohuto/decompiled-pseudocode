/*
 * XREFs of GreGetDeviceCaps @ 0x14003C780
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     EnforceColorDependentSettings @ 0x140080470 (EnforceColorDependentSettings.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001A90C (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     W32GetCurrentThreadCrossSessionCheck @ 0x14003D690 (W32GetCurrentThreadCrossSessionCheck.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14003D720 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  int v18; // ecx
  __int64 *v19; // rdi
  int v20; // r8d
  int v22; // ecx
  unsigned int DeviceCapsInternal; // esi
  int v24; // r8d
  struct _ERESOURCE *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int Win32KFilterSet; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r8d
  unsigned int v41; // ebx
  int v42; // r8d
  __int64 *v43; // [rsp+30h] [rbp-49h] BYREF
  bool v44; // [rsp+38h] [rbp-41h]
  __int64 v45; // [rsp+40h] [rbp-39h] BYREF
  int v46; // [rsp+48h] [rbp-31h]
  __int64 v47; // [rsp+50h] [rbp-29h]
  __int64 v48; // [rsp+58h] [rbp-21h]
  __int64 v49; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v50; // [rsp+68h] [rbp-11h]
  __int128 v51; // [rsp+80h] [rbp+7h] BYREF
  __int128 v52; // [rsp+90h] [rbp+17h]
  char v53; // [rsp+A0h] [rbp+27h]
  __int64 v54; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v55; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !(unsigned __int8)PsIsWin32KFilterEnabled()
    || (Win32KFilterSet = PsGetWin32KFilterSet(), a1 != (HDC)-589410304LL)
    || Win32KFilterSet != 5 )
  {
    v47 = *(_QWORD *)(W32GetSessionState(v4) + 88);
    v48 = 0LL;
    v45 = 0LL;
    v46 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v49);
    DCOBJ::vLock((DCOBJ *)&v45, a1);
    v51 = 0LL;
    v52 = 0LL;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v6, v5);
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    v10 = v9 + 8;
    v11 = -v9;
    v12 = (__int128 *)(v10 & -(__int64)(v11 != 0));
    *(_QWORD *)&v52 = &v45;
    *((_QWORD *)&v52 + 1) = UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic;
    if ( v12 )
    {
      v13 = (_QWORD *)v12 + 11;
      v14 = *((_QWORD *)v12 + 11);
      if ( *(__int128 **)(v14 + 8) != (__int128 *)((char *)v12 + 88) )
        goto LABEL_6;
      *(_QWORD *)&v51 = *((_QWORD *)v12 + 11);
      v12 = &v51;
      *((_QWORD *)&v51 + 1) = v13;
      *(_QWORD *)(v14 + 8) = &v51;
      v11 = (__int64)&v51;
      *v13 = &v51;
    }
    else
    {
      *((_QWORD *)&v51 + 1) = &v51;
      *(_QWORD *)&v51 = &v51;
    }
    v53 = 1;
    if ( !v45 )
      goto LABEL_37;
    if ( *(_WORD *)(v45 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v12, v8);
    v15 = *(unsigned __int16 *)(v45 + 12);
    if ( (_WORD)v15 != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v45);
    if ( v45 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(v45 + 48) + 40LL);
      v19 = *(__int64 **)(W32GetSessionState(v15) + 88);
      v43 = v19;
      v44 = (v16 & 0x8000) == 0;
      if ( (v16 & 0x8000) == 0 )
      {
        if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v18,
            (unsigned int)&LockAcquireShared,
            v20,
            *(_DWORD *)v19 + 624,
            (__int64)L"DynamicModeChange");
        EngAcquireSemaphoreShared((HSEMAPHORE)(*v19 + 624));
        GrepAcquireLockValidate<1>();
      }
      v54 = *(_QWORD *)(v45 + 48);
      if ( v54 )
      {
        DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v54, a2);
        if ( (v16 & 0x8000) == 0 )
        {
          v25 = (struct _ERESOURCE *)(*v19 + 624);
          if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz_EtwWriteTransfer(
              v22,
              (unsigned int)&LockRelease,
              v24,
              *(_DWORD *)v19 + 624,
              (__int64)L"DynamicModeChange");
          v26 = W32GetCurrentThreadCrossSessionCheck();
          v27 = v26 + 8;
          v28 = -v26;
          if ( (v27 & -(__int64)(v28 != 0)) != 0 && (*(_BYTE *)((v27 & -(__int64)(v28 != 0)) + 9))-- == 1 )
            *(_QWORD *)(v27 & -(__int64)(v28 != 0)) &= ~2uLL;
          GreReleaseSemaphoreSharedInternal(v25);
        }
        v30 = *((_QWORD *)&v51 + 1);
        v45 &= -(__int64)(v53 != 0);
        v31 = v51;
        if ( *(__int128 **)(v51 + 8) == &v51 && **((__int128 ***)&v51 + 1) == &v51 )
        {
          **((_QWORD **)&v51 + 1) = v51;
          *(_QWORD *)(v31 + 8) = v30;
          v32 = v45;
          *((_QWORD *)&v51 + 1) = &v51;
          *(_QWORD *)&v51 = &v51;
          if ( v45 )
          {
            if ( v46 && (*(_DWORD *)(v45 + 44) & 2) != 0 )
            {
              DCOBJ::RestoreAttributesHelper((DCOBJ *)&v45);
              *(_DWORD *)(v45 + 44) &= ~2u;
              v32 = v45;
              v46 = 0;
            }
            _InterlockedDecrement16((volatile signed __int16 *)(v32 + 12));
            v45 = 0LL;
          }
          v33 = v49;
          v34 = v50;
          if ( *(__int64 **)(v49 + 8) == &v49 && (__int64 *)*v50 == &v49 )
          {
            *v50 = v49;
            *(_QWORD *)(v33 + 8) = v34;
            return DeviceCapsInternal;
          }
        }
LABEL_6:
        __fastfail(3u);
      }
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v43, v17, v20);
    }
    else
    {
LABEL_37:
      EngSetLastError(6u);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v45);
    return 0LL;
  }
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v54);
  v55 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v36, v38, v39) + 56968) + 40LL);
  if ( !v55 )
  {
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v54,
      v40);
    return 0LL;
  }
  v41 = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v55, a2);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v54,
    v42);
  return v41;
}
