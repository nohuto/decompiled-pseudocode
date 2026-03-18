/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48
 * Callers:
 *     ?lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z @ 0x1400BADDC (-lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BC67C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BDE04 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 *     FinishStockFontInit @ 0x140146690 (FinishStockFontInit.c)
 *     GreMarkDeletableFont @ 0x14014AA78 (GreMarkDeletableFont.c)
 *     NtGdiQueryFontAssocInfo @ 0x1401E8510 (NtGdiQueryFontAssocInfo.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401FCDC8 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262AA0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, HDEV a3, __int64 a4)
{
  struct HLFONT__ *v5; // rcx
  HDEV HDEV; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  struct LFONT *v9; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rcx

  v5 = a2;
  LOBYTE(a2) = 10;
  HDEV = a3;
  v7 = HmgShareLock(v5, a2, a3, a4);
  v8 = (v7 + 24) & -(__int64)(v7 != 0);
  *(_QWORD *)this = v8;
  v9 = (struct LFONT *)((v8 - 24) & -(__int64)(v8 != 0));
  *((_QWORD *)this + 1) = v9;
  if ( v8 )
  {
    if ( (*(_BYTE *)(((v7 + 24) & -(__int64)(v7 != 0)) + 4) & 1) != 0 )
    {
      v11 = *(_DWORD *)(((v8 - 24) & -(__int64)(v8 != 0)) + 0x18);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9);
      *((_QWORD *)this + 1) = 0LL;
      if ( HDEV || (HDEV = (HDEV)UserGetHDEV()) != 0LL )
      {
        v15 = v11 - 4;
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
            v17 = *((_QWORD *)HDEV + 181);
          }
          else
          {
            v17 = *((_QWORD *)HDEV + 180);
          }
        }
        else
        {
          v17 = *((_QWORD *)HDEV + 179);
        }
        if ( v17 )
        {
          LOBYTE(v12) = 10;
          *((_QWORD *)this + 1) = HmgShareLock(v17, v12, v13, v14);
        }
        goto LABEL_11;
      }
    }
  }
  return this;
}
