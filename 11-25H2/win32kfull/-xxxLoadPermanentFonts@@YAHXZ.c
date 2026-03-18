/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x140147AD0
 * Callers:
 *     xxxLW_LoadFonts @ 0x140147F80 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140148224 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r9

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 66080) )
    return 1LL;
  v4 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( PsGetCurrentProcess(v5) == v4 )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v6, v7);
  v10 = xxxbEnumerateRegistryFonts(1u, 6u, v6, v7);
  if ( v10 )
    v10 = xxxbEnumerateRegistryFonts(1u, 0x39u, v11, v12);
  *(_DWORD *)(W32GetUserSessionState(v9, v8) + 66080) = 1;
  return v10;
}
