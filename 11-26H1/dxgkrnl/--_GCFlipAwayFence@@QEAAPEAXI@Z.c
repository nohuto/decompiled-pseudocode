/*
 * XREFs of ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x1400A1AF0
 * Callers:
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x1400A1584 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1400A19BC (--1CAdapter@@IEAA@XZ.c)
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x1400A293C (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x1400A28B4 (--1CFlipAwayFence@@QEAA@XZ.c)
 */

CFlipAwayFence *__fastcall CFlipAwayFence::`scalar deleting destructor'(CFlipAwayFence *this)
{
  CFlipAwayFence::~CFlipAwayFence(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
