/*
 * XREFs of RtlSidHashLookup @ 0x1402AFED0
 * Callers:
 *     SepMatchCapability @ 0x1402AFC18 (SepMatchCapability.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int16 v5; // r9
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // bp
  int v10; // ebx
  int v11; // r15d
  const void **v12; // r12
  unsigned int v13; // ebx
  unsigned int i; // edi
  const void **v16; // r15
  __int16 v17; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = *(_WORD *)a2;
  v17 = *(_WORD *)a2;
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
      v11 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v10);
      v12 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (v11 + (unsigned int)v9));
      if ( *(_WORD *)*v12 == v5 )
      {
        if ( !memcmp(a2, *v12, v6) )
          return v12;
        v5 = v17;
      }
      v10 = (unsigned __int8)v10 ^ (1 << v11);
    }
  }
  v13 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  for ( i = 64; ; ++i )
  {
    if ( i >= v13 )
      return 0LL;
    v16 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * i);
    if ( *(_WORD *)*v16 == v5 )
      break;
LABEL_18:
    ;
  }
  if ( memcmp(a2, *v16, v6) )
  {
    v5 = v17;
    goto LABEL_18;
  }
  return v16;
}
