/*
 * XREFs of ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x140138E90
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400CED8C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

NetSetupPropertyBag *__fastcall NetSetupPropertyBag::NetSetupPropertyBag(NetSetupPropertyBag *this, struct KRegKey *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
