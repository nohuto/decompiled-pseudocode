/*
 * XREFs of sub_1400644A8 @ 0x1400644A8
 * Callers:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_14006455C @ 0x14006455C (sub_14006455C.c)
 *     sub_1400645F8 @ 0x1400645F8 (sub_1400645F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400644A8(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // ecx
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_1400499B8(4096LL, (__int64)&unk_1400C75FC);
  v11[1] = v6;
  v11[0] = v6;
  v12 = 0;
  if ( v6 )
  {
    v7 = sub_14006455C(v11, &v12);
    if ( v7 >= 0 )
    {
      v7 = sub_1400645F8(a1, v11, &v12);
      if ( v7 >= 0 )
      {
        v8 = v12;
        *(_DWORD *)(v6 + 4) = v12;
        v9 = v6;
        v6 = 0LL;
        *a2 = v9;
        *a3 = v8;
      }
    }
  }
  else
  {
    v7 = -2147024882;
  }
  j_j__o_free(v6);
  return (unsigned int)v7;
}
