/*
 * XREFs of __GSHandlerCheck_EH4 @ 0x18000D89C
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 *     __CxxFrameHandler4 @ 0x18000CCEE (__CxxFrameHandler4.c)
 */

__int64 __fastcall _GSHandlerCheck_EH4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 56);
  sub_18000C4A0(a2, a4);
  result = 1LL;
  if ( ((((*(_DWORD *)(a1 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v4 + 4)) != 0 )
    return _CxxFrameHandler4();
  return result;
}
