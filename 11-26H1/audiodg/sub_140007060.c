/*
 * XREFs of sub_140007060 @ 0x140007060
 * Callers:
 *     sub_140006FD8 @ 0x140006FD8 (sub_140006FD8.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140007060(__int64 a1)
{
  int v3; // eax
  unsigned int v4; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 24) || !*(_QWORD *)(a1 + 32) || *(_BYTE *)(a1 + 48) )
    return 0LL;
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 40));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_BYTE *)(a1 + 48) = 1;
    return 0LL;
  }
  sub_14000C2A8(retaddr, 471LL, "avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", (unsigned int)v3);
  return v4;
}
