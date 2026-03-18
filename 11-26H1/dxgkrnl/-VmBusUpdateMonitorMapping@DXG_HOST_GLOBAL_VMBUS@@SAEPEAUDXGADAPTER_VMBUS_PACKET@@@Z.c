/*
 * XREFs of ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234840
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_ @ 0x1401A9EE0 (_lambda_af43cb63713906f6ee9ac5c062dc4f06_--_lambda_af43cb63713906f6ee9ac5c062dc4f06_.c)
 *     _lambda_5ba4a65bff08d755783aff6afc159ac4_::operator() @ 0x14021FAF8 (_lambda_5ba4a65bff08d755783aff6afc159ac4_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusUpdateMonitorMapping(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v7 = v1;
  if ( v1 )
  {
    v2 = lambda_af43cb63713906f6ee9ac5c062dc4f06_::_lambda_af43cb63713906f6ee9ac5c062dc4f06_(
           v4,
           (__int64)&v5,
           (__int64)&v7);
    v6 = lambda_5ba4a65bff08d755783aff6afc159ac4_::operator()(v2);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v5 + 16), &v6, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
