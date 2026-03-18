/*
 * XREFs of sub_14002910C @ 0x14002910C
 * Callers:
 *     sub_140022D58 @ 0x140022D58 (sub_140022D58.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002910C(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v13; // r8
  unsigned __int16 *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned __int16 *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  if ( !a4 )
    return 3238002694LL;
  if ( !a3 )
    return 3238002694LL;
  v9 = a5;
  if ( !a5 )
    return 3238002694LL;
  *a4 = 0;
  sub_140009580(a1, a1 + 1008);
  v10 = *(_QWORD *)(a1 + 1104);
  v11 = 2 * a3 + 2;
  sub_140006100(a1, v11);
  if ( !v18 )
    return 3238002691LL;
  if ( (v11 & 3) != 0 )
  {
    if ( 2 * a3 != -2 )
      sub_140032C80(v18, 0LL, v11);
  }
  else if ( v11 >> 2 )
  {
    sub_140032C80(v18, 0LL, 4LL * (v11 >> 2));
  }
  if ( !(unsigned int)sub_1400066B0(a1, v10, 0LL, v11) )
    goto LABEL_18;
  *(_BYTE *)(v10 + 4225) |= 7u;
  *(_DWORD *)(v10 + 4100) = a2;
  *(_DWORD *)(v10 + 4136) = (v11 >> 2) - 1;
  *(_QWORD *)(v10 + 4192) = sub_140028C60;
  *(_BYTE *)(v10 + 4096) = 26;
  *(_WORD *)(v10 + 4140) = 258;
  sub_1400042C0(a1, a1 + 1016);
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v13) = 1;
  sub_140008130(a1, a1 + 1016, v13);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v14 = v18;
    v15 = *v18;
    *a4 = v15;
    if ( a3 < v15 )
    {
      v17 = -1056964604;
    }
    else
    {
      v16 = 0LL;
      if ( v15 )
      {
        do
        {
          *(_DWORD *)(v9 + 4 * v16) = v14[v16 + 1];
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *v14 );
      }
      v17 = 0;
    }
  }
  else
  {
LABEL_18:
    v14 = v18;
    v17 = -1056964607;
  }
  if ( v14 )
    sub_14000CF50(a1, v11, (__int64 *)&v18, 0LL);
  return v17;
}
