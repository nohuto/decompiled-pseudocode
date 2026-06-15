/*
 * XREFs of sub_140006CB8 @ 0x140006CB8
 * Callers:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140006CB8(__int64 a1)
{
  int v3; // eax
  unsigned int v4; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 48) )
    return 0LL;
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 40));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_BYTE *)(a1 + 48) = 0;
    return 0LL;
  }
  sub_14000C2A8(retaddr, 482LL, "avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", (unsigned int)v3);
  return v4;
}
