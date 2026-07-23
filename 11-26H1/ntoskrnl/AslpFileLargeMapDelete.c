/*
 * XREFs of AslpFileLargeMapDelete @ 0x14077EE90
 * Callers:
 *     AslpFileLargeAssignViewAndDelete @ 0x140895ABC (AslpFileLargeAssignViewAndDelete.c)
 *     AslpFileLargeMapCreate @ 0x140B6CF80 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x140895EE8 (AslpFilePartialViewFree.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall AslpFileLargeMapDelete(__int64 *a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 48);
      AslpFilePartialViewFree(v1 + 16);
      v3 = *(void **)(v1 + 8);
      if ( v3 )
        ZwClose(v3);
      result = AslFree(v3, v1);
      *a1 = 0LL;
    }
  }
  return result;
}
