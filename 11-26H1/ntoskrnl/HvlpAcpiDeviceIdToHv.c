/*
 * XREFs of HvlpAcpiDeviceIdToHv @ 0x1405C0F94
 * Callers:
 *     HvlGetDeviceCapabilities @ 0x1405BF220 (HvlGetDeviceCapabilities.c)
 *     HvlRegisterDeviceId @ 0x1405C05C0 (HvlRegisterDeviceId.c)
 * Callees:
 *     strncpy_s @ 0x14053EC50 (strncpy_s.c)
 */

errno_t __fastcall HvlpAcpiDeviceIdToHv(__int64 a1, _QWORD *a2, char *a3, unsigned int a4)
{
  rsize_t v5; // rax
  rsize_t v6; // r9
  const char *v7; // r8

  v5 = a4;
  v6 = -1LL;
  *a2 = 0xC000000000000000uLL;
  v7 = *(const char **)(a1 + 8);
  do
    ++v6;
  while ( v7[v6] );
  return strncpy_s(a3, v5, v7, v6);
}
