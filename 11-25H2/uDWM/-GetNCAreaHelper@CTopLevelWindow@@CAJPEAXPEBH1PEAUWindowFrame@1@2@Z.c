/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003230C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800310F4 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800074A4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180032BEC (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180032C68 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x180032EB8 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x18003312C (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  int v6; // r8d
  int ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // ebx
  int v20; // edi
  unsigned int v21; // edi
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edx
  int v26; // edi
  CMILRefCountBase *v27; // rcx
  int *v28; // rcx
  int v29; // eax
  CMILRefCountBase **i; // rdi
  CBaseObject **v32; // rbx
  __int64 v33; // rdi
  __int64 j; // rcx
  CMILRefCountBase **iPropId; // [rsp+20h] [rbp-91h]
  int iPropIda[2]; // [rsp+20h] [rbp-91h]
  CMILRefCountBase **iPropIdb; // [rsp+20h] [rbp-91h]
  int iPropIdc[2]; // [rsp+20h] [rbp-91h]
  unsigned int iPropIdd; // [rsp+20h] [rbp-91h]
  struct _MARGINS v40; // [rsp+40h] [rbp-71h] BYREF
  int cxRightWidth; // [rsp+50h] [rbp-61h]
  unsigned int cxLeftWidth; // [rsp+54h] [rbp-5Dh]
  int cyTopHeight; // [rsp+58h] [rbp-59h]
  int cyBottomHeight; // [rsp+5Ch] [rbp-55h]
  __int64 v45; // [rsp+60h] [rbp-51h]
  int *v46; // [rsp+68h] [rbp-49h]
  CMILRefCountBase *v47[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v48; // [rsp+80h] [rbp-31h]
  MARGINS pMargins; // [rsp+90h] [rbp-21h] BYREF
  struct _MARGINS v50; // [rsp+A0h] [rbp-11h] BYREF

  v6 = a2[1];
  pMargins = 0LL;
  ThemeMargins = GetThemeMargins(a1, 0LL, v6, 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1139;
    goto LABEL_28;
  }
  v12 = a2[3];
  cxLeftWidth = pMargins.cxLeftWidth;
  *(_OWORD *)v47 = 0LL;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v12, 2u, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1151;
    goto LABEL_28;
  }
  *((CMILRefCountBase **)a4 + 191) = v47[0];
  *((CMILRefCountBase **)a5 + 191) = v47[1];
  v13 = a2[4];
  LODWORD(v48) = pMargins.cxLeftWidth;
  LODWORD(v46) = pMargins.cxRightWidth;
  iPropId = v47;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v13, 2u, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1160;
    goto LABEL_28;
  }
  v14 = cxLeftWidth;
  *((CMILRefCountBase **)a4 + 193) = v47[0];
  *((CMILRefCountBase **)a5 + 193) = v47[1];
  v15 = *((unsigned int *)a2 + 1);
  LODWORD(v45) = pMargins.cxLeftWidth;
  cxRightWidth = pMargins.cxRightWidth;
  LODWORD(iPropId) = 1;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v15, v14, 0LL, iPropId, 2, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1178;
    goto LABEL_28;
  }
  ThemeMargins = GetThemePercentage(a1, a2[1], *a3, v16, (float *)a4 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1181;
    goto LABEL_28;
  }
  ThemeMargins = GetThemePercentage(a1, a2[1], a3[1], v17, (float *)a5 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1182;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1184;
    goto LABEL_28;
  }
  v40 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v40);
  v18 = *((unsigned int *)a2 + 6);
  cyTopHeight = pMargins.cyTopHeight;
  cyBottomHeight = pMargins.cyBottomHeight;
  iPropIda[0] = 6;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(
                   a1,
                   v18,
                   cxLeftWidth,
                   5LL,
                   *(_QWORD *)iPropIda,
                   7,
                   a4,
                   a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1201;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1203;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, ThemeMargins, iPropIdd, 0LL);
    return v11;
  }
  v40 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v40);
  v19 = pMargins.cyTopHeight;
  v20 = pMargins.cyBottomHeight;
  v40.cxLeftWidth = v48;
  v40.cxRightWidth = (int)v46;
  v40.cyTopHeight = cyTopHeight;
  v40.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v40);
  v40.cxRightWidth = cxRightWidth;
  v40.cyTopHeight = cyTopHeight;
  v40.cxLeftWidth = v45;
  v40.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v40);
  v40.cxLeftWidth = v48;
  v40.cxRightWidth = (int)v46;
  v40.cyTopHeight = v19;
  v40.cyBottomHeight = v20;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v40);
  v40.cxLeftWidth = v45;
  v40.cxRightWidth = cxRightWidth;
  v40.cyTopHeight = v19;
  v40.cyBottomHeight = v20;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v40);
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1217;
    goto LABEL_28;
  }
  v21 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, a2[12], 2u, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1223;
    goto LABEL_28;
  }
  *((CMILRefCountBase **)a4 + 209) = v47[0];
  *((CMILRefCountBase **)a5 + 209) = v47[1];
  v22 = a2[13];
  LODWORD(v46) = pMargins.cxLeftWidth;
  LODWORD(v48) = pMargins.cxRightWidth;
  iPropIdb = v47;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v22, 2u, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1232;
    goto LABEL_28;
  }
  *((CMILRefCountBase **)a4 + 211) = v47[0];
  *((CMILRefCountBase **)a5 + 211) = v47[1];
  v23 = *((unsigned int *)a2 + 10);
  cyBottomHeight = pMargins.cxLeftWidth;
  cyTopHeight = pMargins.cxRightWidth;
  LODWORD(iPropIdb) = 10;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v23, v21, 9LL, iPropIdb, 11, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1250;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1252;
    goto LABEL_28;
  }
  v40 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v40);
  v24 = *((unsigned int *)a2 + 15);
  cxRightWidth = pMargins.cyTopHeight;
  LODWORD(v45) = pMargins.cyBottomHeight;
  iPropIdc[0] = 15;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v24, v21, 14LL, *(_QWORD *)iPropIdc, 16, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1269;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1271;
    goto LABEL_28;
  }
  v40 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v40);
  v25 = a2[17];
  v26 = pMargins.cyTopHeight;
  cxLeftWidth = pMargins.cyBottomHeight;
  v50 = 0LL;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(a1, v25, &v50, v47);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1279;
    goto LABEL_28;
  }
  v27 = v47[0];
  *((CMILRefCountBase **)a4 + 219) = v47[0];
  *((_QWORD *)a5 + 219) = v27;
  CMILRefCountBase::AddRef(v27);
  v40 = v50;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v40);
  v40.cxRightWidth = v48;
  v40.cyTopHeight = cxRightWidth;
  v40.cxLeftWidth = (int)v46;
  v40.cyBottomHeight = v45;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v40);
  v40.cxRightWidth = cyTopHeight;
  v40.cyTopHeight = cxRightWidth;
  v40.cxLeftWidth = cyBottomHeight;
  v40.cyBottomHeight = v45;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v40);
  v40.cxLeftWidth = (int)v46;
  v40.cxRightWidth = v48;
  v40.cyBottomHeight = cxLeftWidth;
  v40.cyTopHeight = v26;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v40);
  v40.cxLeftWidth = cyBottomHeight;
  v40.cxRightWidth = cyTopHeight;
  v40.cyBottomHeight = cxLeftWidth;
  v40.cyTopHeight = v26;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v40);
  v45 = 18LL;
  v48 = a4 - a5;
  v28 = (int *)(a2 + 18);
  v29 = 18;
  for ( i = (CMILRefCountBase **)((char *)a5 + 1768); ; i += 2 )
  {
    v46 = v28;
    cxRightWidth = v29;
    if ( v29 > 21 )
      break;
    if ( *v28 )
    {
      LOWORD(v11) = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *v28, 2u, &pMargins);
      if ( (unsigned __int16)v11 == 1168 )
        break;
      *(CMILRefCountBase **)((char *)i + v48) = v47[0];
      v28 = v46;
      *i = v47[1];
      v29 = cxRightWidth;
    }
    ++v29;
    ++v28;
  }
  if ( (_WORD)v11 == 1168 )
  {
    v32 = (CBaseObject **)((char *)a5 + 1768);
    v33 = a4 - a5;
    for ( j = 18LL; j <= 21; v45 = j )
    {
      if ( a2[j] )
      {
        if ( *(CBaseObject **)((char *)v32 + v33) )
        {
          CBaseObject::Release(*(CBaseObject **)((char *)v32 + v33));
          *(CBaseObject **)((char *)v32 + v33) = 0LL;
          j = v45;
        }
        if ( *v32 )
        {
          CBaseObject::Release(*v32);
          *v32 = 0LL;
          j = v45;
        }
      }
      ++j;
      v32 += 2;
    }
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(a1, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropIdd = 1327;
    goto LABEL_28;
  }
  return v11;
}
