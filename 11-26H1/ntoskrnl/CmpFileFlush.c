/*
 * XREFs of CmpFileFlush @ 0x140AAB9C8
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x14084E260 (CmpSaveKeyByFileCopy.c)
 *     HvWriteExternal @ 0x140AAA58C (HvWriteExternal.c)
 *     CmpFileFlushAndPurge @ 0x140AAAF1C (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x140AC26A0 (HvLoadHive.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1404CF9CC (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
