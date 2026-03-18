/*
 * XREFs of sub_140004670 @ 0x140004670
 * Callers:
 *     sub_140003700 @ 0x140003700 (sub_140003700.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_14000BA00 @ 0x14000BA00 (sub_14000BA00.c)
 *     sub_14001FB24 @ 0x14001FB24 (sub_14001FB24.c)
 *     sub_14002079C @ 0x14002079C (sub_14002079C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140004670(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx

  result = a3;
  v6 = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 24LL * a3 + 16);
  if ( !v7 )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x800000) == 0 )
      return result;
    if ( a4 )
    {
      if ( a4 != 1 )
        return result;
      v12 = *(unsigned __int16 *)(a1 + 1002);
      v7 = *(_QWORD *)(a1 + 944) + 392 * v12;
      v13 = *(unsigned __int16 *)(a1 + 332);
      v14 = ((int)v12 + 1) % v13;
      result = ((int)v12 + 1) / v13;
      *(_WORD *)(a1 + 1002) = v14;
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 1000);
      v7 = *(_QWORD *)(a1 + 944) + 392 * v9;
      v10 = *(unsigned __int16 *)(a1 + 332);
      v11 = ((int)v9 + 1) % v10;
      result = ((int)v9 + 1) / v10;
      *(_WORD *)(a1 + 1000) = v11;
    }
    if ( !v7 )
      return result;
  }
  if ( !a4 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192)
                   + 8LL
                   * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 184), 1u)
                    % *(_DWORD *)(v7 + 180)));
    result = *(_QWORD *)(a1 + 264);
    *(_QWORD *)(result + 72 * v6 + 56) = v8;
LABEL_4:
    ++*(_WORD *)(v8 + 60);
    return result;
  }
  if ( a4 == 1 && *(_QWORD *)(v7 + 224) && *(_DWORD *)(v7 + 212) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 224)
                   + 8LL
                   * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 216), 1u)
                    % *(_DWORD *)(v7 + 212)));
    result = *(_QWORD *)(a1 + 264);
    *(_QWORD *)(result + 72 * v6 + 64) = v8;
    goto LABEL_4;
  }
  return result;
}
