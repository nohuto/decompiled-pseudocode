/*
 * XREFs of sub_1800D5568 @ 0x1800D5568
 * Callers:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

int __fastcall sub_1800D5568(__int64 *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  int v3; // esi
  int result; // eax

  v1 = *a1;
  sub_180012AC4(*a1);
  v2 = *(_BYTE *)(v1 + 228);
  v3 = *(_DWORD *)(v1 + 224) - 1;
  *(_DWORD *)(v1 + 224) = v3;
  result = Mtx_unlock((_Mtx_t)v1);
  if ( v2 )
  {
    if ( !v3 )
      return Cnd_signal((_Cnd_t)(v1 + 80));
  }
  else if ( v3 == -2 )
  {
    return Cnd_broadcast((_Cnd_t)(v1 + 152));
  }
  return result;
}
