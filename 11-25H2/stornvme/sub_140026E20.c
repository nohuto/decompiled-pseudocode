/*
 * XREFs of sub_140026E20 @ 0x140026E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 */

__int64 __fastcall sub_140026E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 result; // rax
  unsigned __int8 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = sub_140005000(a2);
  result = sub_14000B900(v3, &v14);
  v8 = result;
  if ( *(_BYTE *)(v7 + 3) == 1 )
  {
    v9 = *(_QWORD *)(v2 + 4160);
    v10 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v5 + 1672) + 94LL);
    *(_DWORD *)(result + 36) = 1;
    *(_DWORD *)(result + 40) = v10;
    v11 = *(unsigned __int8 *)(v9 + 5);
    *(_DWORD *)(result + 36) = 5;
    *(_DWORD *)(result + 48) = v11;
    v12 = *(_OWORD *)(v9 + 48);
    *(_DWORD *)(result + 36) = 13;
    *(_OWORD *)(result + 52) = v12;
    v13 = *(_OWORD *)(v9 + 64);
    *(_DWORD *)(result + 36) = 29;
    *(_OWORD *)(result + 68) = v13;
  }
  *(_BYTE *)(v2 + 4225) |= 8u;
  if ( *(_QWORD *)(v2 + 4160) )
    result = sub_14000CF50(v6, *(unsigned int *)(v2 + 4208), (__int64 *)(v2 + 4160), *(_QWORD *)(v2 + 4168));
  *(_QWORD *)(v2 + 4160) = 0LL;
  *(_DWORD *)(v2 + 4208) = 0;
  *(_DWORD *)(v8 + 24) = 56;
  return result;
}
