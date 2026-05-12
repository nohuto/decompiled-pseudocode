/*
 * XREFs of sub_1400899DC @ 0x1400899DC
 * Callers:
 *     sub_140065CA4 @ 0x140065CA4 (sub_140065CA4.c)
 *     sub_14009C2C8 @ 0x14009C2C8 (sub_14009C2C8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1400899DC(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _DWORD *v8; // r10
  int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // rax
  int v14; // eax
  __int64 result; // rax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v5 == 1431193940 )
    v10 = *(_QWORD *)(v5 + 24);
  else
    v10 = *(_QWORD *)(a1 + 64);
  v11 = v9 + 28;
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  if ( v11 < 0x1C )
  {
    v12 = -1;
    v4 = -1073741675;
  }
  else
  {
    v12 = v9 + 28;
    v13 = sub_1400143E0(64LL, v11, 1918067026LL, a1);
    v8 = (_DWORD *)v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = 28;
      *(_DWORD *)(v13 + 16) = 2954240;
      *(_QWORD *)(v13 + 4) = 0x54415245504D4554LL;
      if ( v5 )
        v14 = *(_DWORD *)(v5 + 1392);
      else
        v14 = *(_DWORD *)(v10 + 4124);
      v8[3] = v14;
      v8[7] = 40;
      v8[8] = 40;
      v8[6] = v9;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a4 = v12;
  *a3 = v8;
  return result;
}
