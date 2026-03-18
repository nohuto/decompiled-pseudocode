/*
 * XREFs of ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC
 * Callers:
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140075F40 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x1400820BC (--1DispBrokerClient@@QEAA@XZ.c)
 *     _lambda_89c28751b319d20abeaa919f1ef3608e_::operator() @ 0x1401C6B10 (_lambda_89c28751b319d20abeaa919f1ef3608e_--operator().c)
 *     _lambda_ff68d9f4220b437b53c0eb7366e88ea5_::operator() @ 0x1401C6F7C (_lambda_ff68d9f4220b437b53c0eb7366e88ea5_--operator().c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403F6C4C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F8020 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403FE2EC (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x14040DD78 (_lambda_4d2358d7a59f9862d39587a9c5c8147c_--operator().c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DispBrokerClientHandle@@QEAA@XZ @ 0x140063C9C (--1DispBrokerClientHandle@@QEAA@XZ.c)
 */

void __fastcall DispBrokerClientReference::Assign(DispBrokerClientHandle **this, struct DispBrokerClientHandle *a2)
{
  DispBrokerClientHandle *v2; // rdi

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        DispBrokerClientHandle::~DispBrokerClientHandle(v2);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
      }
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
