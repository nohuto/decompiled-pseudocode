/*
 * XREFs of FsRtlDoesDbcsContainWildCards @ 0x140A66680
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x140A66410 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlDoesDbcsContainWildCards(PANSI_STRING Name)
{
  __int64 v1; // rax
  __int64 v2; // r9

  v1 = 0LL;
  while ( (unsigned int)v1 < Name->Length )
  {
    v2 = Name->Buffer[v1];
    if ( (unsigned __int8)v2 >= 0x80u
      && (_BYTE)NlsMbOemCodePageTag
      && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v2) )
    {
      v1 = (unsigned int)(v1 + 2);
    }
    else
    {
      if ( (v2 & 0x80u) == 0LL && (*((_BYTE *)qword_140017650 + v2) & 8) != 0 )
        return 1;
      v1 = (unsigned int)(v1 + 1);
    }
  }
  return 0;
}
