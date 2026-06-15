/*
 * XREFs of sub_140045294 @ 0x140045294
 * Callers:
 *     sub_140045224 @ 0x140045224 (sub_140045224.c)
 * Callees:
 *     sub_14006CC8C @ 0x14006CC8C (sub_14006CC8C.c)
 *     sub_14006CDD0 @ 0x14006CDD0 (sub_14006CDD0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_140045294(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !InitOnceBeginInitialize(&stru_1400E9678, 0, &v4, 0LL) )
    sub_14006CDD0(retaddr);
  if ( !v4 )
    return 0;
  sub_14006CC8C(&v6);
  InitOnceComplete(&stru_1400E9678, 0, 0LL);
  return 1;
}
