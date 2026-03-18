/*
 * XREFs of xxxLW_LoadFonts @ 0x140147F80
 * Callers:
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     NtUserLW_LoadFonts @ 0x140147F40 (NtUserLW_LoadFonts.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxAddFontResourceW @ 0x140128314 (xxxAddFontResourceW.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x140147AD0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140148224 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ClientLoadLocalT1Fonts @ 0x1401A3E24 (ClientLoadLocalT1Fonts.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401A4014 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     CloseFNTCache @ 0x14030404C (CloseFNTCache.c)
 */

__int64 __fastcall xxxLW_LoadFonts(int a1)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // r9
  __int64 v10; // rcx
  unsigned int Count; // eax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // r9
  const unsigned __int16 *v14; // r8
  const unsigned __int16 *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // [rsp+48h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v24, 1);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
  {
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v24);
    if ( a1 )
    {
      Interval.QuadPart = 0LL;
      v5 = 0;
      while ( !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 66080) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 68612) && v5 >= 0x960 )
          goto LABEL_12;
        Count = AtomicExecutionCheck::GetCount();
        if ( Count )
          KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v24, 1);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v24);
        ++v5;
      }
      xxxbEnumerateRegistryFonts(0x401u, 0x38u, v8, v9);
      xxxbEnumerateRegistryFonts(2u, 0x38u, v12, v13);
      xxxbEnumerateRegistryFonts(2u, 6u, v14, v15);
LABEL_12:
      *(_DWORD *)(W32GetUserGdiSessionState(v10) + 24) = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf", 1u, 0LL);
      if ( (unsigned int)xxxLoadPermanentFonts(v17, v16)
        && *(_DWORD *)(W32GetUserSessionState(v19, v18) + 66080)
        && !*(_DWORD *)(W32GetUserSessionState(v21, v20) + 66084) )
      {
        ClientLoadLocalT1Fonts();
        *(_DWORD *)(W32GetUserSessionState(v23, v22) + 66084) = 1;
        CloseFNTCache();
      }
    }
    return 1LL;
  }
  else
  {
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v24);
    return 0LL;
  }
}
