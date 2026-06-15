/*
 * XREFs of _lambda_8586584b4f8edc753e86ab7e770d4c6f_::operator() @ 0x1800C4670
 * Callers:
 *     wil::details::lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___::_lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___ @ 0x1800C4318 (wil--details--lambda_call__lambda_496eb20bd5d4d6e7f5dd2a557534cfd9___--_lambda_call__lambda_496e.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3d3cd41ec2ad91720c9cc2f8b9c7d504___ @ 0x1800C3790 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C3790.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_8586584b4f8edc753e86ab7e770d4c6f_::operator()(__int64 a1)
{
  _QWORD *v2; // r8
  int v3; // ebx
  __int64 v5; // [rsp+68h] [rbp+7h] BYREF
  __int64 v6; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v7; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v8[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v5 = 0LL;
  memset(v8, 0, sizeof(v8));
  v8[12] = 1;
  *(_DWORD *)&v8[8] = **(_DWORD **)a1;
  *(_QWORD *)v8 = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  *(_OWORD *)&v8[20] = *(_OWORD *)(*v2 + 48LL);
  *(_DWORD *)&v8[16] = *(_DWORD *)(*v2 + 8LL);
  v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, _BYTE *, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
         g_DeviceGraphManager,
         **(_QWORD **)(a1 + 16),
         *v2,
         2LL,
         0,
         v8,
         *(_QWORD *)(a1 + 24),
         0LL,
         0LL,
         &v5);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30LL,
      &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids,
      (unsigned int)v3);
  }
  if ( v3 >= 0 )
  {
    v6 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3d3cd41ec2ad91720c9cc2f8b9c7d504___(
      &v7,
      **(_QWORD ***)(a1 + 32),
      *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL),
      &v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
  return 0LL;
}
