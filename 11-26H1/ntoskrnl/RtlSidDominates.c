/*
 * XREFs of RtlSidDominates @ 0x140418530
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SepAdjustPrivileges @ 0x140A429A4 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(char *Buf1, char *Buf2, char *a3)
{
  int v3; // r9d
  int v7; // eax
  __int16 v9; // si
  __int16 v10; // bp
  int v11; // eax
  char v12; // cl
  char v13; // al
  unsigned int v14; // edx

  v3 = *(_DWORD *)(Buf1 + 2);
  *a3 = 0;
  if ( !v3 )
    v3 = *((unsigned __int16 *)Buf1 + 3) - 4096;
  if ( v3 )
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
    v11 = memcmp(Buf1, Buf2, 4LL * (unsigned __int8)HIBYTE(*(_WORD *)Buf1) + 8);
    v12 = v9;
    if ( !v11 )
      goto LABEL_10;
  }
  else
  {
    v12 = HIBYTE(*(_WORD *)Buf2);
  }
  if ( (_BYTE)v10 )
    v14 = *(_DWORD *)&Buf1[4 * (unsigned __int8)v10 + 4];
  else
    v14 = 0;
  if ( v12 && v14 < *(_DWORD *)&Buf2[4 * (unsigned __int8)v9 + 4] )
  {
    v13 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v13 = 1;
LABEL_11:
  *a3 = v13;
  return 0LL;
}
