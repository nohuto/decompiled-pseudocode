/*
 * XREFs of ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x180681FF4
 * Callers:
 *     std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_9d734982820769c8d0ced5cfcfde410a___ @ 0x18010A360 (std--copy_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x1801C4AC4 (_lambda_b90ba3034bff2a6798db754b0e1f537a_--operator().c)
 * Callees:
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

bool __fastcall XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(XamlSnapAssistViewHost *this, HWND a2)
{
  __int64 v4; // r11
  bool v5; // zf
  __int64 v6; // rbx
  float v7; // xmm0_4
  float v8; // xmm1_4
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm1_4
  _DWORD v14[4]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT pvAttribute; // [rsp+30h] [rbp-28h] BYREF

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v4 = *((_QWORD *)this + 84);
  v5 = v4 == *((_QWORD *)this + 85);
  if ( v4 != *((_QWORD *)this + 85) )
  {
    v6 = v4 + 16;
    do
    {
      if ( *(_DWORD *)(v6 + 8) <= 1u )
      {
        v7 = *(float *)(v6 - 8);
        v8 = *(float *)(v6 - 4);
        v9 = (int)v7;
        v10 = v7 + *(float *)v6;
        v14[0] = v9;
        v11 = (int)v8;
        v12 = v8 + *(float *)(v6 + 4);
        v14[1] = v11;
        v14[2] = (int)v10;
        v14[3] = (int)v12;
        if ( Geometry::CRect::Intersects((Geometry::CRect *)v14, &pvAttribute) )
          break;
      }
      v4 += 32LL;
      v6 += 32LL;
    }
    while ( v4 != *((_QWORD *)this + 85) );
    v5 = v4 == *((_QWORD *)this + 85);
  }
  return !v5;
}
