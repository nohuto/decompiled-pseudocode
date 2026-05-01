/*
 * XREFs of ?IsHolographicOOBE@@YA_NXZ @ 0x1800EA46C
 * Callers:
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800EBAA0 (-IsAnyOOBE@@YA_NXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

char IsHolographicOOBE(void)
{
  char v0; // bl
  unsigned int v1; // r9d
  int v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v3, 0LL);
  if ( v3 == 10 )
  {
    v4 = 0;
    if ( (int)SHRegGetBOOLWithREGSAM(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
                L"Completed",
                v1,
                &v4) < 0
      || !v4 )
    {
      return 1;
    }
  }
  return v0;
}
