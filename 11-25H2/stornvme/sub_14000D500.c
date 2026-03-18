/*
 * XREFs of sub_14000D500 @ 0x14000D500
 * Callers:
 *     sub_14001B4B4 @ 0x14001B4B4 (sub_14001B4B4.c)
 *     sub_14001BE44 @ 0x14001BE44 (sub_14001BE44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000D500(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  int v9; // ebp
  __int16 v12; // r15
  unsigned __int16 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = a3;
  v22 = 0;
  if ( a3 )
  {
    v13 = *(_WORD *)(a1 + 326);
    v12 = 0;
  }
  else
  {
    v12 = *(_WORD *)(a1 + 234);
    v13 = *(_WORD *)(a1 + 324);
  }
  v14 = a5;
  *(_QWORD *)a2 = a4;
  if ( v14 )
    *(_QWORD *)(a2 + 8) = v14;
  else
    *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v22);
  v15 = (unsigned int)(2 * *(_DWORD *)(a1 + 200) * v9);
  v16 = *(_QWORD *)(a1 + 176) + 4096LL;
  *(_WORD *)(a2 + 48) = v9;
  v17 = v16 + v15;
  *(_QWORD *)(a2 + 50) = 0LL;
  *(_QWORD *)(a2 + 24) = a6;
  *(_QWORD *)(a2 + 32) = a7;
  result = a8;
  *(_QWORD *)(a2 + 40) = a8;
  *(_QWORD *)(a2 + 16) = v17;
  *(_WORD *)(a2 + 58) = 0;
  *(_WORD *)(a2 + 60) = v12;
  *(_WORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 140) = 0;
  if ( v13 )
  {
    v19 = 0LL;
    v20 = v13;
    do
    {
      v8 += 16LL;
      result = *(_QWORD *)(a2 + 24);
      v21 = v19 + *(_QWORD *)a2;
      v19 += 64LL;
      *(_QWORD *)(v8 + result - 16) = v21;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
