/*
 * XREFs of ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800A3620
 * Callers:
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A2C40 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::get_at_current(
        __int64 *a1,
        unsigned int a2)
{
  int *result; // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // rdi

  result = (int *)a1[2];
  if ( *result >= 0 && a2 < *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)*a1 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 4);
    result = (int *)v6(v5, a2, (__int64)(a1 + 4));
    *(_DWORD *)a1[2] = (_DWORD)result;
  }
  return result;
}
