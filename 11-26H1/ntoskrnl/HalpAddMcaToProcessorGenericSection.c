/*
 * XREFs of HalpAddMcaToProcessorGenericSection @ 0x14044C430
 * Callers:
 *     HalpCreateMcaProcessorErrorRecord @ 0x14044A8B4 (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x14044C5C8 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAddMcaToProcessorGenericSection(__int64 a1, __int64 *a2)
{
  int v2; // r8d
  char *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // r11
  char v9; // al
  int v10; // r8d
  __int64 v11; // rcx

  v2 = *(unsigned __int16 *)(a1 + 40);
  if ( v2 == 1 || (unsigned __int16)(v2 - 2) <= 3u || (_WORD)v2 == 1024 || (v2 & 0xFC00) == 0x400 && (v2 & 0x3FF) != 0 )
  {
    v6 = *a2 | 4;
    *((_BYTE *)a2 + 10) = 8;
  }
  else
  {
    v4 = (char *)a2 + 10;
    if ( (v2 & 0xEFFC) == 0xC )
    {
      v5 = *a2;
      *v4 = 1;
LABEL_8:
      *((_BYTE *)a2 + 13) = v2 & 3;
      v6 = v5 | 0x24;
      goto LABEL_24;
    }
    v5 = *a2;
    if ( (v2 & 0xEFF0) == 0x10 )
    {
      *v4 = 2;
      goto LABEL_8;
    }
    if ( (v2 & 0xEF00) == 0x100 )
    {
      v7 = v5 | 0x24;
      v8 = 1;
    }
    else
    {
      v6 = v5 | 4;
      if ( (v2 & 0xE800) != 0x800 )
      {
        *v4 = 0;
        goto LABEL_24;
      }
      v7 = v6 | 0x20;
      v8 = 4;
    }
    v6 = v7 | 8;
    *v4 = v8;
    v9 = v2 & 3;
    v10 = (unsigned __int8)v2 >> 4;
    *((_BYTE *)a2 + 13) = v9;
    switch ( v10 )
    {
      case 3:
        *((_BYTE *)a2 + 11) = 1;
        break;
      case 4:
        *((_BYTE *)a2 + 11) = 2;
        break;
      case 5:
        *((_BYTE *)a2 + 11) = 3;
        break;
      default:
        *((_BYTE *)a2 + 11) = 0;
        break;
    }
  }
LABEL_24:
  v11 = v6 | 0x10;
  *a2 = v11;
  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x39u) )
    *((_BYTE *)a2 + 12) &= 1u;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x3Eu) )
    *((_BYTE *)a2 + 12) &= 4u;
  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x3Du) )
    *((_BYTE *)a2 + 12) &= 8u;
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *a2 = v11 | 0x1000;
    a2[23] = *(_QWORD *)(a1 + 28);
  }
  return 0LL;
}
