/*
 * XREFs of ApplyMagInputTransform @ 0x140165340
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     MagInputTransform @ 0x140165624 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x140165668 (AcquireMagInputLock.c)
 *     ReleaseMagInputLock @ 0x1401656B4 (ReleaseMagInputLock.c)
 *     MagnificationTransformPoint @ 0x14016581C (MagnificationTransformPoint.c)
 */

__int64 __fastcall ApplyMagInputTransform(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  AcquireMagInputLock();
  v4 = MagInputTransform();
  v5 = v4;
  if ( v4 )
  {
    if ( PtInRect((_DWORD *)(v4 + 16), *a1) )
      MagnificationTransformPoint(v5, a1);
    if ( PtInRect((_DWORD *)(v5 + 16), *a2) )
      MagnificationTransformPoint(v5, a2);
  }
  return ReleaseMagInputLock();
}
