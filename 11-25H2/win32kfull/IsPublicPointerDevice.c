/*
 * XREFs of IsPublicPointerDevice @ 0x14028DA58
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1401F5000 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPublicPointerDevice(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 456) + 24LL) != 7;
  return result;
}
