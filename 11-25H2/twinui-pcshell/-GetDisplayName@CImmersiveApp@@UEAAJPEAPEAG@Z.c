/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180136670
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180136D9C (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  int v4; // edi
  unsigned __int16 *v5; // rsi
  char *v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rcx
  signed __int64 v13; // r14
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rax

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
    if ( v7 + 1 >= v7 && is_mul_ok(v8, 2uLL) )
    {
      v4 = 0;
      v11 = (unsigned __int16 *)CoTaskMemAlloc(2 * v8);
      if ( v11 )
      {
        v5 = v11;
        *v11 = 0;
        if ( v7 != -1LL )
        {
          if ( v8 <= 0x7FFFFFFF && v7 <= 0x7FFFFFFE )
          {
            v12 = v11;
            v13 = v6 - (char *)v11;
            while ( v8 != 1 )
            {
              v14 = *(unsigned __int16 *)((char *)v12 + v13);
              if ( !v14 )
                break;
              *v12++ = v14;
              --v8;
            }
            v11 = v12 - 1;
            if ( v8 )
              v11 = v12;
          }
          *v11 = 0;
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
    else
    {
      v4 = -2147024362;
    }
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( v5 && *v5 )
    {
      v15 = v5;
      v5 = 0LL;
      *a2 = v15;
    }
    else
    {
      LOBYTE(v9) = 3;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        v9);
      v4 = -2147024882;
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v4;
}
