/*
 * XREFs of sub_14006488C @ 0x14006488C
 * Callers:
 *     sub_140065780 @ 0x140065780 (sub_140065780.c)
 * Callees:
 *     sub_14001C6F0 @ 0x14001C6F0 (sub_14001C6F0.c)
 *     sub_14002F42C @ 0x14002F42C (sub_14002F42C.c)
 *     sub_14003FB08 @ 0x14003FB08 (sub_14003FB08.c)
 *     sub_140041D58 @ 0x140041D58 (sub_140041D58.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140065ED0 @ 0x140065ED0 (sub_140065ED0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14006488C(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4, _DWORD *a5, __int64 *a6)
{
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rbx
  int v12; // r9d
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = sub_140049338(224LL, (__int64)&unk_1400C75FC);
  v14 = v9;
  if ( v9 )
  {
    v11 = sub_140041D58(v9);
    v14 = 0LL;
    v10 = sub_140065ED0(v11, *a2, *a3, v12, *a5, *a6);
    if ( v10 >= 0 )
      v10 = sub_14002F42C(v11, &dword_1400C6A80, a1);
    if ( v11 )
      sub_14001C6F0(v11);
  }
  else
  {
    v10 = -2147024882;
  }
  sub_14003FB08(&v14);
  return (unsigned int)v10;
}
