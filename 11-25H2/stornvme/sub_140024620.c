/*
 * XREFs of sub_140024620 @ 0x140024620
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_1400282E0 @ 0x1400282E0 (sub_1400282E0.c)
 */

__int64 __fastcall sub_140024620(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 *v6; // r10
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = sub_140005000(a2);
  v6 = (__int64 *)(v3 + 4160);
  if ( *(_BYTE *)(v2 + 3) == 1 )
  {
    sub_14000B900(v4, &v15);
    v9 = *(unsigned __int8 *)(v7 + 2);
    v8 = *(_QWORD *)(v3 + 4200);
    LOWORD(v9) = *(_WORD *)(v7 + 1);
    if ( v8 == 13 )
    {
      v10 = sub_1400282E0(v9);
      *(_BYTE *)(v11 + 9) = v10;
    }
    else if ( v8 == 47 )
    {
      v12 = sub_1400282E0(v9);
      *(_BYTE *)(v13 + 10) = v12;
    }
  }
  result = sub_14000CF50(v5, *(unsigned int *)(v3 + 4208), v6, *(_QWORD *)(v3 + 4168));
  *(_DWORD *)(v3 + 4208) = 0;
  *(_QWORD *)(v3 + 4200) = 0LL;
  *(_BYTE *)(v3 + 4225) |= 8u;
  return result;
}
