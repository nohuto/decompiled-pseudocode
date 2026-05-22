/*
 * XREFs of ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006EE74
 * Callers:
 *     ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z @ 0x18006ED10 (-OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@1@Z.c)
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D06AC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800D7E0C (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x18006EEAC (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPCHeadUpdateListener *MPCHeadUpdateListener::GetInstance(void)
{
  const char *v0; // r9
  struct MPCHeadUpdateListener *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_a860493e5708769190ef41fba30dc41a___();
  result = MPCHeadUpdateListener::s_instance;
  if ( !MPCHeadUpdateListener::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      v0);
  return result;
}
