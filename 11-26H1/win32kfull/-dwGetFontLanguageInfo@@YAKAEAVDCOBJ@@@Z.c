/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z @ 0x14010C768
 * Callers:
 *     NtGdiGetDCDword @ 0x1400B00C0 (NtGdiGetDCDword.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z @ 0x1400C6B4C (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVXDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400C6FC0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14010FA80 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct DCOBJ *a1)
{
  unsigned int v2; // ebx
  HDEV v3; // rax
  __int64 v4; // rdx
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct PFE *v10; // rax
  __int64 v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  unsigned int v14; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-45h] BYREF
  HDEV v16; // [rsp+40h] [rbp-41h] BYREF
  struct _POINTL v17; // [rsp+48h] [rbp-39h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v20[96]; // [rsp+68h] [rbp-19h] BYREF

  v2 = 0x8000;
  v3 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
  v16 = v3;
  if ( v3 )
  {
    if ( ((_DWORD)v3[10] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v16);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)v19, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v16);
    v7 = v19[1];
    if ( v19[0] && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization((__int64)v5, v4, v6) >= 0 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v8, v9) + 96) + 20320LL);
      GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
        (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
        v18);
      v15 = 0;
      v14 = 0;
      v17 = 0LL;
      memset_0(v20, 0, sizeof(v20));
      BuildMapperParameters((struct MAPPER::PARAMETERS *)v20, a1, (*(_DWORD *)(v7 + 28) & 2) != 0, 0);
      v10 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)v19, (struct MAPPER::PARAMETERS *)v20, &v15, &v17, &v14);
      if ( v10 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v14 >> 8;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
        v11 = *((_QWORD *)v10 + 4);
        v2 = *(_DWORD *)(v11 + 164) != 0 ? 8 : 0;
        if ( (*(_DWORD *)(v11 + 48) & 0x80000001) != 0 )
          v2 |= 0x40000u;
      }
      SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v18);
    }
    if ( v7 )
    {
      v12 = Gre::Base::Globals(v5);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12, (struct LFONT *)v7);
    }
  }
  return v2;
}
