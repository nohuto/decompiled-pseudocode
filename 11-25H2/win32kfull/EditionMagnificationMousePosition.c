/*
 * XREFs of EditionMagnificationMousePosition @ 0x1401654C0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     MagInputTransform @ 0x140165624 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x140165668 (AcquireMagInputLock.c)
 *     ReleaseMagInputLock @ 0x1401656B4 (ReleaseMagInputLock.c)
 *     MagnificationTransformPoint @ 0x14016581C (MagnificationTransformPoint.c)
 */

__int64 __fastcall EditionMagnificationMousePosition(unsigned __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  AcquireMagInputLock();
  v2 = MagInputTransform();
  v5 = v2;
  if ( v2 && PtInRect((_DWORD *)(v2 + 16), *a1) )
    MagnificationTransformPoint(v5, a1);
  return ReleaseMagInputLock(v4, v3, v5);
}
