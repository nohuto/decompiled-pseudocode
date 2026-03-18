/*
 * XREFs of RtlOwnerAcesPresent @ 0x14041A340
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

char __fastcall RtlOwnerAcesPresent(__int64 a1)
{
  _WORD *SeOwnerRightsSid; // rbp
  char *v2; // rbx
  unsigned int v3; // esi
  unsigned int i; // edi
  unsigned __int8 v5; // cl
  char *v6; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( a1 )
  {
    v2 = (char *)(a1 + 8);
    v3 = *(unsigned __int16 *)(a1 + 4);
    for ( i = 0; ; ++i )
    {
      if ( i >= v3 )
        return 0;
      if ( (v2[1] & 8) != 0 )
        goto LABEL_14;
      v5 = *v2;
      if ( (unsigned __int8)*v2 >= 5u && v5 <= 8u || (unsigned __int8)(v5 - 11) <= 1u )
      {
LABEL_21:
        v6 = &v2[16 * (*((_DWORD *)v2 + 2) & 1) + ((8LL * (*((_DWORD *)v2 + 2) & 2)) | 0xC)];
        goto LABEL_11;
      }
      if ( v5 >= 0xFu )
        break;
      if ( v5 == 4 )
      {
        v6 = v2 + 12;
        goto LABEL_11;
      }
      if ( v5 >= 0xBu )
        goto LABEL_23;
LABEL_10:
      v6 = v2 + 8;
LABEL_11:
      if ( v6
        && *(_WORD *)v6 == *SeOwnerRightsSid
        && !memcmp(v6, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 8) + 8) )
      {
        return 1;
      }
LABEL_14:
      v2 += *((unsigned __int16 *)v2 + 1);
    }
    if ( v5 <= 0x10u )
      goto LABEL_21;
LABEL_23:
    if ( (unsigned __int8)(v5 - 13) > 1u )
      goto LABEL_14;
    goto LABEL_10;
  }
  return 0;
}
