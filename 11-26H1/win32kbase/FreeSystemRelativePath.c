/*
 * XREFs of FreeSystemRelativePath @ 0x140187828
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401A2CA0 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall FreeSystemRelativePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  v5 = *(char **)(a1 + 8);
  if ( v5 )
    GreDeleteFastMutex(v5, a2, a3, a4);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
