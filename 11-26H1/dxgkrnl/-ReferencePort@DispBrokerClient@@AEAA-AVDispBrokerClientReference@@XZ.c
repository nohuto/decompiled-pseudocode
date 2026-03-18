/*
 * XREFs of ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403F6C4C
 * Callers:
 *     _lambda_89c28751b319d20abeaa919f1ef3608e_::operator() @ 0x1401C6B10 (_lambda_89c28751b319d20abeaa919f1ef3608e_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F8020 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x14040DD78 (_lambda_4d2358d7a59f9862d39587a9c5c8147c_--operator().c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403F6CC0 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

DispBrokerClientHandle **__fastcall DispBrokerClient::ReferencePort(struct _KTHREAD **a1, DispBrokerClientHandle **a2)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  DispBrokerClientReference::Assign(a2, 0LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, a1 + 2, 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v5);
  if ( DispBrokerClient::IsClientHandleValid((DispBrokerClient *)a1) )
    DispBrokerClientReference::Assign(a2, a1[6]);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
  return a2;
}
