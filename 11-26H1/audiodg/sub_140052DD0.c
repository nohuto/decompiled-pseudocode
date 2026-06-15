/*
 * XREFs of sub_140052DD0 @ 0x140052DD0
 * Callers:
 *     sub_140052FB0 @ 0x140052FB0 (sub_140052FB0.c)
 *     sub_1400530F0 @ 0x1400530F0 (sub_1400530F0.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall sub_140052DD0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rax
  __int64 v3; // rcx

  result = off_1400BB170;
  *(_QWORD *)a1 = off_1400BB170;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)v2 = 0;
    return (__int64 (__fastcall **)())EtwEventUnregister(v3);
  }
  return result;
}
