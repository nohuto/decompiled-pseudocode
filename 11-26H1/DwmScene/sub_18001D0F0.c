/*
 * XREFs of sub_18001D0F0 @ 0x18001D0F0
 * Callers:
 *     sub_18001D9A4 @ 0x18001D9A4 (sub_18001D9A4.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001D48C @ 0x18001D48C (sub_18001D48C.c)
 *     sub_18001D6C4 @ 0x18001D6C4 (sub_18001D6C4.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18001D0F0(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  int result; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  BOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  fPending = 0;
  result = InitOnceBeginInitialize(a1, 0, &fPending, 0LL);
  if ( !result )
  {
    result = o_abort();
    __debugbreak();
  }
  if ( fPending )
  {
    v7 = a1;
    v8 = 4LL;
    v5 = sub_18001C514(24LL);
    v10 = v5;
    if ( v5 )
      v6 = sub_18001D48C(v5, *(_QWORD *)(*(_QWORD *)a2 + 8LL), *(unsigned int *)(*(_QWORD *)a2 + 16LL));
    else
      v6 = 0LL;
    **(_QWORD **)a2 = v6;
    LODWORD(v8) = 0;
    return sub_18001D6C4(&v7);
  }
  return result;
}
