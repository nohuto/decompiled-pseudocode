/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180003B34
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180004438 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800044A4 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180004738 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180004B90 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180004FCC (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  int v6; // r8d
  HRESULT ThemeMargins; // eax
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
  CBaseObject *v27; // rcx
  int v28; // eax
  int *v29; // rcx
  CBaseObject **i; // rdi
  const int *v32; // r15
  CBaseObject **v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdi
  CBaseObject *v36; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-91h]
  struct _MARGINS v38; // [rsp+40h] [rbp-71h] BYREF
  __int64 v39; // [rsp+50h] [rbp-61h]
  unsigned int cxLeftWidth; // [rsp+58h] [rbp-59h]
  int cyTopHeight; // [rsp+5Ch] [rbp-55h]
  int cyBottomHeight; // [rsp+60h] [rbp-51h]
  int cxRightWidth; // [rsp+64h] [rbp-4Dh]
  int *v44; // [rsp+68h] [rbp-49h]
  CBaseObject *v45[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v46; // [rsp+80h] [rbp-31h]
  MARGINS pMargins; // [rsp+90h] [rbp-21h] BYREF
  struct _MARGINS v48; // [rsp+A0h] [rbp-11h] BYREF

  v6 = a2[1];
  pMargins = 0LL;
  ThemeMargins = GetThemeMargins(a1, 0LL, v6, 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1048;
    goto LABEL_28;
  }
  v12 = a2[3];
  cxLeftWidth = pMargins.cxLeftWidth;
  *(_OWORD *)v45 = 0LL;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v12, 2u, &pMargins, v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1060;
    goto LABEL_28;
  }
  *((CBaseObject **)a4 + 190) = v45[0];
  *((CBaseObject **)a5 + 190) = v45[1];
  v13 = a2[4];
  cxRightWidth = pMargins.cxLeftWidth;
  LODWORD(v46) = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v13, 2u, &pMargins, v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1069;
    goto LABEL_28;
  }
  v14 = cxLeftWidth;
  *((CBaseObject **)a4 + 192) = v45[0];
  *((CBaseObject **)a5 + 192) = v45[1];
  v15 = *((unsigned int *)a2 + 1);
  LODWORD(v44) = pMargins.cxLeftWidth;
  LODWORD(v39) = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v15, v14, 0LL, 1, 2, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1087;
    goto LABEL_28;
  }
  ThemeMargins = GetThemePercentage(a1, a2[1], *a3, v16, (float *)a4 + 463);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1090;
    goto LABEL_28;
  }
  ThemeMargins = GetThemePercentage(a1, a2[1], a3[1], v17, (float *)a5 + 463);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1091;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1093;
    goto LABEL_28;
  }
  v38 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v38);
  v18 = *((unsigned int *)a2 + 6);
  cyTopHeight = pMargins.cyTopHeight;
  cyBottomHeight = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v18, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1110;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1112;
    goto LABEL_28;
  }
  v38 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v38);
  v19 = pMargins.cyTopHeight;
  v20 = pMargins.cyBottomHeight;
  v38.cxLeftWidth = cxRightWidth;
  v38.cxRightWidth = v46;
  v38.cyTopHeight = cyTopHeight;
  v38.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v38);
  v38.cxRightWidth = v39;
  v38.cyTopHeight = cyTopHeight;
  v38.cxLeftWidth = (int)v44;
  v38.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v38);
  v38.cxLeftWidth = cxRightWidth;
  v38.cxRightWidth = v46;
  v38.cyTopHeight = v19;
  v38.cyBottomHeight = v20;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v38);
  v38.cxLeftWidth = (int)v44;
  v38.cxRightWidth = v39;
  v38.cyTopHeight = v19;
  v38.cyBottomHeight = v20;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v38);
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1126;
    goto LABEL_28;
  }
  v21 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, a2[12], 2u, &pMargins, v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1132;
    goto LABEL_28;
  }
  *((CBaseObject **)a4 + 208) = v45[0];
  *((CBaseObject **)a5 + 208) = v45[1];
  v22 = a2[13];
  LODWORD(v46) = pMargins.cxLeftWidth;
  cxRightWidth = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v22, 2u, &pMargins, v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1141;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4AB0, 1u, ThemeMargins, iPropId, 0LL);
    return v11;
  }
  *((CBaseObject **)a4 + 210) = v45[0];
  *((CBaseObject **)a5 + 210) = v45[1];
  v23 = *((unsigned int *)a2 + 10);
  cyBottomHeight = pMargins.cxLeftWidth;
  cyTopHeight = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v23, v21, 9LL, 10, 11, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1159;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1161;
    goto LABEL_28;
  }
  v38 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v38);
  v24 = *((unsigned int *)a2 + 15);
  LODWORD(v39) = pMargins.cyTopHeight;
  LODWORD(v44) = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v24, v21, 14LL, 15, 16, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1178;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1180;
    goto LABEL_28;
  }
  v38 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v38);
  v25 = a2[17];
  v26 = pMargins.cyTopHeight;
  cxLeftWidth = pMargins.cyBottomHeight;
  v48 = 0LL;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(a1, v25, &v48, v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1188;
    goto LABEL_28;
  }
  v27 = v45[0];
  *((CBaseObject **)a4 + 218) = v45[0];
  *((_QWORD *)a5 + 218) = v27;
  CBaseObject::AddRef(v27);
  v38 = v48;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v38);
  v38.cxRightWidth = cxRightWidth;
  v38.cyTopHeight = v39;
  v38.cxLeftWidth = v46;
  v38.cyBottomHeight = (int)v44;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v38);
  v38.cxRightWidth = cyTopHeight;
  v38.cyTopHeight = v39;
  v38.cxLeftWidth = cyBottomHeight;
  v38.cyBottomHeight = (int)v44;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v38);
  v38.cxLeftWidth = v46;
  v38.cxRightWidth = cxRightWidth;
  v38.cyBottomHeight = cxLeftWidth;
  v38.cyTopHeight = v26;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v38);
  v38.cxLeftWidth = cyBottomHeight;
  v38.cxRightWidth = cyTopHeight;
  v38.cyBottomHeight = cxLeftWidth;
  v38.cyTopHeight = v26;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v38);
  v28 = 18;
  v29 = (int *)(a2 + 18);
  v46 = a4 - a5;
  for ( i = (CBaseObject **)((char *)a5 + 1760); ; i += 2 )
  {
    v44 = v29;
    LODWORD(v39) = v28;
    if ( v28 > 21 )
      break;
    if ( *v29 )
    {
      LOWORD(v11) = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *v29, 2u, &pMargins, v45);
      if ( (unsigned __int16)v11 == 1168 )
        break;
      *(CBaseObject **)((char *)i + v46) = v45[0];
      v29 = v44;
      *i = v45[1];
      v28 = v39;
    }
    ++v28;
    ++v29;
  }
  if ( (_WORD)v11 == 1168 )
  {
    v32 = a2 + 18;
    v33 = (CBaseObject **)((char *)a5 + 1760);
    v34 = 4LL;
    v35 = a4 - a5;
    v39 = 4LL;
    do
    {
      if ( *v32 )
      {
        v36 = *(CBaseObject **)((char *)v33 + v35);
        if ( v36 )
        {
          CBaseObject::Release(v36);
          v34 = v39;
          *(CBaseObject **)((char *)v33 + v35) = 0LL;
        }
        if ( *v33 )
        {
          CBaseObject::Release(*v33);
          v34 = v39;
          *v33 = 0LL;
        }
      }
      v33 += 2;
      ++v32;
      v39 = --v34;
    }
    while ( v34 );
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(a1, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1236;
    goto LABEL_28;
  }
  return v11;
}
