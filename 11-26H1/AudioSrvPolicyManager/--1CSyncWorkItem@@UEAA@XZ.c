/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x18002EBFC
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$6 @ 0x18004C100 (_QueueGenericWorkItem_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
