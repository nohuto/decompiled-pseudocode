/*
 * XREFs of _lambda_cd9216ae8b29ebed6b86303d8e91f75e_::operator() @ 0x1800C518C
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd9216ae8b29ebed6b86303d8e91f75e___ @ 0x1800C3B28 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800C3B28.c)
 * Callees:
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_cd9216ae8b29ebed6b86303d8e91f75e_::operator()(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD); // rbx
  char v5; // al
  __int64 result; // rax

  v4 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 32LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 240LL))(*a2);
  result = v4(g_DeviceGraphManager, *a2, *a1, v5 == 0, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             32LL,
             &WPP_c1536f98adc13219c785ca614022e7d6_Traceguids,
             (unsigned int)result);
  }
  return result;
}
