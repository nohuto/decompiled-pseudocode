/*
 * XREFs of ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x140095970
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

void __fastcall FxFileObject::DeleteFileObjectFromFailedCreate(FxFileObject *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v7; // dl
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this->m_DeviceBase, &irql, a3);
  Flink = this->m_Link.Flink;
  if ( Flink->Blink != &this->m_Link || (Blink = this->m_Link.Blink, Blink->Flink != &this->m_Link) )
    __fastfail(3u);
  v7 = irql;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  FxNonPagedObject::Unlock(this->m_DeviceBase, v7, v4);
  FxObject::DeleteFromFailedCreate(this);
}
