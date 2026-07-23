/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x180106C30
 * Callers:
 *     RtlNumberOfClearBitsEx @ 0x1801413D0 (RtlNumberOfClearBitsEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsEx(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *v2; // r8
  __int64 v3; // rbp
  __int64 v4; // r10
  int v5; // ecx
  unsigned __int64 v6; // r11
  int v7; // esi
  int v8; // ebx
  unsigned __int64 v9; // rdx
  int i; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  char v14; // cl
  unsigned __int64 v15; // r11
  int v16; // edi
  char v17; // cl

  v1 = *a1;
  v2 = (unsigned __int64 *)a1[1];
  v3 = *a1 & 7;
  v4 = 0LL;
  v5 = (unsigned __int8)v2 & 7;
  v6 = (v1 >> 3) + (v3 != 0);
  if ( 8 - (unsigned __int64)((unsigned __int8)v2 & 7) <= v1 >> 3 )
  {
    v8 = 8 - v5;
    v7 = (((unsigned __int8)(v1 >> 3) - (8 - (_BYTE)v5)) & 7) + 1;
    if ( !v3 )
      v7 = ((unsigned __int8)(v1 >> 3) - (8 - (_BYTE)v5)) & 7;
    v9 = v6 - (unsigned int)(v7 + v8);
  }
  else
  {
    v7 = 0;
    v8 = (v1 >> 3) + (v3 != 0);
    v9 = 0LL;
  }
  for ( i = 0; v8; --v8 )
  {
    v14 = *(_BYTE *)v2;
    v2 = (unsigned __int64 *)((char *)v2 + 1);
    if ( i == v6 - 1 && v3 )
      v14 &= byte_18018A108[v3];
    ++i;
    v4 += RtlpBitsClearTotal[(unsigned __int8)~v14];
  }
  if ( v9 )
  {
    v11 = ((v9 - 1) >> 3) + 1;
    i += 8 * v11;
    do
    {
      v12 = *v2++;
      v4 += (unsigned int)__popcnt(v12);
      --v11;
    }
    while ( v11 );
  }
  if ( v7 )
  {
    v15 = v6 - 1;
    v16 = v1 & 7;
    do
    {
      v17 = *(_BYTE *)v2;
      v2 = (unsigned __int64 *)((char *)v2 + 1);
      if ( i == v15 && v16 )
        v17 &= byte_18018A108[v16];
      ++i;
      v4 += RtlpBitsClearTotal[(unsigned __int8)~v17];
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
