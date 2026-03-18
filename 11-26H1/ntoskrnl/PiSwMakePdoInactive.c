/*
 * XREFs of PiSwMakePdoInactive @ 0x140B3E814
 * Callers:
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PiSwGetChildPdo @ 0x140A7AAD4 (PiSwGetChildPdo.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PiSwMakePdoInactive(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 64);
  if ( a1 == *(_QWORD *)(*(_QWORD *)result + 120LL) )
    *(_QWORD *)(*(_QWORD *)result + 120LL) = 0LL;
  result[2] |= 0x20u;
  return result;
}
