/*
 * XREFs of sub_180093220 @ 0x180093220
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_1800436D0 @ 0x1800436D0 (sub_1800436D0.c)
 *     sub_18004A2B8 @ 0x18004A2B8 (sub_18004A2B8.c)
 */

__int64 __fastcall sub_180093220(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  char v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_18004A2B8(a2, &v7, a3);
  v3 = v7;
  v4 = dword_1801C7C90[*(int *)(v7 + 188)];
  sub_1800436D0(v7, 9, (unsigned int)(v4 - 1) <= 1);
  sub_1800436D0(v3, 8, (unsigned int)(v4 - 2) <= 1);
  v5 = v4 == 1 || v4 == 2;
  sub_1800434E4(v3, (__int64)&unk_1801CCDD8, v5);
  result = sub_1800434E4(v3, (__int64)&unk_1801CCDF8, (unsigned int)(v4 - 2) <= 1);
  if ( v8 )
    return sub_180010EC8(v8);
  return result;
}
