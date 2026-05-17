/*
 * XREFs of RtlSidDominates @ 0x1800CBD30
 * Callers:
 *     RtlpValidLabelSubjectContext @ 0x18005B27C (RtlpValidLabelSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(char *Buf1, char *Buf2, _BYTE *a3)
{
  int v4; // r9d
  int v7; // eax
  __int16 v9; // bx
  __int16 v10; // bp
  char v11; // cl
  unsigned int v12; // edx
  int v13; // eax

  *a3 = 0;
  v4 = *(_DWORD *)(Buf1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Buf1 + 3) - 4096;
  if ( v4 )
    return 3221225485LL;
  v7 = *(_DWORD *)(Buf2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Buf2 + 3) - 4096;
  if ( v7 )
    return 3221225485LL;
  v9 = HIBYTE(*(_WORD *)Buf2);
  v10 = HIBYTE(*(_WORD *)Buf1);
  if ( *(_WORD *)Buf1 == *(_WORD *)Buf2 )
  {
    v13 = memcmp(Buf1, Buf2, 4LL * (unsigned __int8)v10 + 8);
    v11 = v9;
    if ( !v13 )
      goto LABEL_16;
  }
  else
  {
    v11 = HIBYTE(*(_WORD *)Buf2);
  }
  if ( (_BYTE)v10 )
    v12 = *(_DWORD *)&Buf1[4 * (unsigned __int8)v10 + 4];
  else
    v12 = 0;
  if ( v11 && v12 < *(_DWORD *)&Buf2[4 * (unsigned __int8)v9 + 4] )
  {
    *a3 = 0;
    return 0LL;
  }
LABEL_16:
  *a3 = 1;
  return 0LL;
}
