/*
 * XREFs of ??1ContactData@PointerInputMediator@@QEAA@XZ @ 0x1800691C4
 * Callers:
 *     _PointerInputMediator::PointerFrame::Initialize_::_1_::dtor$0 @ 0x1801D41B6 (_PointerInputMediator--PointerFrame--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerInputMediator::ContactData::~ContactData(PointerInputMediator::ContactData *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    if ( v1 != -1 )
      NtCloseCompositionInputSink(v1);
  }
}
