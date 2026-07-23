/*
 * XREFs of PspQueryForwardersEnabled @ 0x1407F6440
 * Callers:
 *     PsBootPhaseComplete @ 0x1407F3820 (PsBootPhaseComplete.c)
 *     PspSiloLoadApiSets @ 0x1407F557C (PspSiloLoadApiSets.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

char PspQueryForwardersEnabled()
{
  char v0; // bl
  ULONG v2; // [rsp+20h] [rbp-88h]
  int v3[4]; // [rsp+30h] [rbp-78h] BYREF
  const wchar_t *v4; // [rsp+40h] [rbp-68h]
  int *v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+50h] [rbp-58h]
  int v7; // [rsp+B0h] [rbp+8h] BYREF

  v7 = 0;
  memset_0(v3, 0, 0x70uLL);
  v3[2] = 292;
  v4 = L"OCFW_Enabled";
  v6 = 0x4000000;
  v0 = 1;
  v5 = &v7;
  if ( (int)RtlpQueryRegistryValues(
              0,
              (int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\OneCore",
              (int)v3,
              0,
              v2,
              1) < 0
    || !v7 )
  {
    return 0;
  }
  return v0;
}
