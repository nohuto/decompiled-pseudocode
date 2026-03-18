/*
 * XREFs of ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B34C0
 * Callers:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140118714 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 * Callees:
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x14018FCD0 (-HMDoubleFree@@YAXPEAX@Z.c)
 */

void __fastcall CheckForDoubleFree(struct _HANDLEENTRY *a1, struct _HEAD *a2)
{
  if ( !*((_BYTE *)a1 + 24) || *((_WORD *)a1 + 13) != (HIWORD(*(_DWORD *)a2) & 0x7FFF) )
    HMDoubleFree((ULONG_PTR)a2);
}
