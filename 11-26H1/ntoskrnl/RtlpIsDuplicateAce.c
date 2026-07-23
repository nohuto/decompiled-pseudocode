/*
 * XREFs of RtlpIsDuplicateAce @ 0x1408EB4E0
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1408EB060 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlpCompareKnownObjectAces @ 0x14077D67C (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // cl
  int v5; // ebx
  int v6; // ebp
  unsigned __int8 *v7; // rdi
  int v8; // r12d
  int v9; // r15d
  __int64 v10; // rcx
  unsigned __int8 v11; // r9
  __int64 v13; // rdx
  bool v14; // al
  unsigned __int8 v15; // cl
  int v16; // eax

  if ( *a2 != 4 && *a2 <= 8u )
  {
    v4 = a2[1];
    if ( (v4 & 0x10) != 0 )
    {
      v5 = 0;
      v6 = 0;
      v7 = (unsigned __int8 *)(a1 + 8);
      v8 = *((_DWORD *)a2 + 1);
      v9 = v8;
      if ( (v4 & 2) == 0 )
        v9 = 0;
      if ( (v4 & 1) == 0 )
        v8 = 0;
      if ( (v4 & 8) == 0 )
        v6 = *((_DWORD *)a2 + 1);
      while ( 1 )
      {
        if ( v5 >= *(unsigned __int16 *)(a1 + 4) - 1 )
          return 0;
        v10 = *v7;
        if ( (unsigned __int8)v10 <= 8u && (_BYTE)v10 != 4 )
        {
          v11 = v7[1];
          if ( (v11 & 0x10) != 0 )
          {
            v13 = *a2;
            if ( (unsigned __int8)v10 >= 5u )
            {
              if ( (unsigned __int8)(v13 - 5) > 3u )
                goto LABEL_14;
              v14 = RtlpCompareKnownObjectAces(v7, a2);
            }
            else
            {
              if ( (unsigned __int8)(v13 - 5) <= 3u )
                goto LABEL_14;
              v14 = *((_BYTE *)RtlBaseAceType + v13) == *((_BYTE *)RtlBaseAceType + v10)
                 && (!*((_BYTE *)RtlIsSystemAceType + v13) || ((a2[1] ^ v11) & 0xC0) == 0)
                 && RtlEqualSid(a2 + 8, v7 + 8) != 0;
            }
            if ( v14 )
            {
              v15 = v7[1];
              v16 = ~*((_DWORD *)v7 + 1);
              if ( (v15 & 2) != 0 )
                v9 &= v16;
              if ( (v15 & 1) != 0 )
                v8 &= v16;
              if ( (v15 & 8) == 0 )
                v6 &= v16;
              if ( !(v9 | v8 | v6) )
                return 1;
            }
          }
        }
LABEL_14:
        ++v5;
        v7 += *((unsigned __int16 *)v7 + 1);
      }
    }
  }
  return 0;
}
