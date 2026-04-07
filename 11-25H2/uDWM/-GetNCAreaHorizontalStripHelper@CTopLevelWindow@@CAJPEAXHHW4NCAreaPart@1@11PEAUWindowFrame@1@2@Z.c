/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180032C68
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003230C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180007C28 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
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
  unsigned int v12; // esi
  int v13; // eax
  LONG top; // r8d
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  int v24; // [rsp+38h] [rbp-99h]
  struct tagRECT v26; // [rsp+58h] [rbp-79h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+78h] [rbp-59h] BYREF
  _DWORD v29[4]; // [rsp+88h] [rbp-49h]
  __int64 v30; // [rsp+98h] [rbp-39h]
  int v31; // [rsp+A0h] [rbp-31h]
  LONG bottom; // [rsp+A4h] [rbp-2Dh]
  int v33; // [rsp+A8h] [rbp-29h]
  LONG v34; // [rsp+ACh] [rbp-25h]
  int v35; // [rsp+B0h] [rbp-21h]
  LONG v36; // [rsp+B4h] [rbp-1Dh]
  int v37; // [rsp+B8h] [rbp-19h]
  LONG v38; // [rsp+BCh] [rbp-15h]
  LONG right; // [rsp+C0h] [rbp-11h]
  LONG v40; // [rsp+C4h] [rbp-Dh]

  v8 = a7;
  ThemeRect = 0;
  v10 = a1;
  v11 = a4;
  v12 = 0;
  v24 = a2;
  while ( v12 < 2 )
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
      v29[0] = v11;
      if ( pRect.bottom - pRect.top >= 0 )
        v13 = pRect.bottom - pRect.top;
      v15 = 0;
      v16 = 0;
      v17 = v13 / 2;
      v29[1] = a5;
      v29[2] = a6;
LABEL_7:
      if ( v15 < 2 )
      {
        rc.left = pRect.left;
        if ( v15 )
          v8 = a8;
        rc.right = pRect.right;
        rc.top = v16 + top;
        rc.bottom = v17 + v16 + top;
        InflateRect(&rc, -1, -1);
        v30 = *(_QWORD *)&rc.left;
        bottom = rc.bottom;
        v34 = rc.top;
        v31 = a3 + rc.left;
        v33 = a3 + rc.left;
        v36 = rc.bottom;
        v35 = rc.right - a3;
        v18 = 0LL;
        v37 = rc.right - a3;
        v38 = rc.top;
        right = rc.right;
        v40 = rc.bottom;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= 3 )
          {
            top = pRect.top;
            ++v15;
            v8 = a7;
            v16 += v17;
            goto LABEL_7;
          }
          v19 = v12 + 2LL * (int)v29[v18] + 185;
          v26 = (struct tagRECT)*((_OWORD *)&v30 + (unsigned int)v18);
          v20 = CBitmapSource::Create(
                  CTopLevelWindow::s_pbsNonClientAtlas,
                  &v26,
                  0LL,
                  (struct CBitmapSource **)(v8 + 8 * v19));
          ThemeRect = v20;
          if ( v20 < 0 )
            break;
          v18 = (unsigned int)(v18 + 1);
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v20, 0x598u, 0LL);
        return ThemeRect;
      }
      v11 = a4;
    }
    v10 = a1;
    ++v12;
    a2 = v24;
  }
  return ThemeRect;
}
