/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z @ 0x14010C768 (-dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z.c)
 *     ?lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z @ 0x14010CA0C (-lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x14010DA74 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 *     GreMarkDeletableFont @ 0x14010FAD4 (GreMarkDeletableFont.c)
 *     FinishStockFontInit @ 0x14010FBC0 (FinishStockFontInit.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiQueryFontAssocInfo @ 0x140281810 (NtGdiQueryFontAssocInfo.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, _QWORD *HDEV)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  struct Gre::Base::SESSION_GLOBALS *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  struct LFONT *v11; // rdx
  int v13; // ebx
  __int64 v14; // r8
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rdx

  v6 = Gre::Base::Globals(this);
  LOBYTE(v7) = 10;
  v8 = v6;
  v9 = HmgShareLock(v6, a2, v7, 1LL);
  v10 = (v9 + 24) & -(__int64)(v9 != 0);
  *(_QWORD *)this = v10;
  v11 = (struct LFONT *)((v10 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64));
  *((_QWORD *)this + 1) = v11;
  if ( v10 )
  {
    if ( (*(_BYTE *)(((v9 + 24) & -(__int64)(v9 != 0)) + 4) & 1) != 0 )
    {
      v13 = *(_DWORD *)(((v10 - 24) & ((unsigned __int128)-(__int128)((v9 + 24) & (unsigned __int64)-(__int64)(v9 != 0)) >> 64))
                      + 0x18);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v8, v11);
      *((_QWORD *)this + 1) = 0LL;
      if ( HDEV || (HDEV = (_QWORD *)UserGetHDEV()) != 0LL )
      {
        v15 = v13 - 4;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 != 1 )
            {
LABEL_11:
              *(_QWORD *)this = (*((_QWORD *)this + 1) + 24LL) & -(__int64)(*((_QWORD *)this + 1) != 0LL);
              return this;
            }
            v17 = HDEV[181];
          }
          else
          {
            v17 = HDEV[180];
          }
        }
        else
        {
          v17 = HDEV[179];
        }
        if ( v17 )
        {
          LOBYTE(v14) = 10;
          *((_QWORD *)this + 1) = HmgShareLock(v8, v17, v14, 1LL);
        }
        goto LABEL_11;
      }
    }
  }
  return this;
}
