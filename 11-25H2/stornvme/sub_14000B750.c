/*
 * XREFs of sub_14000B750 @ 0x14000B750
 * Callers:
 *     sub_140014B80 @ 0x140014B80 (sub_140014B80.c)
 * Callees:
 *     sub_14002079C @ 0x14002079C (sub_14002079C.c)
 */

__int64 __fastcall sub_14000B750(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5, char a6, char a7)
{
  unsigned int v8; // esi
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ecx

  v8 = a2;
  if ( a5 == 1 )
    return *(unsigned __int16 *)(a1 + 384);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v12 = *(_QWORD *)(a1 + 936);
    return *(unsigned __int16 *)(v12 + 48);
  }
  v10 = *(unsigned __int16 *)(a1 + 234);
  if ( a2 >= v10 )
    v8 = a2 % v10;
  v11 = *(_QWORD *)(a1 + 264);
  if ( a6 )
  {
    if ( !*(_QWORD *)(v11 + 72LL * v8 + 64) )
      sub_14002079C(a1, v8, a3);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v8 + 64);
  }
  else
  {
    if ( !*(_QWORD *)(v11 + 72LL * v8 + 56) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 24LL * (unsigned __int16)a3 + 16);
      if ( v14
        || (*(_DWORD *)(a1 + 24) & 0x800000) != 0
        && (v16 = *(unsigned __int16 *)(a1 + 1000),
            v14 = *(_QWORD *)(a1 + 944) + 392 * v16,
            *(_WORD *)(a1 + 1000) = ((int)v16 + 1) % (unsigned int)*(unsigned __int16 *)(a1 + 332),
            v14) )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192)
                        + 8LL
                        * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 184), 1u)
                         % *(_DWORD *)(v14 + 180)));
        *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v8 + 56) = v15;
        ++*(_WORD *)(v15 + 60);
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v8 + 56);
  }
  if ( !*(_BYTE *)(a1 + 3752) || !a4 )
    return *(unsigned __int16 *)(v12 + 48);
  v17 = *(_DWORD *)(a1 + 3764);
  if ( (v17 & 0x80u) == 0 && (a4 > *(_DWORD *)(a1 + 3760) || a7) )
    return *(unsigned __int16 *)(208LL
                               * (unsigned __int16)(*(_WORD *)(a1 + 334)
                                                  + v8 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334)))
                               + *(_QWORD *)(a1 + 936)
                               + 48);
  if ( (v17 & 0x40) != 0 )
    v18 = *(unsigned __int16 *)(a1 + 332);
  else
    v18 = *(unsigned __int16 *)(a1 + 334);
  return *(unsigned __int16 *)(208LL * (unsigned __int16)(v8 % v18) + *(_QWORD *)(a1 + 936) + 48);
}
