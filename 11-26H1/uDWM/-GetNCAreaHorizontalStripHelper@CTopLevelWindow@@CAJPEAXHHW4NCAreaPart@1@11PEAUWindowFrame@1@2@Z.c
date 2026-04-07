/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180004738
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180003B34 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHorizontalStripHelper(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  unsigned int ThemeRect; // ebx
  void *v10; // rax
  int v11; // edi
  __int64 v12; // rsi
  int v13; // eax
  LONG top; // r8d
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  __int64 v18; // rdi
  struct CBitmapSource **v19; // r9
  int v20; // eax
  int v24; // [rsp+38h] [rbp-99h]
  _DWORD v25[4]; // [rsp+40h] [rbp-91h]
  __int64 v26; // [rsp+50h] [rbp-81h]
  int v27; // [rsp+58h] [rbp-79h]
  LONG bottom; // [rsp+5Ch] [rbp-75h]
  int v29; // [rsp+60h] [rbp-71h]
  LONG v30; // [rsp+64h] [rbp-6Dh]
  int v31; // [rsp+68h] [rbp-69h]
  LONG v32; // [rsp+6Ch] [rbp-65h]
  int v33; // [rsp+70h] [rbp-61h]
  LONG v34; // [rsp+74h] [rbp-5Dh]
  LONG right; // [rsp+78h] [rbp-59h]
  LONG v36; // [rsp+7Ch] [rbp-55h]
  __int64 v37; // [rsp+80h] [rbp-51h]
  __int64 v38; // [rsp+88h] [rbp-49h]
  void *v39; // [rsp+90h] [rbp-41h]
  struct tagRECT v40; // [rsp+98h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+A8h] [rbp-29h] BYREF
  struct tagRECT pRect; // [rsp+B8h] [rbp-19h] BYREF

  v8 = a7;
  ThemeRect = 0;
  v10 = a1;
  v39 = a1;
  v11 = a4;
  v37 = a8;
  v12 = 0LL;
  v24 = a2;
  v38 = a7;
  while ( (unsigned int)v12 < 2 )
  {
    pRect = 0LL;
    ThemeRect = (unsigned __int16)GetThemeRect(v10, a2, 0, 8002, &pRect);
    if ( ThemeRect == 1168 )
    {
      ThemeRect = 0;
    }
    else
    {
      v13 = 0;
      top = pRect.top;
      v25[0] = v11;
      if ( pRect.bottom - pRect.top >= 0 )
        v13 = pRect.bottom - pRect.top;
      v15 = 0;
      v16 = 0;
      v17 = v13 / 2;
      v25[1] = a5;
      v25[2] = a6;
LABEL_7:
      if ( v15 < 2 )
      {
        rc.left = pRect.left;
        if ( v15 )
          v8 = v37;
        rc.right = pRect.right;
        rc.top = v16 + top;
        rc.bottom = v17 + v16 + top;
        InflateRect(&rc, -1, -1);
        v26 = *(_QWORD *)&rc.left;
        bottom = rc.bottom;
        v30 = rc.top;
        v27 = a3 + rc.left;
        v29 = a3 + rc.left;
        v32 = rc.bottom;
        v31 = rc.right - a3;
        v18 = 0LL;
        v33 = rc.right - a3;
        v34 = rc.top;
        right = rc.right;
        v36 = rc.bottom;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= 3 )
          {
            top = pRect.top;
            ++v15;
            v8 = v38;
            v16 += v17;
            goto LABEL_7;
          }
          v19 = (struct CBitmapSource **)(v8 + 8 * (v12 + 2LL * (int)v25[v18]) + 1472);
          v40 = (struct tagRECT)*((_OWORD *)&v26 + (unsigned int)v18);
          v20 = CBitmapSource::Create(CTopLevelWindow::s_pbsNonClientAtlas, &v40, 0LL, v19);
          ThemeRect = v20;
          if ( v20 < 0 )
            break;
          v18 = (unsigned int)(v18 + 1);
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F4AAC, 1u, v20, 0x53Du, 0LL);
        return ThemeRect;
      }
      v11 = a4;
    }
    v10 = v39;
    v12 = (unsigned int)(v12 + 1);
    a2 = v24;
  }
  return ThemeRect;
}
