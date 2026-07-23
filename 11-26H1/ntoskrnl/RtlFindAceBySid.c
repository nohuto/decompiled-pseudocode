/*
 * XREFs of RtlFindAceBySid @ 0x140405490
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  unsigned __int8 *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx

  if ( a1 )
  {
    v5 = *(unsigned __int16 *)(a1 + 4);
    v6 = (unsigned __int8 *)(a1 + 8);
    v7 = 0;
    v8 = 4089344;
    while ( 1 )
    {
      if ( v7 >= v5 )
        return 0LL;
      v9 = *v6;
      if ( (unsigned __int8)v9 <= 3u || (unsigned __int8)v9 <= 0x15u && _bittest(&v8, v9) )
      {
        v10 = 8LL;
      }
      else if ( (_BYTE)v9 == 4 )
      {
        v10 = 12LL;
      }
      else
      {
        if ( (unsigned __int8)(v9 - 5) > 3u && (unsigned __int8)(v9 - 11) > 1u && (unsigned __int8)(v9 - 15) > 1u )
          goto LABEL_15;
        v10 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
      }
      v11 = &v6[v10];
      if ( v11 )
      {
        if ( a3 )
        {
          if ( v7 >= *a3 && RtlEqualSid(v11, a2) )
          {
            *a3 = v7;
            return v6;
          }
        }
        else if ( *(_WORD *)v11 == *a2 && !memcmp(v11, a2, 4 * ((unsigned __int64)*(unsigned __int16 *)v11 >> 8) + 8) )
        {
          return v6;
        }
      }
LABEL_15:
      ++v7;
      v6 += *((unsigned __int16 *)v6 + 1);
    }
  }
  return 0LL;
}
