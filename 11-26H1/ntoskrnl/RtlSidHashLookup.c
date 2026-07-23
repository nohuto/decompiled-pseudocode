/*
 * XREFs of RtlSidHashLookup @ 0x1403F15C0
 * Callers:
 *     SepMatchCapability @ 0x1403F1568 (SepMatchCapability.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  __int16 v5; // r9
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // bp
  int v10; // ebx
  int v11; // r15d
  _SID_AND_ATTRIBUTES *v12; // r12
  unsigned int SidCount; // ebx
  unsigned int i; // edi
  _SID_AND_ATTRIBUTES *v16; // r15
  __int16 v17; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = *(_WORD *)Sid;
  v17 = *(_WORD *)Sid;
  v6 = 4 * v4 + 8;
  v7 = *((unsigned __int8 *)Sid + 4 * v4 + 4);
  v8 = SidAttrHash->Hash[v7 & 0xF] & SidAttrHash->Hash[(v7 >> 4) + 16];
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
      v12 = &SidAttrHash->SidAttr[v11 + (unsigned int)v9];
      if ( *(_WORD *)v12->Sid == v5 )
      {
        if ( !memcmp(Sid, v12->Sid, v6) )
          return v12;
        v5 = v17;
      }
      v10 = (unsigned __int8)v10 ^ (1 << v11);
    }
  }
  SidCount = SidAttrHash->SidCount;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  for ( i = 64; ; ++i )
  {
    if ( i >= SidCount )
      return 0LL;
    v16 = &SidAttrHash->SidAttr[i];
    if ( *(_WORD *)v16->Sid == v5 )
      break;
LABEL_18:
    ;
  }
  if ( memcmp(Sid, v16->Sid, v6) )
  {
    v5 = v17;
    goto LABEL_18;
  }
  return v16;
}
