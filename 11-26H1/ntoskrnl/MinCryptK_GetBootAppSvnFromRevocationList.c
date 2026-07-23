/*
 * XREFs of MinCryptK_GetBootAppSvnFromRevocationList @ 0x140721824
 * Callers:
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall MinCryptK_GetBootAppSvnFromRevocationList(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v9; // esi
  __int64 v10; // rdi
  size_t v11; // r8

  v4 = *(_QWORD *)(a1 + 232);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 224) >> 5;
  v9 = -1073741275;
  while ( v5 < v6 )
  {
    v10 = v4 + 32LL * v5;
    if ( a3 == *(_DWORD *)(v10 + 20) )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( aHiberrsmExe[v11] );
      if ( !memcmp("hiberrsm.exe", (const void *)(v4 + 32LL * v5), v11) )
      {
        v9 = 0;
        *a4 = *(_DWORD *)(v10 + 28);
        return v9;
      }
    }
    ++v5;
  }
  return v9;
}
