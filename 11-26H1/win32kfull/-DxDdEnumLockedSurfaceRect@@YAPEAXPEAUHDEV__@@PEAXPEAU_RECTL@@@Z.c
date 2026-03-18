/*
 * XREFs of ?DxDdEnumLockedSurfaceRect@@YAPEAXPEAUHDEV__@@PEAXPEAU_RECTL@@@Z @ 0x140347A9C
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall DxDdEnumLockedSurfaceRect(HDEV a1, void **a2, struct _RECTL *a3)
{
  HDEV v3; // rcx
  void **result; // rax

  v3 = a1 + 654;
  if ( !a2 )
    a2 = (void **)v3;
  while ( 1 )
  {
    a2 = (void **)*a2;
    if ( a2 == (void **)v3 )
      break;
    if ( *((_DWORD *)a2 + 5) )
    {
      result = a2;
      *a3 = *(struct _RECTL *)((char *)a2 + 28);
      return result;
    }
  }
  return 0LL;
}
