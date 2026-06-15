/*
 * XREFs of sub_1400A91A8 @ 0x1400A91A8
 * Callers:
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_14002F2D8 @ 0x14002F2D8 (sub_14002F2D8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400A92F8 @ 0x1400A92F8 (sub_1400A92F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1400A91A8(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2 )
  {
    v4 = (_QWORD *)sub_140049338(48LL, (__int64)&unk_1400C75FC);
    if ( v4 )
    {
      *(_QWORD *)((char *)v4 + 12) = 0LL;
      v4[3] = a2;
      v4[4] = 0LL;
      v4[5] = 0LL;
      *v4 = off_1400C1150;
    }
    sub_1400A92F8(a1, v4);
    v5 = *a1;
    if ( *a1 )
    {
      v6 = a1[1];
      v7 = (_QWORD *)(v5 + 32);
      if ( v6 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
        v8 = v6;
      }
      else
      {
        v5 = 0LL;
        v6 = 0LL;
        v8 = 0LL;
      }
      *v7 = v5;
      v9 = v7[1];
      v7[1] = v6;
      if ( v9 )
        sub_14002F2D8(v9);
      if ( v8 )
        sub_14002F2D8(v8);
    }
  }
  return a1;
}
