/*
 * XREFs of __GSHandlerCheck_EH4 @ 0x1400ADE14
 * Callers:
 *     <none>
 * Callees:
 *     sub_140049AD8 @ 0x140049AD8 (sub_140049AD8.c)
 *     __CxxFrameHandler4 @ 0x14004A4E6 (__CxxFrameHandler4.c)
 */

__int64 __fastcall _GSHandlerCheck_EH4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 56);
  sub_140049AD8(a2, a4);
  result = 1LL;
  if ( ((((*(_DWORD *)(a1 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v4 + 4)) != 0 )
    return _CxxFrameHandler4();
  return result;
}
