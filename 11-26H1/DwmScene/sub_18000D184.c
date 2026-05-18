/*
 * XREFs of sub_18000D184 @ 0x18000D184
 * Callers:
 *     sub_18001F180 @ 0x18001F180 (sub_18001F180.c)
 *     sub_18001F264 @ 0x18001F264 (sub_18001F264.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18000D113 (-_Xbad_alloc@std@@YAXXZ.c)
 */

__int64 __fastcall sub_18000D184(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)o_malloc(16LL);
  if ( !v2 )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x18000D1C0LL);
  }
  result = qword_1801C8350;
  *v2 = qword_1801C8350;
  v2[1] = a1;
  qword_1801C8350 = (__int64)v2;
  return result;
}
