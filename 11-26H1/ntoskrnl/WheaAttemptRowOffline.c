/*
 * XREFs of WheaAttemptRowOffline @ 0x1406D9BC0
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x14084E5CC (WheaPageOfflineAndPersist.c)
 *     WheapOfflineRow @ 0x14084F20C (WheapOfflineRow.c)
 *     WheapExecuteRowFailureCheck @ 0x1408500C0 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x1406DA108 (WheaPersistBadPageToRegistry.c)
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheaAddressTranslateAndAddToDefectList @ 0x14084E21C (WheaAddressTranslateAndAddToDefectList.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14084ED18 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x14084F764 (WheapLogPageOfflineAttemptEvent.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 */

__int64 __fastcall WheaAttemptRowOffline(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  _BYTE *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r13
  char *v11; // rbx
  int PageBadStatus; // eax
  int v13; // eax
  bool v14; // sf
  char v15; // al
  char v16; // al
  __int64 result; // rax
  unsigned int i; // ebx
  char v19; // r14
  int v20; // edx
  int v21; // r9d
  __int64 v22; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-31h]
  __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h]
  __int128 Src; // [rsp+50h] [rbp-19h] BYREF
  __int128 v27; // [rsp+60h] [rbp-9h]
  _TBYTE v28; // [rsp+70h] [rbp+7h]

  v4 = a3;
  v23 = a3;
  v25 = a2;
  v22 = 0LL;
  v6 = a2;
  v28 = 0.0;
  v8 = (_BYTE *)(a4 + 49);
  Src = 0LL;
  v27 = 0LL;
  if ( a3 )
  {
    v9 = a1 << 12;
    v10 = ~a4;
    v11 = (char *)(a4 + 49);
    do
    {
      v22 = v9;
      PageBadStatus = MmGetPageBadStatus(&v22);
      *(_DWORD *)(v11 - 9) = PageBadStatus;
      if ( !PageBadStatus )
      {
        v22 |= 1uLL;
        v24 = 4096LL;
        v13 = MmMarkPhysicalMemoryAsBad(&v22, &v24);
        v14 = v13 < 0;
        v15 = v13 == 0;
        if ( v14 )
          v15 = -1;
        *v11 = v15;
        if ( v15 )
        {
          v16 = -64;
        }
        else
        {
          v11[a4 + v10] = 0;
          v16 = 64;
        }
        *(v11 - 1) = v16;
      }
      v9 += 4096LL;
      v11 += 24;
      --v4;
    }
    while ( v4 );
    LODWORD(v4) = v23;
    v6 = v25;
  }
  result = WheapCallInUsePageNotificationCallbacks(a1, 0LL, (unsigned int)v4, a4);
  for ( i = 0; i < (unsigned int)v4; v8 += 24 )
  {
    if ( *(int *)(v8 - 9) >= 0 )
    {
      BYTE4(v28) = *v8;
      *(_DWORD *)((char *)&v28 + 5) = a1 + i;
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 42LL;
      *(_QWORD *)&v27 = 0x800000064C4E524BuLL;
      *((_QWORD *)&v27 + 1) = 0xA00000002LL;
      LODWORD(v28) = 1;
      HIBYTE(v28) = 1;
      WheaLogInternalEvent(&Src);
      v19 = 0;
      if ( *(_BYTE *)off_140E093B8 )
      {
        if ( *(_DWORD *)off_140E09578 == 1 )
        {
          WheaPersistBadPageToBcd(a1);
        }
        else if ( *(_DWORD *)off_140E09578 == 2 )
        {
          WheaPersistBadPageToRegistry(a1 + i);
        }
        v19 = 1;
      }
      v22 = (a1 + i) << 12;
      WheaAddressTranslateAndAddToDefectList(&v22, v6);
      if ( *v8 == 0xFF )
        LOBYTE(v20) = -1;
      else
        LOBYTE(v20) = *v8 == 0;
      LOBYTE(v21) = v19;
      result = WheapLogPageOfflineAttemptEvent(((unsigned int)a1 + i) << 12, v20, 0, v21, 0);
    }
    ++i;
  }
  return result;
}
