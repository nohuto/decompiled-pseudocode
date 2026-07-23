/*
 * XREFs of SepTokenIsOwner @ 0x1403AE5D0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

bool __fastcall SepTokenIsOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int16 v7; // r9
  size_t v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // bp
  int v12; // ebx
  int v13; // r13d
  __int64 v14; // r12
  unsigned int v15; // esi
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rax
  __int16 v20; // r13
  size_t v21; // r8
  unsigned __int64 v22; // rsi
  unsigned __int8 v23; // r12
  int v24; // ebx
  int v25; // ebp
  __int64 v26; // r14
  unsigned int v27; // ebx
  unsigned int j; // ebp
  unsigned int i; // ebp
  unsigned int v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+68h] [rbp+10h]
  __int16 v32; // [rsp+70h] [rbp+18h]
  unsigned int v33; // [rsp+70h] [rbp+18h]

  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    v4 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v3 )
      v4 = (unsigned __int8 *)(a2 + v3);
    else
      v4 = 0LL;
  }
  v5 = a1 + 232;
  if ( a1 == -232 || !v4 )
    return 0;
  v6 = v4[1];
  v7 = *(_WORD *)v4;
  v32 = *(_WORD *)v4;
  v8 = (unsigned int)(4 * v6 + 8);
  v9 = v4[4 * v6 + 4];
  v30 = v8;
  v10 = *(_QWORD *)(v5 + 8 * (v9 & 0xF) + 16) & *(_QWORD *)(v5 + 8 * (v9 >> 4) + 144);
  v11 = 0;
LABEL_7:
  if ( !v10 )
  {
    v15 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 > 0x40u )
    {
      for ( i = 64; i < v15; ++i )
      {
        v17 = *(_QWORD *)(v5 + 8);
        v14 = v17 + 16LL * i;
        if ( **(_WORD **)v14 == v7 )
        {
          if ( !memcmp(v4, *(const void **)v14, v8) )
            goto LABEL_19;
          v8 = v30;
          v7 = v32;
        }
      }
    }
    return 0;
  }
  LOBYTE(v12) = v10;
  while ( 1 )
  {
    if ( !(_BYTE)v12 )
    {
      v11 += 8;
      v10 >>= 8;
      goto LABEL_7;
    }
    v31 = *(_QWORD *)(v5 + 8);
    v13 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v12);
    v14 = v31 + 16LL * (v13 + (unsigned int)v11);
    if ( **(_WORD **)v14 == v7 )
      break;
LABEL_13:
    v12 = (unsigned __int8)v12 ^ (1 << v13);
  }
  if ( memcmp(v4, *(const void **)v14, v8) )
  {
    v8 = v30;
    v7 = v32;
    goto LABEL_13;
  }
  v17 = v31;
LABEL_19:
  if ( !v14 || (v14 != v17 || (*(_DWORD *)(v14 + 8) & 0x10) != 0) && (*(_DWORD *)(v14 + 8) & 4) == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 128) )
  {
    v18 = a1 + 504;
    if ( v18 )
    {
      v19 = v4[1];
      v20 = *(_WORD *)v4;
      v21 = (unsigned int)(4 * v19 + 8);
      v33 = 4 * v19 + 8;
      v22 = *(_QWORD *)(v18 + 8LL * (v4[4 * v19 + 4] & 0xF) + 16) & *(_QWORD *)(v18
                                                                              + 8
                                                                              * ((unsigned __int64)v4[4 * v19 + 4] >> 4)
                                                                              + 144);
      v23 = 0;
      while ( v22 )
      {
        LOBYTE(v24) = v22;
        while ( (_BYTE)v24 )
        {
          v25 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v24);
          v26 = *(_QWORD *)(v18 + 8) + 16LL * (v25 + (unsigned int)v23);
          if ( **(_WORD **)v26 == v20 )
          {
            if ( !memcmp(v4, *(const void **)v26, v21) )
              goto LABEL_40;
            v21 = v33;
          }
          v24 = (unsigned __int8)v24 ^ (1 << v25);
        }
        v23 += 8;
        v22 >>= 8;
      }
      v27 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 > 0x40u )
      {
        for ( j = 64; j < v27; ++j )
        {
          v26 = *(_QWORD *)(v18 + 8) + 16LL * j;
          if ( **(_WORD **)v26 == v20 )
          {
            if ( !memcmp(v4, *(const void **)v26, v21) )
            {
LABEL_40:
              if ( !v26 )
                return 0;
              return (*(_BYTE *)(v26 + 8) & 4) != 0;
            }
            v21 = v33;
          }
        }
      }
    }
    return 0;
  }
  return 1;
}
