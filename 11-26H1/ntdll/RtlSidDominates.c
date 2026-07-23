/*
 * XREFs of RtlSidDominates @ 0x1800C94A0
 * Callers:
 *     RtlpValidLabelSubjectContext @ 0x1800457FC (RtlpValidLabelSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  __int16 v9; // bx
  __int16 v10; // bp
  char v11; // cl
  unsigned int v12; // edx
  int v13; // eax

  *Dominates = 0;
  v4 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v4 )
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
    v13 = memcmp(Sid1, Sid2, 4LL * (unsigned __int8)v10 + 8);
    v11 = v9;
    if ( !v13 )
      goto LABEL_16;
  }
  else
  {
    v11 = HIBYTE(*(_WORD *)Sid2);
  }
  if ( (_BYTE)v10 )
    v12 = *((_DWORD *)Sid1 + (unsigned int)(unsigned __int8)v10 + 1);
  else
    v12 = 0;
  if ( v11 && v12 < *((_DWORD *)Sid2 + (unsigned int)(unsigned __int8)v9 + 1) )
  {
    *Dominates = 0;
    return 0;
  }
LABEL_16:
  *Dominates = 1;
  return 0;
}
