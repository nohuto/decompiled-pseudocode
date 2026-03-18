/*
 * XREFs of ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x14033AA5C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall PROBEDISPATBRUSH(struct _BRUSHOBJ *a1)
{
  struct _BRUSHOBJ *v1; // rdx
  unsigned int v2; // ebx
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v2 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v1 = (struct _BRUSHOBJ *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v4, v1, 0x18uLL);
  if ( (_DWORD)v4 == -1 )
    return 1;
  return v2;
}
