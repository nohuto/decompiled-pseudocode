/*
 * XREFs of ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18006D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18002A51C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18006D610 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18006D688 (-DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMInputTarget::DeliverDeviceRemoval(
        DWMInputTarget *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // ebx
  const struct std::nothrow_t *v7; // rdx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  void *v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v9, 3, (int *)a2, a4);
  v6 = NonBamoInputDeliveryServer::DeliverInput((DWMInputTarget *)((char *)this + 64), v10, v9);
  InputETW::InputTarget::DeliverDeviceRemoval(a2);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v6,
      v9);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v10, v7);
  return (unsigned int)v6;
}
