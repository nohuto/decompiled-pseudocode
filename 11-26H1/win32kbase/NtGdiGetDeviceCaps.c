/*
 * XREFs of NtGdiGetDeviceCaps @ 0x14003C450
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001A90C (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AA0C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B1F0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
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
  __int64 *v18; // rsi
  int v19; // r8d
  unsigned int DeviceCapsInternal; // edi
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int Win32KFilterSet; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r8d
  int v35; // r8d
  __int64 *v36; // [rsp+20h] [rbp-39h] BYREF
  bool v37; // [rsp+28h] [rbp-31h]
  __int64 v38; // [rsp+30h] [rbp-29h] BYREF
  int v39; // [rsp+38h] [rbp-21h]
  __int64 v40; // [rsp+40h] [rbp-19h]
  __int64 v41; // [rsp+48h] [rbp-11h]
  __int64 v42; // [rsp+50h] [rbp-9h] BYREF
  _QWORD *v43; // [rsp+58h] [rbp-1h]
  __int128 v44; // [rsp+70h] [rbp+17h] BYREF
  __int128 v45; // [rsp+80h] [rbp+27h]
  char v46; // [rsp+90h] [rbp+37h]
  __int64 v47; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v48; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    Win32KFilterSet = PsGetWin32KFilterSet();
    if ( a1 == (HDC)-589410304LL && Win32KFilterSet == 5 )
    {
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v47);
      v48 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30, v32, v33) + 56968) + 40LL);
      if ( v48 )
      {
        DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v48, a2);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v47,
          v35);
        return DeviceCapsInternal;
      }
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v47,
        v34);
      return 0;
    }
  }
  v40 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v42);
  DCOBJ::vLock((DCOBJ *)&v38, a1);
  v44 = 0LL;
  v45 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v6, v5);
  if ( CurrentThreadWin32Thread )
    v9 = *CurrentThreadWin32Thread;
  else
    v9 = 0LL;
  v10 = v9 + 8;
  v11 = -v9;
  v12 = (__int128 *)(v10 & -(__int64)(v11 != 0));
  *(_QWORD *)&v45 = &v38;
  *((_QWORD *)&v45 + 1) = UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic;
  if ( v12 )
  {
    v13 = (_QWORD *)v12 + 11;
    v14 = *((_QWORD *)v12 + 11);
    if ( *(__int128 **)(v14 + 8) != (__int128 *)((char *)v12 + 88) )
      goto LABEL_6;
    *(_QWORD *)&v44 = *((_QWORD *)v12 + 11);
    v12 = &v44;
    *((_QWORD *)&v44 + 1) = v13;
    *(_QWORD *)(v14 + 8) = &v44;
    v11 = (__int64)&v44;
    *v13 = &v44;
  }
  else
  {
    *((_QWORD *)&v44 + 1) = &v44;
    *(_QWORD *)&v44 = &v44;
  }
  v46 = 1;
  if ( !v38 )
    goto LABEL_33;
  if ( *(_WORD *)(v38 + 12) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v12, v8);
  v15 = *(unsigned __int16 *)(v38 + 12);
  if ( (_WORD)v15 != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v38);
  if ( v38 )
  {
    v16 = *(_DWORD *)(*(_QWORD *)(v38 + 48) + 40LL) & 0x8000;
    v37 = v16 == 0;
    v18 = *(__int64 **)(W32GetSessionState(v15) + 88);
    v36 = v18;
    if ( !v16 )
      GreAcquireSemaphoreShared<1,>(v18, v17, v19);
    v47 = *(_QWORD *)(v38 + 48);
    if ( v47 )
    {
      DeviceCapsInternal = GreGetDeviceCapsInternal((struct PDEVOBJ *)&v47, a2);
      if ( !v16 )
        GreReleaseSemaphoreShared<1,>(v18, v22, v23);
      v24 = *((_QWORD *)&v44 + 1);
      v38 &= -(__int64)(v46 != 0);
      v25 = v44;
      if ( *(__int128 **)(v44 + 8) == &v44 && **((__int128 ***)&v44 + 1) == &v44 )
      {
        **((_QWORD **)&v44 + 1) = v44;
        *(_QWORD *)(v25 + 8) = v24;
        v26 = v38;
        *((_QWORD *)&v44 + 1) = &v44;
        *(_QWORD *)&v44 = &v44;
        if ( v38 )
        {
          if ( v39 && (*(_DWORD *)(v38 + 44) & 2) != 0 )
          {
            DCOBJ::RestoreAttributesHelper((DCOBJ *)&v38);
            *(_DWORD *)(v38 + 44) &= ~2u;
            v26 = v38;
            v39 = 0;
          }
          _InterlockedDecrement16((volatile signed __int16 *)(v26 + 12));
          v38 = 0LL;
        }
        v27 = v42;
        v28 = v43;
        if ( *(__int64 **)(v42 + 8) == &v42 && (__int64 *)*v43 == &v42 )
        {
          *v43 = v42;
          *(_QWORD *)(v27 + 8) = v28;
          return DeviceCapsInternal;
        }
      }
LABEL_6:
      __fastfail(3u);
    }
    NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v36, 0LL, v19);
  }
  else
  {
LABEL_33:
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v38);
  return 0;
}
