/*
 * XREFs of ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401041B8
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1401043D0 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140257CD0 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140289030 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?Add@TrustedFontFileTable@@SAXPEBG@Z @ 0x140293A08 (-Add@TrustedFontFileTable@@SAXPEBG@Z.c)
 */

__int64 __fastcall GrepAddFontResource(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  __int64 v12; // rdi
  size_t v14; // [rsp+28h] [rbp-90h]
  struct PFF *v15; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+D8h] [rbp+20h] BYREF

  v17 = 0;
  v9 = a3;
  v10 = a2;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(&v17);
    return v17;
  }
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v17;
  }
  if ( a4 != 0x80000000 )
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v15 = 0LL;
      v11 = (2 * (a4 & 1)) | 4;
      if ( (a4 & 2) == 0 )
        v11 = 2 * (a4 & 1);
      v12 = *(_QWORD *)(W32GetSessionState(2 * (a4 & 1), a2, a3) + 96);
      if ( (a4 & 0x1C) == 0 || *(_QWORD *)(v12 + 20384) || (unsigned int)bInitPrivatePFT() )
      {
        v16[0] = *(_QWORD *)((-(__int64)((a4 & 0x1C) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + v12 + 20392);
        if ( !v16[0]
          || (LODWORD(v14) = a7,
              !(unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                               (PUBLIC_PFTOBJ *)v16,
                               a1,
                               v10,
                               v9,
                               a6,
                               v14,
                               &v17,
                               v11,
                               &v15,
                               a4,
                               0,
                               0LL,
                               0,
                               0)) )
        {
          v17 = 0;
        }
        if ( v17 )
          GreQuerySystemTime(v12 + 20408);
      }
    }
    return v17;
  }
  TrustedFontFileTable::Add(a1);
  return 1LL;
}
