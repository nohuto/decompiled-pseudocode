/*
 * XREFs of RtlpGetBootStatusPath @ 0x140619F0C
 * Callers:
 *     PopBootStatSet @ 0x140ACB570 (PopBootStatSet.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140B516E4 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x140619F68 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF47C0 (RtlIsStateSeparationEnabled.c)
 */

__int64 __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  __int64 result; // rax
  char v5; // bl
  const wchar_t *v6; // rcx

  result = RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( (int)result < 0 )
  {
    result = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)result )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  else
  {
    v5 = 1;
  }
  *a2 = v5;
  return result;
}
