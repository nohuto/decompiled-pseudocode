/*
 * XREFs of ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x1806A93D4
 * Callers:
 *     _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x1801BB3C4 (_lambda_b90ba3034bff2a6798db754b0e1f537a_--operator().c)
 *     std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_b3007e5732dafc6e72073e6a3605e07b___ @ 0x1806A8774 (std--copy_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 * Callees:
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

bool __fastcall XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(XamlSnapAssistViewHost *this, HWND a2)
{
  __int64 v4; // r11
  __int64 v5; // rdi
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  _DWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT pvAttribute; // [rsp+30h] [rbp-28h] BYREF

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v4 = *((_QWORD *)this + 84);
  v5 = *((_QWORD *)this + 85);
  while ( v4 != v5 )
  {
    if ( *(_DWORD *)(v4 + 24) <= 1u )
    {
      v6 = *(float *)(v4 + 8);
      v7 = *(float *)(v4 + 12);
      v8 = (int)v6;
      v9 = v6 + *(float *)(v4 + 16);
      v13[0] = v8;
      v10 = (int)v7;
      v11 = v7 + *(float *)(v4 + 20);
      v13[1] = v10;
      v13[2] = (int)v9;
      v13[3] = (int)v11;
      if ( Geometry::CRect::Intersects((Geometry::CRect *)v13, &pvAttribute) )
        break;
    }
    v4 += 32LL;
  }
  return v4 != v5;
}
