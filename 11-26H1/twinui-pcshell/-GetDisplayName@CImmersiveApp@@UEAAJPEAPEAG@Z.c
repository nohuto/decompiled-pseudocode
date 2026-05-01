/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800A9000
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A7360 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  int v4; // esi
  _WORD *v5; // rdi
  char *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  _WORD *v9; // rax
  unsigned __int64 v10; // rax
  _WORD *v11; // rcx
  signed __int64 v12; // r14
  __int16 v13; // dx
  _WORD *v14; // rax
  unsigned __int16 *v16; // rax

  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (char *)*((_QWORD *)this + 63);
  if ( v6 && *(_WORD *)v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v4 = -2147024362;
    }
    else
    {
      if ( !is_mul_ok(v8, 2uLL) )
      {
        v4 = -2147024362;
        goto LABEL_20;
      }
      v4 = 0;
      v9 = CoTaskMemAlloc(2 * v8);
      if ( v9 )
      {
        v5 = v9;
        *v9 = 0;
      }
      else
      {
        v4 = -2147024882;
      }
    }
    if ( v4 >= 0 && v7 != -1LL )
    {
      if ( v8 > 0x7FFFFFFF || v7 > 0x7FFFFFFE )
      {
        *v5 = 0;
      }
      else
      {
        v10 = v7;
        v11 = v5;
        v12 = v6 - (char *)v5;
        do
        {
          if ( !v10 )
            break;
          v13 = *(_WORD *)((char *)v11 + v12);
          if ( !v13 )
            break;
          *v11++ = v13;
          --v10;
          --v8;
        }
        while ( v8 );
        v14 = v11 - 1;
        if ( v8 )
          v14 = v11;
        *v14 = 0;
      }
    }
  }
LABEL_20:
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( v5 && *v5 )
    {
      v16 = v5;
      v5 = 0LL;
      *a2 = v16;
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        3u);
      v4 = -2147024882;
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v4;
}
