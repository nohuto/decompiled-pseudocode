/*
 * XREFs of NVMeHwResetBus @ 0x140013190
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 20) || (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 1;
  *(_DWORD *)(a1 + 24) |= 0x400000u;
  result = NVMeControllerReset(a1, 0LL);
  if ( result )
    ++*(_DWORD *)(a1 + 4184);
  else
    ++*(_DWORD *)(a1 + 4188);
  *(_DWORD *)(a1 + 24) &= ~0x400000u;
  return result;
}
