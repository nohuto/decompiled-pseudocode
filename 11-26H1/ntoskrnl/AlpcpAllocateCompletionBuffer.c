/*
 * XREFs of AlpcpAllocateCompletionBuffer @ 0x140A50990
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     AlpcpAllocateFromBitmap @ 0x140A50C00 (AlpcpAllocateFromBitmap.c)
 *     AlpcpFreeBitmap @ 0x140A50D8C (AlpcpFreeBitmap.c)
 */

__int64 __fastcall AlpcpAllocateCompletionBuffer(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int *v8; // r15
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int *v12; // r13
  unsigned int *v13; // r8
  unsigned int v14; // ecx
  unsigned int i; // eax
  signed __int32 *v16; // r8
  int v17; // r11d
  int v18; // r9d
  signed __int32 v19; // eax
  signed __int32 v20; // r11d
  unsigned int v22; // ebp
  int v23; // r9d
  signed __int32 v24; // eax
  signed __int32 v25; // r11d
  signed __int32 v26; // eax
  unsigned int v27; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 360);
  v3 = (unsigned int)(a2 + 63) >> 6;
  LODWORD(v4) = -1;
  v5 = *(_QWORD *)(v2 + 104);
  v6 = *(_QWORD *)(v2 + 96) >> 2;
  v7 = 0;
  v8 = (unsigned int *)(v5 + 4 * ((unsigned __int64)*(unsigned int *)(v2 + 136) >> 5));
  while ( v7 < v6 )
  {
    v9 = 0;
    v10 = *(_DWORD *)(v2 + 140) & 0xFFFFFFE0;
    v4 = 0xFFFFFFFFLL;
    if ( *(_DWORD *)(v2 + 140) >= *(_DWORD *)(v2 + 136) )
      v10 = 0;
    v11 = v10;
    v27 = v10;
    v12 = (unsigned int *)(v5 + 4 * ((unsigned __int64)v10 >> 5));
    v13 = v12;
LABEL_6:
    if ( v13 != v8 )
    {
      v14 = *v13;
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          if ( i >= 0x20 )
          {
            ++v13;
            goto LABEL_6;
          }
          if ( (v14 & 1) == 0 )
            break;
          v14 >>= 1;
          v4 = 0xFFFFFFFFLL;
          ++i;
          v9 = 0;
        }
        if ( (_DWORD)v4 == -1 )
          v4 = i + 32 * (unsigned int)(v13 - v12);
        if ( ++v9 == v3 )
          break;
        v14 >>= 1;
      }
      v16 = (signed __int32 *)&v12[(unsigned __int64)(unsigned int)v4 >> 5];
      v17 = v4 & 0x1F;
      if ( (v4 & 0x1F) != 0 )
      {
        v22 = v9;
        if ( v9 >= 32 - v17 )
          v22 = 32 - v17;
        v23 = ((1 << v22) - 1) << v17;
        _m_prefetchw(v16);
        v24 = *v16;
        while ( 1 )
        {
          v25 = v24;
          if ( (v24 & v23) != 0 )
            goto LABEL_38;
          v24 = _InterlockedCompareExchange(v16, v23 | v24, v24);
          if ( v24 == v25 )
          {
            v9 -= v22;
            v11 = v27;
            ++v16;
            break;
          }
        }
      }
LABEL_15:
      if ( v9 >= 0x20 )
      {
        _m_prefetchw(v16);
        v26 = *v16;
        while ( !v26 )
        {
          v26 = _InterlockedCompareExchange(v16, -1, 0);
          if ( !v26 )
          {
            v9 -= 32;
            ++v16;
            goto LABEL_15;
          }
        }
        goto LABEL_36;
      }
      if ( v9 )
      {
        v18 = (1 << v9) - 1;
        _m_prefetchw(v16);
        v19 = *v16;
        while ( 1 )
        {
          v20 = v19;
          if ( (v19 & v18) != 0 )
            break;
          v19 = _InterlockedCompareExchange(v16, v18 | v19, v19);
          if ( v19 == v20 )
            goto LABEL_20;
        }
LABEL_36:
        if ( v3 != v9 )
          AlpcpFreeBitmap(v12, v4, (unsigned int)v4, v3 - v9);
LABEL_38:
        LODWORD(v4) = -2;
        goto LABEL_39;
      }
LABEL_20:
      if ( (_DWORD)v4 == -2 )
        goto LABEL_39;
      if ( (_DWORD)v4 != -1 )
      {
        LODWORD(v4) = v11 + v4;
        break;
      }
    }
    if ( !v11 )
      return 0xFFFFFFFFLL;
    LODWORD(v4) = AlpcpAllocateFromBitmap(v5, v12, v3);
    if ( (_DWORD)v4 != -2 )
      break;
LABEL_39:
    ++v7;
  }
  if ( (unsigned int)v4 <= 0xFFFFFFFD )
  {
    *(_DWORD *)(v2 + 140) = v4 + v3;
    return (unsigned int)((_DWORD)v4 << 6);
  }
  return 0xFFFFFFFFLL;
}
