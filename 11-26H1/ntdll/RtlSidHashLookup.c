/*
 * XREFs of RtlSidHashLookup @ 0x1800EBA70
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  __int16 v5; // r8
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  SID_HASH_ENTRY v8; // rbx
  unsigned __int8 v9; // bp
  int v10; // edi
  int v11; // r12d
  _SID_AND_ATTRIBUTES *v12; // r15
  DWORD v13; // ebx
  _SID_AND_ATTRIBUTES *v15; // rdi

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = *(_WORD *)Sid;
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
      v11 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v10];
      v12 = &SidAttrHash->SidAttr[v11 + (unsigned int)v9];
      if ( *(_WORD *)v12->Sid == v5 )
      {
        if ( !memcmp(Sid, v12->Sid, v6) )
          return v12;
        v5 = *(_WORD *)Sid;
      }
      v10 = (unsigned __int8)v10 ^ (1 << v11);
    }
  }
  v13 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  while ( 1 )
  {
    if ( v13 >= SidAttrHash->SidCount )
      return 0LL;
    v15 = &SidAttrHash->SidAttr[v13];
    if ( *(_WORD *)v15->Sid == v5 )
      break;
LABEL_19:
    ++v13;
  }
  if ( memcmp(Sid, v15->Sid, v6) )
  {
    v5 = *(_WORD *)Sid;
    goto LABEL_19;
  }
  return v15;
}
