/*
 * XREFs of sub_1400267D0 @ 0x1400267D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140026844 @ 0x140026844 (sub_140026844.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400267D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1400B6010(*(_QWORD *)(a1 + 56));
  if ( (_DWORD)result && *(_DWORD *)(a3 + 8) )
  {
    sub_1400B6010(*(_QWORD *)(a1 + 32));
    *(_WORD *)(a1 + 80) = 256;
    return sub_140026844(a1, a3);
  }
  return result;
}
