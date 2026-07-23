/*
 * XREFs of RtlSidDominates @ 0x14040CB40
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SepAdjustPrivileges @ 0x1409E1914 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v3; // r9d
  int v7; // eax
  __int16 v9; // si
  __int16 v10; // bp
  int v11; // eax
  char v12; // cl
  BOOLEAN v13; // al
  unsigned int v14; // edx

  v3 = *(_DWORD *)((char *)Sid1 + 2);
  *Dominates = 0;
  if ( !v3 )
    v3 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v3 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v9 = HIBYTE(*(_WORD *)Sid2);
  v10 = HIBYTE(*(_WORD *)Sid1);
  if ( *(_WORD *)Sid1 == *(_WORD *)Sid2 )
  {
    v11 = memcmp(Sid1, Sid2, 4LL * (unsigned __int8)HIBYTE(*(_WORD *)Sid1) + 8);
    v12 = v9;
    if ( !v11 )
      goto LABEL_10;
  }
  else
  {
    v12 = HIBYTE(*(_WORD *)Sid2);
  }
  if ( (_BYTE)v10 )
    v14 = *((_DWORD *)Sid1 + (unsigned int)(unsigned __int8)v10 + 1);
  else
    v14 = 0;
  if ( v12 && v14 < *((_DWORD *)Sid2 + (unsigned int)(unsigned __int8)v9 + 1) )
  {
    v13 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v13 = 1;
LABEL_11:
  *Dominates = v13;
  return 0;
}
