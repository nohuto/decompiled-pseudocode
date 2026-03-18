/*
 * XREFs of UmfdLoadFontFileView @ 0x1400B5DE4
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14010DAC8 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140228C20 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B58A4 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1400B5A6C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECT.c)
 *     _UmfdLoadFontFileView_::_2_::_lambda_1_::operator() @ 0x1401BD7D0 (_UmfdLoadFontFileView_--_2_--_lambda_1_--operator().c)
 *     ?bIsPathInSystemFontsDir@@YAHPEBG@Z @ 0x1401D90E8 (-bIsPathInSystemFontsDir@@YAHPEBG@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z @ 0x1401F13B4 (-PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z.c)
 *     ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAUFONTFILEVIEW@@K@Z @ 0x140303A40 (-FNTCacheValidateFntFileInfo@@YA-AW4FntFileInfoValidationResult@@PEAPEAUFONTFILEVIEW@@K@Z.c)
 *     EngFntCacheFault @ 0x1403041E0 (EngFntCacheFault.c)
 */

char __fastcall UmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        __int64 *a9,
        HDEV *a10,
        unsigned int *a11,
        int a12,
        int *a13)
{
  char result; // al
  unsigned int v16; // ebx
  ULONG *v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r13d
  int v23; // esi
  char v24; // di
  HDEV v25; // rax
  __int64 v26; // rdx
  unsigned int i; // r8d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 SessionState; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  char v37; // r15
  ULONG v38; // esi
  int v39; // r14d
  __int64 v40; // rdx
  unsigned int j; // r14d
  int IsPathInSystemFontsDir; // eax
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // eax
  unsigned int v47; // [rsp+78h] [rbp-59h] BYREF
  int v48; // [rsp+7Ch] [rbp-55h] BYREF
  int v49; // [rsp+80h] [rbp-51h] BYREF
  HDEV v50; // [rsp+88h] [rbp-49h] BYREF
  HDEV v51; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v52[14]; // [rsp+98h] [rbp-39h] BYREF
  struct FONTFILEVIEW **v53; // [rsp+128h] [rbp+57h] BYREF
  unsigned int v54; // [rsp+130h] [rbp+5Fh] BYREF

  v54 = a4;
  v53 = a3;
  result = UmfdHostLifeTimeManager::EnsureUmfdHost();
  v16 = 0;
  *a9 = 0LL;
  *a10 = 0LL;
  if ( result )
  {
    v17 = a11;
    v51 = 0LL;
    v47 = 0;
    v49 = 0;
    v48 = 0;
    v18 = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v51, &v47, a12, &v48, &v49, v53, v54, a7, a8);
    v22 = v48;
    v23 = v18;
    result = (char)a13;
    if ( a13 )
      *a13 = v48;
    if ( !v49 )
    {
      v24 = 1;
      v25 = *(HDEV *)(*(_QWORD *)(W32GetSessionState(v20, v19, v21) + 96) + 24152LL);
      v50 = v25;
      if ( v23 && v51 != v25 )
      {
        v23 = 0;
        EngFntCacheFault(*v17, 1u);
        *v17 = 0;
      }
      v26 = v54;
      for ( i = 0; i < v54; v26 = v54 )
      {
        v28 = i++;
        *((_DWORD *)v53[v28] + 16) = 0;
      }
      UmfdInsertFontFileViewForLookup(v53, v26);
      SessionState = W32GetSessionState(v30, v29, v31);
      v52[0] = &v50;
      v52[1] = &a7;
      v34 = *(_QWORD *)(SessionState + 96);
      v52[2] = &v54;
      v52[6] = v34 + 4872;
      v52[3] = &v53;
      v52[4] = &a5;
      v52[5] = &a6;
      if ( v23 )
      {
        if ( v47 == 1 || (v37 = 1, !a1) )
          v37 = 0;
        v38 = *v17;
        v39 = 0;
        if ( v22 && v37 )
        {
          v46 = FNTCacheValidateFntFileInfo(v53, v54);
          v39 = v46;
          if ( v46 == 1 )
          {
            v38 = 0;
          }
          else if ( v46 == 2 )
          {
            goto LABEL_10;
          }
        }
        LOBYTE(v33) = v37;
        v36 = UmfdLoadFontFileView_::_2_::_lambda_1_::operator()(v52, v33, v38);
        if ( v36 )
        {
          for ( j = 0; j < v54; ++j )
          {
            *((_BYTE *)v53[j] + 44) = 1;
            if ( !v37 )
            {
              IsPathInSystemFontsDir = bIsPathInSystemFontsDir(*((wchar_t **)v53[j] + 10));
              *((_BYTE *)v53[j] + 45) = IsPathInSystemFontsDir != 0;
            }
          }
        }
        else
        {
          if ( v47 != 1 || !a1 )
            v24 = 0;
          if ( v22 && v24 )
            v39 = FNTCacheValidateFntFileInfo(v53, v54);
          if ( v39 == 2 )
            goto LABEL_10;
          LOBYTE(v40) = v24;
          v36 = UmfdLoadFontFileView_::_2_::_lambda_1_::operator()(v52, v40, 0LL);
        }
        if ( !v36 )
        {
LABEL_10:
          result = (char)a10;
          *a10 = 0LL;
          return result;
        }
      }
      else
      {
        LOBYTE(v33) = a1 != 0LL;
        v35 = UmfdLoadFontFileView_::_2_::_lambda_1_::operator()(v52, v33, *v17);
        v36 = v35;
        if ( !v35 )
          goto LABEL_10;
        v43 = *(_DWORD *)(v35 + 20);
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              if ( v45 == 1 )
                v16 = 4;
            }
            else
            {
              v16 = 3;
            }
          }
          else
          {
            v16 = 2;
          }
        }
        else
        {
          v16 = 1;
        }
        PutFntCacheDrvAndFileInfo(*v17, v50, v16, v53, v54);
      }
      *a10 = v50;
      result = (char)a9;
      *a9 = v36;
    }
  }
  return result;
}
