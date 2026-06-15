/*
 * XREFs of sub_140035750 @ 0x140035750
 * Callers:
 *     sub_140035520 @ 0x140035520 (sub_140035520.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140035750(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // rbx
  int v4; // eax
  unsigned int v5; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 3;
  if ( *a1 && *v2 && (v4 = sub_1400B6010(a2), v5 = v4, v4 < 0) )
  {
    sub_14000C2A8((int)retaddr, 111, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v4);
    return v5;
  }
  else
  {
    *v2 = 0;
    return 0LL;
  }
}
