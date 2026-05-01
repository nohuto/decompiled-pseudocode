/*
 * XREFs of ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z @ 0x1804B7164
 * Callers:
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1804B756C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 * Callees:
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B707C (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NXZ @ 0x1804B7634 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NX.c)
 */

HWND __fastcall CImpWorkerWndProc::CreateWorkerWindow(CImpWorkerWndProc *this, HWND a2)
{
  HWND result; // rax
  __int64 v4; // rax

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2701868344>::GetImpl'::`2'::impl) )
  {
    result = (HWND)*((_QWORD *)this + 1);
    if ( !result )
    {
      if ( *((_BYTE *)this + 16) )
      {
        if ( *((_QWORD *)this + 4) )
        {
          if ( *((_QWORD *)this + 3) )
          {
            v4 = SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, this);
            *((_QWORD *)this + 1) = v4;
            if ( v4 )
            {
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2701868344>::GetImpl'::`2'::impl) )
              {
                if ( *((_BYTE *)this + 16) )
                  CImpWorkerWndProc::AddWndRef((HANDLE *)this);
              }
            }
          }
        }
      }
      else
      {
        *((_QWORD *)this + 1) = SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, this);
      }
      return (HWND)*((_QWORD *)this + 1);
    }
  }
  else
  {
    result = (HWND)SHCreateWorkerWindowW(CImpWorkerWndProc::s_WndProc, -3LL, 0LL, 0LL, 0LL, this);
    *((_QWORD *)this + 1) = result;
  }
  return result;
}
