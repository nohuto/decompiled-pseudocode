/*
 * XREFs of PiDevCfgParseVersionString @ 0x1407ACFE8
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x1407AD8E8 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68 (PiDevCfgSplitDriverConfigurationId.c)
 * Callees:
 *     swscanf_s @ 0x14053EE70 (swscanf_s.c)
 */

bool __fastcall PiDevCfgParseVersionString(const wchar_t *a1, int a2, _QWORD *a3)
{
  char v4; // r8
  wchar_t v5; // r9
  const wchar_t *v6; // r11
  int v7; // eax
  __int64 v8; // rax
  const wchar_t *v9; // r11
  int v10; // edx
  int v11; // edx
  bool v12; // zf

  v4 = 0;
  if ( !a2 )
  {
    v5 = *a1;
    a2 = 1;
    v6 = a1;
    if ( !*a1 )
      return v4;
    do
    {
      v12 = v5 == 46;
      v7 = a2 + 1;
      v5 = *++v6;
      if ( !v12 )
        v7 = a2;
      a2 = v7;
    }
    while ( v5 );
  }
  v8 = (unsigned int)(a2 - 2);
  if ( (unsigned int)v8 <= 2 )
  {
    v9 = off_140BE0680[v8];
    *a3 = 0LL;
    v10 = a2 - 2;
    if ( !v10 )
      return swscanf_s(a1, v9, (char *)a3 + 6, (char *)a3 + 4) == 2;
    v11 = v10 - 1;
    if ( !v11 )
      return swscanf_s(a1, v9, (char *)a3 + 6, (char *)a3 + 4, (char *)a3 + 2) == 3;
    if ( v11 == 1 )
      return swscanf_s(a1, v9, (char *)a3 + 6, (char *)a3 + 4, (char *)a3 + 2, a3) == 4;
  }
  return v4;
}
