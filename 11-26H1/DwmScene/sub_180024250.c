/*
 * XREFs of sub_180024250 @ 0x180024250
 * Callers:
 *     sub_180021AE8 @ 0x180021AE8 (sub_180021AE8.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180022A00 @ 0x180022A00 (sub_180022A00.c)
 *     sub_180023110 @ 0x180023110 (sub_180023110.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_180023EB0 @ 0x180023EB0 (sub_180023EB0.c)
 *     sub_180024190 @ 0x180024190 (sub_180024190.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000CDBA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D0B0 @ 0x18000D0B0 (sub_18000D0B0.c)
 */

bool __fastcall sub_180024250(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  size_t v3; // rax

  if ( a3 )
  {
    *a3 = 0;
    v3 = Src[19];
    if ( !WORD2(a2) )
      return (unsigned int)sub_18000D0B0() != -1;
    if ( v3 >= WORD2(a2) )
    {
      memcpy(a3, Src, WORD2(a2));
      return (unsigned int)sub_18000D0B0() != -1;
    }
    memset(a3, 0, v3);
    *(_DWORD *)o__errno() = 34;
    o__invalid_parameter_noinfo();
  }
  return 0;
}
