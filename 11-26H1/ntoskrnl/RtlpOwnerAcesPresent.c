/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1403AF640
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned int v4; // ebp
  char *v5; // rbx
  unsigned int i; // edi
  unsigned __int8 v7; // si
  unsigned __int8 v8; // cl
  char *v9; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( a2 )
  {
    v4 = *(unsigned __int16 *)(a2 + 4);
    v5 = (char *)(a2 + 8);
    for ( i = 0; ; ++i )
    {
      if ( i >= v4 )
        return 0;
      v7 = v5[1];
      if ( (v7 & 8) == 0 )
        break;
LABEL_14:
      v5 += *((unsigned __int16 *)v5 + 1);
    }
    v8 = *v5;
    if ( ((unsigned __int8)*v5 < 5u || v8 > 8u) && (unsigned __int8)(v8 - 11) > 1u )
    {
      if ( v8 < 0xFu )
      {
        if ( v8 == 4 )
        {
          v9 = v5 + 12;
          goto LABEL_11;
        }
        if ( v8 < 0xBu )
        {
LABEL_10:
          v9 = v5 + 8;
LABEL_11:
          if ( v9
            && *(_WORD *)v9 == *SeOwnerRightsSid
            && !memcmp(v9, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v9 >> 8) + 8)
            && (!a1 || (v7 & a1) != 0) )
          {
            return 1;
          }
          goto LABEL_14;
        }
LABEL_24:
        if ( (unsigned __int8)(v8 - 13) > 1u )
          goto LABEL_14;
        goto LABEL_10;
      }
      if ( v8 > 0x10u )
        goto LABEL_24;
    }
    v9 = &v5[16 * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC)];
    goto LABEL_11;
  }
  return 0;
}
