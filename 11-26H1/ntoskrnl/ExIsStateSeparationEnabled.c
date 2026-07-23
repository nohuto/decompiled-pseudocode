/*
 * XREFs of ExIsStateSeparationEnabled @ 0x14083D924
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExIsStateSeparationEnabled(bool *a1)
{
  int RegistryValues; // eax
  unsigned int v3; // ecx
  ULONG v5; // [rsp+20h] [rbp-88h]
  int v6[4]; // [rsp+30h] [rbp-78h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-68h]
  int *v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+B0h] [rbp+8h] BYREF

  *a1 = 0;
  v10 = 0;
  memset_0(v6, 0, 0x70uLL);
  v6[2] = 292;
  v9 = 67108868;
  v7 = L"Enabled";
  v8 = &v10;
  RegistryValues = RtlpQueryRegistryValues(2, (int)L"StateSeparation\\Policy", (int)v6, 0, v5, 1);
  v3 = RegistryValues;
  if ( RegistryValues >= 0 )
    goto LABEL_4;
  if ( RegistryValues == -1073741772 )
  {
    v3 = 0;
LABEL_4:
    *a1 = v10 != 0;
  }
  return v3;
}
