/*
 * XREFs of ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140029F6C
 * Callers:
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x140029F38 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x140029FC0 (--1CBackchannelManager@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x140024478 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

void __fastcall CBackchannelManager::Clear(CBackchannelManager *this)
{
  _QWORD *v2; // rdi
  CFlipPropertySetBase *v3; // rax
  struct _KEVENT *v4; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v2);
    CFlipPropertySetBase::Release(v3);
  }
  v4 = (struct _KEVENT *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 6) = 0;
  KeResetEvent(v4);
}
