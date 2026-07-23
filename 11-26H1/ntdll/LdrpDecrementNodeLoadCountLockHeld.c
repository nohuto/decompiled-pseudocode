/*
 * XREFs of LdrpDecrementNodeLoadCountLockHeld @ 0x180119180
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpDecrementNodeLoadCountLockHeld(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v4; // ecx
  int v5; // eax

  *a3 = 0;
  if ( *(_DWORD *)(a1 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 >= (unsigned int)(*(_QWORD *)(a1 + 48) != 0LL) + 1 )
    {
      if ( v4 <= 1 && a2 )
        return 3221226029LL;
      *(_DWORD *)(a1 + 24) = v4 - 1;
      if ( !*(_DWORD *)(a1 + 24) )
        *a3 = 1;
    }
    else if ( !v4 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 28);
      if ( v5 )
      {
        *(_DWORD *)(a1 + 28) = v5 - 1;
        return 0LL;
      }
    }
  }
  return 0LL;
}
