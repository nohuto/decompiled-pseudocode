/*
 * XREFs of ViValidateTriageRules @ 0x140CE6078
 * Callers:
 *     VfTriageSystem @ 0x140CE5AC8 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 */

__int64 __fastcall ViValidateTriageRules(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  unsigned __int64 v3; // r9

  v2 = a1;
  v3 = (unsigned __int64)a1 + a2;
  while ( (unsigned __int64)v2 < v3 )
  {
    if ( (*v2 & 0x70000) == 0 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: found zeroed rule during validation.\n");
      return 1LL;
    }
    v2 = (_DWORD *)((char *)v2 + ((unsigned __int64)(unsigned int)*v2 >> 19) + 8);
    if ( (unsigned __int64)v2 > v3 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: invalid rules structure! \n");
      return 0LL;
    }
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: rules are ok.\n");
  return 1LL;
}
