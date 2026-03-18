/*
 * XREFs of ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x18029972C
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18013557C (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x18020AB3C (-CleanupDelayUnpin@CD3DDevice@@AEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA_KAEBU_LUID@@@Z @ 0x1802A1CC0 (-erase@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows.c)
 */

void __fastcall CD3DDevice::ProcessDeviceLost(CD3DDevice *this)
{
  if ( !*((_BYTE *)this + 1490) )
  {
    *((_BYTE *)this + 1490) = 1;
    CD3DDevice::DestroyAllResources(this);
    CD3DDevice::CleanupDelayUnpin(this);
    std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::erase(
      &qword_1803DE740,
      (char *)this + 944);
  }
}
