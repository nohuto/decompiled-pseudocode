/*
 * XREFs of ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800044A4
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180003B34 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateNCButtons(
        HTHEME hTheme,
        struct CTopLevelWindow::WindowFrame *a2,
        struct CTopLevelWindow::WindowFrame *a3)
{
  unsigned int v3; // ebx
  char v6; // r8
  unsigned int v7; // esi
  int v8; // r14d
  __int64 v9; // rdi
  int v10; // eax
  HRESULT ThemeMargins; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  int iPartId[2]; // [rsp+40h] [rbp-C0h]
  struct CTopLevelWindow::WindowFrame *v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+50h] [rbp-B0h]
  char *v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  struct CTopLevelWindow::WindowFrame *v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-90h]
  char *v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+80h] [rbp-80h]
  char *v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+90h] [rbp-70h]
  char *v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  char *v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+B0h] [rbp-50h]
  char *v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+C0h] [rbp-40h]
  char *v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+D0h] [rbp-30h]
  char *v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h]
  char *v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+F0h] [rbp-10h]
  char *v38; // [rsp+F8h] [rbp-8h]
  MARGINS pMargins; // [rsp+100h] [rbp+0h] BYREF
  struct _MARGINS v40; // [rsp+110h] [rbp+10h] BYREF

  v16 = a2;
  v3 = 0;
  v40 = 0LL;
  pMargins = 0LL;
  if ( a2 == *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32LL) )
  {
    v6 = 1;
    iPartId[0] = -1;
    v17 = -1;
  }
  else
  {
    v6 = 0;
    iPartId[0] = 3;
    v17 = 5;
  }
  v20 = a3;
  v18 = (char *)a2 + 32;
  if ( v6 )
  {
    v19 = -1;
    v21 = -1;
  }
  else
  {
    v19 = 4;
    v21 = 6;
  }
  v22 = (char *)a3 + 32;
  v24 = (char *)a2 + 64;
  v23 = v6 != 0 ? -1 : 88;
  v26 = (char *)a2 + 96;
  v25 = v6 != 0 ? -1 : 90;
  v28 = (char *)a3 + 64;
  v27 = v6 != 0 ? -1 : 89;
  v30 = (char *)a3 + 96;
  v29 = v6 != 0 ? -1 : 91;
  v32 = (char *)a2 + 128;
  v31 = v6 != 0 ? -1 : 7;
  v34 = (char *)a3 + 128;
  v33 = v6 != 0 ? -1 : 8;
  v36 = (char *)a2 + 160;
  v35 = v6 != 0 ? 36 : 9;
  v37 = v6 != 0 ? 37 : 10;
  v7 = 0;
  v38 = (char *)a3 + 160;
  while ( v7 < 0xC )
  {
    v8 = iPartId[4 * v7];
    v9 = (__int64)*(&v16 + 2 * v7);
    if ( v8 != -1 )
    {
      v10 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(hTheme, v8, 4u, &v40, (__int64)*(&v16 + 2 * v7));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3DCu, 0LL);
        return v3;
      }
      ThemeMargins = GetThemeMargins(hTheme, 0LL, v8, 0, 3602, 0LL, &pMargins);
      v12 = 0LL;
      v3 = ThemeMargins;
      if ( ThemeMargins < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeMargins, 0x3DDu, 0LL);
        return v3;
      }
      if ( *(_DWORD *)(v9 + 24) )
      {
        do
        {
          v13 = *(_QWORD *)(*(_QWORD *)v9 + 8 * v12);
          v12 = (unsigned int)(v12 + 1);
          *(MARGINS *)(v13 + 168) = pMargins;
        }
        while ( (unsigned int)v12 < *(_DWORD *)(v9 + 24) );
      }
    }
    ++v7;
  }
  return v3;
}
