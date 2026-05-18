/*
 * XREFs of ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x18000F178
 * Callers:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18000F1F4 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDword(HKEY a1, const unsigned __int16 *const a2, unsigned int *a3)
{
  bool v3; // bl
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  DWORD v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]
  DWORD v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = HIDWORD(a2);
  v3 = 0;
  v9 = 4;
  v6 = 0;
  v7 = 0;
  if ( a1 && !RegQueryValueExW(a1, L"DisableInstrumentationBreaking", 0LL, &v7, (LPBYTE)&v6, &v9) )
  {
    v3 = v7 == 4;
    *a3 = v6;
  }
  return v3;
}
