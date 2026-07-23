/*
 * XREFs of RtlpHpAffinityMgrUpdateProcess @ 0x140356274
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x1403560AC (RtlpHpVsContextHandleContention.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
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
  unsigned __int64 v15; // r9
  unsigned __int8 *v16; // r11
  unsigned __int8 v17; // r8
  signed __int8 v18; // al
  int v19; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 i; // rbx
  bool v24; // zf
  signed __int8 v25; // al
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
        v21 = *(_QWORD *)(a1 + 8);
        v15 = MEMORY[0xFFFFF78000000008] - v21;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v21) >= 0x100000 )
        {
          v15 &= 0xFFFFFFFFFFF00000uLL;
          *(_QWORD *)(a1 + 8) = v15 + v21;
        }
      }
      else
      {
        v15 = 0LL;
      }
      *(_BYTE *)a1 = 0;
      v16 = (unsigned __int8 *)(a1 + 2);
      v17 = *(_BYTE *)(a1 + 1);
      if ( v15 < 0x100000 )
        goto LABEL_14;
      while ( 1 )
      {
        v16 = (unsigned __int8 *)(a1 + 2);
        if ( v17 >= *(_BYTE *)(a1 + 2) )
          break;
        LOBYTE(v22) = v17;
        for ( i = v15 >> 20; (_DWORD)i; LODWORD(i) = i - 1 )
        {
          if ( !(_BYTE)v22 )
            break;
          v22 = 3 * (unsigned __int8)v22 / 4;
        }
        v25 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v22, v17);
        v24 = v17 == (unsigned __int8)v25;
        v17 = v25;
        if ( v24 )
        {
          v17 = v22;
LABEL_14:
          while ( v17 < *v16 )
          {
            v18 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v17 + 1, v17);
            if ( v17 == v18 )
            {
              if ( v17 < *v16 - 1 )
              {
                v19 = v17 + 1;
                goto LABEL_18;
              }
              LODWORD(v26) = 3;
              return v26;
            }
            v17 = v18;
          }
          break;
        }
      }
      v19 = v17;
LABEL_18:
      HIDWORD(v26) = v19;
      LODWORD(v26) = 2;
    }
  }
  return v26;
}
