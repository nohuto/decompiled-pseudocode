/*
 * XREFs of RtlpIsDuplicateAce @ 0x18004C270
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x18004AF80 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownObjectAces @ 0x18004C4E0 (RtlpCompareKnownObjectAces.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
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
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char v14; // al
  unsigned __int8 v16; // cl
  int v17; // eax

  if ( *a2 <= 8u && *a2 != 4 )
  {
    v4 = a2[1];
    if ( (v4 & 0x10) != 0 )
    {
      v5 = 0;
      v6 = 0;
      v7 = (unsigned __int8 *)(a1 + 8);
      v8 = *((_DWORD *)a2 + 1);
      if ( (v4 & 2) == 0 )
        v8 = 0;
      v9 = *((_DWORD *)a2 + 1);
      if ( (v4 & 1) == 0 )
        v9 = 0;
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
            v12 = *a2;
            if ( (unsigned __int8)v10 >= 5u )
            {
              if ( (unsigned __int8)(v12 - 5) > 3u )
                goto LABEL_21;
              v14 = RtlpCompareKnownObjectAces(v7, a2);
            }
            else
            {
              if ( (unsigned __int8)(v12 - 5) <= 3u )
                goto LABEL_21;
              v14 = 0;
              if ( RtlBaseAceType[v12] == RtlBaseAceType[v10]
                && (!RtlIsSystemAceType[v12] || ((a2[1] ^ v11) & 0xC0) == 0) )
              {
                v13 = *((unsigned __int16 *)a2 + 4);
                if ( (_WORD)v13 == *((_WORD *)v7 + 4) && !memcmp(a2 + 8, v7 + 8, 4 * (v13 >> 8) + 8) )
                  v14 = 1;
              }
            }
            if ( v14 )
            {
              v16 = v7[1];
              v17 = ~*((_DWORD *)v7 + 1);
              if ( (v16 & 2) != 0 )
                v8 &= v17;
              if ( (v16 & 1) != 0 )
                v9 &= v17;
              if ( (v16 & 8) == 0 )
                v6 &= v17;
              if ( !(v8 | v9 | v6) )
                return 1;
            }
          }
        }
LABEL_21:
        ++v5;
        v7 += *((unsigned __int16 *)v7 + 1);
      }
    }
  }
  return 0;
}
