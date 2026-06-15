/*
 * XREFs of ?clear@?$forward_list@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800F8544
 * Callers:
 *     ??1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800F7370 (--1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ.c)
 *     ?Shutdown@CBluetoothAudioEndpointResourceManagerProvider@@UEAAXXZ @ 0x1800F8020 (-Shutdown@CBluetoothAudioEndpointResourceManagerProvider@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>>::clear(
        _QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
