/*
 * XREFs of sub_180080AA4 @ 0x180080AA4
 * Callers:
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 * Callees:
 *     sub_180052864 @ 0x180052864 (sub_180052864.c)
 *     sub_180081B30 @ 0x180081B30 (sub_180081B30.c)
 *     sub_180084F90 @ 0x180084F90 (sub_180084F90.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180080AA4(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a1[6] )
    ((void (*)(void))sub_180081B30)();
  v4 = a1[8];
  if ( v4 )
    sub_180081B30(v4, a2);
  v5 = a1[10];
  if ( v5 )
    sub_180081B30(v5, a2);
  v6 = a1[12];
  if ( v6 )
    sub_180081B30(v6, a2);
  v7 = a1[22];
  if ( v7 )
    sub_180084F90(v7, a2);
  v11 = a2;
  result = sub_180052864(a1 + 60, &v11);
  v9 = a1 + 48;
  v10 = v9 + 12;
  while ( v9 != v10 )
  {
    if ( *v9 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, a2);
    v9 += 2;
  }
  return result;
}
