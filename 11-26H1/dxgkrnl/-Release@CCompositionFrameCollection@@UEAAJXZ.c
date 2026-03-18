/*
 * XREFs of ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x140062760
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x140036E94 (--_GCCompositionFrameCollection@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CCompositionFrameCollection::Release(CCompositionFrameCollection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    CCompositionFrameCollection::`scalar deleting destructor'(this);
  return v1;
}
