/*
 * XREFs of sub_18004A090 @ 0x18004A090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 */

__int64 __fastcall sub_18004A090(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD **)(a1 + 112);
  v4 = *(_QWORD **)(a1 + 104);
  v5 = *(_DWORD *)(*a2 + 244LL);
  while ( v4 != v3 )
  {
    v6 = v4[3];
    if ( v6 )
      sub_18007E470(v6, v5);
    v7 = v4[5];
    if ( v7 )
      sub_18007E470(v7, v5);
    v8 = v4[7];
    if ( v8 )
      sub_18007E470(v8, v5);
    v9 = v4[9];
    if ( v9 )
      sub_18007E470(v9, v5);
    v4 += 11;
  }
  result = (__int64)sub_180012C40(v13, a2);
  v11 = *(_QWORD *)(result + 8);
  if ( v11 )
    result = sub_180010EC8(v11);
  v12 = a2[1];
  if ( v12 )
    return sub_180010EC8(v12);
  return result;
}
