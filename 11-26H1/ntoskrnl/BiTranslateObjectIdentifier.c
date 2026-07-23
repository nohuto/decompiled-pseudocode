/*
 * XREFs of BiTranslateObjectIdentifier @ 0x140B27348
 * Callers:
 *     BiHandleFirmwareDefaultEntry @ 0x14089A308 (BiHandleFirmwareDefaultEntry.c)
 *     BiTranslateDisplayOrder @ 0x140B272BC (BiTranslateDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 * Callees:
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

__int64 __fastcall BiTranslateObjectIdentifier(__int64 **a1, _QWORD *a2, _DWORD *a3)
{
  __int64 *v3; // r9
  unsigned int v6; // r10d
  int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // r8

  v3 = *a1;
  v6 = 0;
  while ( 1 )
  {
    if ( v3 == (__int64 *)a1 )
      return (unsigned int)-1073741275;
    v7 = *((_DWORD *)v3 + 12);
    if ( (v7 & 4) != 0 )
    {
      v8 = *a2 - v3[2];
      if ( *a2 == v3[2] )
        v8 = a2[1] - v3[3];
      if ( !v8 )
        break;
    }
    v3 = (__int64 *)*v3;
  }
  if ( (v7 & 3) == 0 )
    return (unsigned int)-1073741275;
  v9 = *((unsigned int *)v3 + 8);
  if ( (v7 & 0x10) != 0 )
  {
    BiLogMessage(3LL, L"Translated a DontSync object to ID 0x%x", v9);
    return (unsigned int)-1073741788;
  }
  else
  {
    *a3 = v9;
  }
  return v6;
}
