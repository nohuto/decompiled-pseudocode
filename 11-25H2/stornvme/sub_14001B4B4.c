/*
 * XREFs of sub_14001B4B4 @ 0x14001B4B4
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 * Callees:
 *     sub_14000D500 @ 0x14000D500 (sub_14000D500.c)
 *     sub_14001DB6C @ 0x14001DB6C (sub_14001DB6C.c)
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14001B4B4(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // r14
  _QWORD *v3; // rsi
  char result; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // [rsp+70h] [rbp+30h]
  __int64 v11; // [rsp+78h] [rbp+38h]

  v1 = *(unsigned __int16 *)(a1 + 324);
  v2 = (__int64 *)(a1 + 336);
  v3 = (_QWORD *)(a1 + 544);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v11 = 16 * v1 + *v3;
    v10 = v11 + 16 * v1;
    v6 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2;
    if ( v6 )
      sub_140032C80(v11, 0LL, 4LL * v6);
    v7 = (32 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2;
    if ( v7 )
      sub_140032C80(v10, 0LL, 4LL * v7);
    sub_14000D500(a1, (__int64)v2, 0, *v2, 0LL, v11, v10, 0LL);
    sub_14001DB6C(a1, (_DWORD)v3, 0, *v3, 0LL, 0LL, 0LL);
    v8 = (unsigned int)(*(unsigned __int16 *)(a1 + 324) << 6) >> 2;
    if ( v8 )
      sub_140032C80(*v2, 0LL, 4LL * v8);
    v9 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2;
    if ( v9 )
      sub_140032C80(*v3, 0LL, 4LL * v9);
    *((_WORD *)v2 + 29) = 0;
    result = 1;
    *(_DWORD *)(a1 + 724) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v1), 1701672526LL);
    sub_14001F48C(a1, 0LL);
    sub_14001F48C(a1, 0LL);
    sub_14001F48C(a1, 0LL);
    return 0;
  }
  return result;
}
