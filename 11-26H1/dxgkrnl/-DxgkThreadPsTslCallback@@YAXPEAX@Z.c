/*
 * XREFs of ?DxgkThreadPsTslCallback@@YAXPEAX@Z @ 0x1403C8690
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DxgkThreadPsTslCallback(ReferenceCounted *a1)
{
  --dword_140168C40;
  ReferenceCounted::Release(a1);
}
