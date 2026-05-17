/*
 * XREFs of RtlSidHashLookup @ 0x1800EC680
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int16 v5; // r8
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // bp
  int v10; // edi
  int v11; // r12d
  const void **v12; // r15
  unsigned int v13; // ebx
  const void **v15; // rdi

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = *(_WORD *)a2;
  v6 = 4 * v4 + 8;
  v7 = a2[4 * v4 + 4];
  v8 = *(_QWORD *)(a1 + 8 * (v7 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * (v7 >> 4) + 144);
  v9 = 0;
LABEL_4:
  if ( v8 )
  {
    LOBYTE(v10) = v8;
    while ( 1 )
    {
      if ( !(_BYTE)v10 )
      {
        v9 += 8;
        v8 >>= 8;
        goto LABEL_4;
      }
      v11 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v10];
      v12 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (v11 + (unsigned int)v9));
      if ( *(_WORD *)*v12 == v5 )
      {
        if ( !memcmp(a2, *v12, v6) )
          return v12;
        v5 = *(_WORD *)a2;
      }
      v10 = (unsigned __int8)v10 ^ (1 << v11);
    }
  }
  v13 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  while ( 1 )
  {
    if ( v13 >= *(_DWORD *)a1 )
      return 0LL;
    v15 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * v13);
    if ( *(_WORD *)*v15 == v5 )
      break;
LABEL_19:
    ++v13;
  }
  if ( memcmp(a2, *v15, v6) )
  {
    v5 = *(_WORD *)a2;
    goto LABEL_19;
  }
  return v15;
}
