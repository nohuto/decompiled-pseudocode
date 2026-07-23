/*
 * XREFs of RtlpApplyAclToObject @ 0x180048340
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r10d
  unsigned __int8 *v4; // r8
  int v5; // ebx
  unsigned int v6; // r9d
  int v7; // eax
  int v8; // ecx

  if ( a1 )
  {
    v3 = 0;
    v4 = (unsigned __int8 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) )
    {
      v5 = 1651;
      do
      {
        v6 = *v4;
        if ( ((unsigned __int8)v6 <= 0xAu || (unsigned __int8)(v6 - 13) <= 1u) && (v4[1] & 8) == 0 )
        {
          v7 = *((_DWORD *)v4 + 1);
          if ( v7 < 0 )
            v7 |= *a2;
          if ( (v7 & 0x40000000) != 0 )
            v7 |= a2[1];
          if ( (v7 & 0x20000000) != 0 )
            v7 |= a2[2];
          if ( (v7 & 0x10000000) != 0 )
            v7 |= a2[3];
          *((_DWORD *)v4 + 1) = v7 & 0xFFFFFFF;
          if ( (unsigned __int8)v6 <= 0xAu && _bittest(&v5, v6) )
            v8 = v7 & a2[3] & 0xFFFFFFF;
          else
            v8 = v7 & (a2[3] & 0xEFFFFFF | 0x1000000);
          *((_DWORD *)v4 + 1) = v8;
        }
        ++v3;
        v4 += *((unsigned __int16 *)v4 + 1);
      }
      while ( v3 < *(unsigned __int16 *)(a1 + 4) );
    }
  }
}
