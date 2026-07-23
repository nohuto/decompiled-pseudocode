/*
 * XREFs of RtlpHpAffinityMgrUpdateProcess @ 0x1800E0A1C
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x1800E0854 (RtlpHpVsContextHandleContention.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpAffinityMgrUpdateProcess(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // ebp
  unsigned int v8; // r11d
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int8 *v17; // r11
  unsigned __int8 v18; // r8
  int v19; // ecx
  unsigned __int64 i; // rbx
  bool v21; // zf
  signed __int8 v22; // al
  signed __int8 v23; // al
  int v24; // eax
  __int64 v26; // [rsp+0h] [rbp-28h]

  v5 = 0;
  v26 = 0LL;
  v8 = a4;
  v9 = a2;
  v10 = 0xFFFF;
  if ( a4 )
  {
    v11 = a3;
    do
    {
      v12 = *v11;
      v13 = v12;
      if ( v12 >= v9 )
        v13 = v9;
      v9 = v13;
      if ( v12 > a2 && v12 < v10 )
        v10 = *v11;
      v14 = v5;
      if ( v12 != a2 )
        v14 = v8;
      ++v5;
      v11 += 2;
      v8 = v14;
    }
    while ( v5 < a4 );
    if ( (unsigned int)v14 < a4 && a3[2 * v14 + 1] != 1 )
    {
      if ( (*(_BYTE *)(a1 + 3) & 1) != 0 )
      {
        if ( (a5 & 1) == 0 )
        {
          LODWORD(v26) = 1;
          if ( v10 == 0xFFFF )
            v10 = v9;
          HIDWORD(v26) = v10;
          return v26;
        }
        v15 = *(_QWORD *)(a1 + 8);
        v16 = MEMORY[0x7FFE0008] - v15;
        if ( (unsigned __int64)(MEMORY[0x7FFE0008] - v15) >= 0x100000 )
        {
          v16 &= 0xFFFFFFFFFFF00000uLL;
          *(_QWORD *)(a1 + 8) = v16 + v15;
        }
      }
      else
      {
        v16 = 0LL;
      }
      *(_BYTE *)a1 = 0;
      v17 = (unsigned __int8 *)(a1 + 2);
      v18 = *(_BYTE *)(a1 + 1);
      if ( v16 < 0x100000 )
        goto LABEL_28;
      while ( 1 )
      {
        v17 = (unsigned __int8 *)(a1 + 2);
        if ( v18 >= *(_BYTE *)(a1 + 2) )
          break;
        LOBYTE(v19) = v18;
        for ( i = v16 >> 20; (_DWORD)i; LODWORD(i) = i - 1 )
        {
          if ( !(_BYTE)v19 )
            break;
          v19 = 3 * (unsigned __int8)v19 / 4;
        }
        v22 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v19, v18);
        v21 = v18 == (unsigned __int8)v22;
        v18 = v22;
        if ( v21 )
        {
          v18 = v19;
LABEL_28:
          while ( v18 < *v17 )
          {
            v23 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v18 + 1, v18);
            if ( v18 == v23 )
            {
              if ( v18 < *v17 - 1 )
              {
                v24 = v18 + 1;
                goto LABEL_35;
              }
              LODWORD(v26) = 3;
              return v26;
            }
            v18 = v23;
          }
          break;
        }
      }
      v24 = v18;
LABEL_35:
      HIDWORD(v26) = v24;
      LODWORD(v26) = 2;
    }
  }
  return v26;
}
