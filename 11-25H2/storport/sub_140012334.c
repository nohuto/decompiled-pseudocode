/*
 * XREFs of sub_140012334 @ 0x140012334
 * Callers:
 *     sub_14009BE34 @ 0x14009BE34 (sub_14009BE34.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140012334(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r10
  unsigned int v8; // esi
  int v9; // edi
  __int64 v10; // rax
  __int64 result; // rax

  v4 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v8 >= 0xFFFFFFE4 )
  {
    v9 = -1;
    v4 = -1073741675;
  }
  else
  {
    v9 = v8 + 28;
    v10 = sub_1400143E0(64LL, v8 + 28, 1918067026LL, a1);
    v7 = v10;
    if ( v10 )
    {
      *(_DWORD *)v10 = 28;
      *(_DWORD *)(v10 + 16) = 2954240;
      *(_QWORD *)(v10 + 4) = 0x59474F4C4F504F54LL;
      *(_DWORD *)(v10 + 28) = 56;
      *(_DWORD *)(v10 + 32) = v8;
      *(_DWORD *)(v10 + 12) = 60;
      *(_DWORD *)(v10 + 24) = v8;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a4 = v9;
  *a3 = v7;
  return result;
}
