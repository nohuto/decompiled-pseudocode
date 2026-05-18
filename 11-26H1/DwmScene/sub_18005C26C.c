/*
 * XREFs of sub_18005C26C @ 0x18005C26C
 * Callers:
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 * Callees:
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18005BD60 @ 0x18005BD60 (sub_18005BD60.c)
 *     sub_18005CD48 @ 0x18005CD48 (sub_18005CD48.c)
 */

__int64 __fastcall sub_18005C26C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r11
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  char v10; // cl
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  _BYTE v15[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  v16 = (unsigned __int64)v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = a3[1];
    do
    {
      *(_QWORD *)&v16 = v8;
      if ( *(_QWORD *)(v8 + 40) >= v9 )
      {
        v10 = 0;
        DWORD2(v16) = 1;
        v7 = v8;
      }
      else
      {
        v10 = 1;
        DWORD2(v16) = 0;
      }
      v11 = (__int64 *)(v8 + 16);
      if ( !v10 )
        v11 = (__int64 *)v8;
      v8 = *v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || a3[1] < *(_QWORD *)(v7 + 40) )
  {
    if ( a1[1] == 0x555555555555555LL )
      sub_18001DF68();
    v12 = sub_18005BD60((__int64)v15, (__int64)a1, v3, a3);
    v13 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = 0LL;
    sub_18005CD48(v15);
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v16, v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
