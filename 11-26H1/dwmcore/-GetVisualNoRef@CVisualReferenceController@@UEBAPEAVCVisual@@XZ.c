/*
 * XREFs of ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x1801A90D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisualReferenceController::GetVisualNoRef(CVisualReferenceController *this)
{
  __int64 v1; // rcx
  struct CVisual *result; // rax

  v1 = *((_QWORD *)this + 9);
  result = 0LL;
  if ( v1 )
    return (struct CVisual *)CWeakReference<CVisual>::GetTargetResource(v1);
  return result;
}
