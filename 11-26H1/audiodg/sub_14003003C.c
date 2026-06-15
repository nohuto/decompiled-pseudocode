/*
 * XREFs of sub_14003003C @ 0x14003003C
 * Callers:
 *     sub_14002F92C @ 0x14002F92C (sub_14002F92C.c)
 *     sub_14002FFB0 @ 0x14002FFB0 (sub_14002FFB0.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

__int64 __fastcall sub_14003003C(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)sub_140049338(16LL, &unk_1400C75FC);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = 0LL;
  v2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *v2 = v4;
  v6 = v2[1];
  v2[1] = v5;
  if ( v6 )
    sub_140007588(v6);
  if ( !TrySubmitThreadpoolCallback(pfns, v3, 0LL) )
    return sub_1400470EC(retaddr, 43LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp");
  else
    return 0LL;
}
