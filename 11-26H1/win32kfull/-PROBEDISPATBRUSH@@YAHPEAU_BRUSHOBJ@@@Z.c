/*
 * XREFs of ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x14032C17C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PROBEDISPATBRUSH(struct _BRUSHOBJ *a1)
{
  __int128 v2; // [rsp+38h] [rbp-20h] BYREF
  __int64 v3; // [rsp+48h] [rbp-10h]

  v2 = 0LL;
  v3 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v2, 0x18uLL, a1, 0x18uLL, 1uLL);
  return (_DWORD)v2 == -1;
}
