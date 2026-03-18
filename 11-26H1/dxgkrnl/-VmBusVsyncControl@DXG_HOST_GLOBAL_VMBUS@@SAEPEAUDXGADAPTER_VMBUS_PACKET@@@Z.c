/*
 * XREFs of ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402348B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_ @ 0x1401A9EE0 (_lambda_af43cb63713906f6ee9ac5c062dc4f06_--_lambda_af43cb63713906f6ee9ac5c062dc4f06_.c)
 *     _lambda_af43cb63713906f6ee9ac5c062dc4f06_::operator() @ 0x14021FD6C (_lambda_af43cb63713906f6ee9ac5c062dc4f06_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusVsyncControl(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 **v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v7 = v1;
  if ( v1 )
  {
    v2 = (__int64 **)lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_(
                       v4,
                       (__int64)&v7,
                       (__int64)&v5);
    v6 = lambda_af43cb63713906f6ee9ac5c062dc4f06_::operator()(v2);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v5 + 16), &v6, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
