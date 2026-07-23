/*
 * XREFs of WheapAttemptPhysicalPageOffline @ 0x1407B814C
 * Callers:
 *     WheaAttemptClearPoison @ 0x1407B7A40 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407B7B20 (WheaAttemptPhysicalPageOffline.c)
 *     WheaPageOfflineAndPersist @ 0x1407B7D34 (WheaPageOfflineAndPersist.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1407B8370 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WheapOfflinePage @ 0x1407B8750 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x1407B88A8 (WheapOfflineRow.c)
 * Callees:
 *     WheaGetNotifyAllOfflinesPolicy @ 0x140650E30 (WheaGetNotifyAllOfflinesPolicy.c)
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x1406510BC (WheaPersistBadPageToRegistry.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WheaAddressTranslateAndAddToDefectList @ 0x1407B798C (WheaAddressTranslateAndAddToDefectList.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407B83C8 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x1407B859C (WheapClearPoison.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1407B8DC0 (WheapLogPageOfflineAttemptEvent.c)
 */

__int64 __fastcall WheapAttemptPhysicalPageOffline(
        LARGE_INTEGER a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8)
{
  char v8; // r15
  __int64 v9; // rbx
  char v11; // si
  char v12; // di
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // r14d
  char v18; // bl
  bool NotifyAllOfflinesPolicy; // al
  __int64 v20; // rdx
  bool v21; // r15
  char v22; // bl
  int v25; // [rsp+34h] [rbp-65h]
  __int64 v26; // [rsp+38h] [rbp-61h] BYREF
  __int64 v27; // [rsp+40h] [rbp-59h] BYREF
  LARGE_INTEGER StartAddress; // [rsp+48h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-49h]
  __int128 *v30; // [rsp+58h] [rbp-41h]
  __int128 Src; // [rsp+60h] [rbp-39h] BYREF
  __int128 v32; // [rsp+70h] [rbp-29h]
  _TBYTE v33; // [rsp+80h] [rbp-19h]

  v8 = 0;
  v30 = a3;
  StartAddress = a1;
  v9 = a2 << 12;
  Src = 0LL;
  v33 = 0.0;
  v32 = 0LL;
  v29 = a2 << 12;
  v26 = a2 << 12;
  v27 = 4096LL;
  if ( a5 )
  {
    v25 = 2;
  }
  else
  {
    v25 = 1;
    v26 = v9 | 1;
  }
  v11 = -1;
  v12 = -1;
  v13 = MmMarkPhysicalMemoryAsBad((int *)&v26, &v27);
  v17 = v13;
  if ( v13 >= 0 )
  {
    v12 = v13 == 0;
    if ( WheapClearPoisonSupported && a6 && (int)WheapClearPoison(&StartAddress) >= 0 )
      return v17;
    v18 = 0;
    *(_BYTE *)(a8 + 48) = 0;
    if ( a4 )
    {
      *(_BYTE *)(a8 + 48) = 1;
      v18 = 1;
    }
    NotifyAllOfflinesPolicy = WheaGetNotifyAllOfflinesPolicy();
    v21 = NotifyAllOfflinesPolicy;
    if ( (v17 || NotifyAllOfflinesPolicy) && !a7 )
    {
      if ( NotifyAllOfflinesPolicy )
      {
        v22 = v18 | 0x40;
        *(_BYTE *)(a8 + 48) = v22;
        if ( !v17 )
          *(_BYTE *)(a8 + 48) = v22 | 0x80;
      }
      LOBYTE(v20) = a5;
      WheapCallInUsePageNotificationCallbacks(a2, v20, 1LL, a8);
    }
    LODWORD(v33) = v25;
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 42LL;
    *(_QWORD *)&v32 = 0x800000064C4E524BuLL;
    *((_QWORD *)&v32 + 1) = 0xA00000002LL;
    BYTE4(v33) = v12;
    *(_DWORD *)((char *)&v33 + 5) = a2;
    HIBYTE(v33) = v21;
    WheaLogInternalEvent(&Src);
    LODWORD(v9) = v29;
    v8 = 0;
  }
  if ( *(_BYTE *)off_140E09478 )
  {
    v14 = *(_DWORD *)off_140E09638;
    if ( *(_DWORD *)off_140E09638 == 1 )
    {
      WheaPersistBadPageToBcd((UNICODE_STRING *)a2);
LABEL_23:
      v8 = 1;
      WheaAddressTranslateAndAddToDefectList((__int64)&v26, v30);
      goto LABEL_24;
    }
    if ( v14 == 2 )
    {
      WheaPersistBadPageToRegistry(a2);
      goto LABEL_23;
    }
  }
LABEL_24:
  if ( v12 != -1 )
    v11 = v12 == 0;
  LOBYTE(v16) = v8;
  LOBYTE(v15) = a5;
  LOBYTE(v14) = v11;
  WheapLogPageOfflineAttemptEvent(v9, v14, v15, v16, a4);
  return v17;
}
