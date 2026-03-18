/*
 * XREFs of AslpFileLargeMapDelete @ 0x14077C39C
 * Callers:
 *     AslpFileLargeAssignViewAndDelete @ 0x14088F6C0 (AslpFileLargeAssignViewAndDelete.c)
 *     AslpFileLargeMapCreate @ 0x1409E2CD8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x14088FAEC (AslpFilePartialViewFree.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
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
