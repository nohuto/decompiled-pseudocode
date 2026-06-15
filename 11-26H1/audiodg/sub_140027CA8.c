/*
 * XREFs of sub_140027CA8 @ 0x140027CA8
 * Callers:
 *     sub_14002755C @ 0x14002755C (sub_14002755C.c)
 *     sub_140027A0C @ 0x140027A0C (sub_140027A0C.c)
 *     sub_140027A34 @ 0x140027A34 (sub_140027A34.c)
 *     sub_140027AE0 @ 0x140027AE0 (sub_140027AE0.c)
 *     sub_1400474D4 @ 0x1400474D4 (sub_1400474D4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140027CA8(__int64 a1)
{
  signed __int32 v1; // eax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF);
  v2 = v1 <= 1;
  result = (unsigned int)(v1 - 1);
  if ( v2 )
    return sub_1400B6010(*(_QWORD *)a1);
  return result;
}
