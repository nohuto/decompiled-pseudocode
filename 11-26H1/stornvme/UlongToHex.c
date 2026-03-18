/*
 * XREFs of UlongToHex @ 0x1400308DC
 * Callers:
 *     GetDynamicRegistrySettings @ 0x14002DC90 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x14002DEA8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x14003020C (GetRegistrySettingsForSpecificKey.c)
 * Callees:
 *     <none>
 */

char __fastcall UlongToHex(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8

  LODWORD(v3) = a3 - 1;
  v4 = a3 - 1;
  if ( (int)v3 >= 0 )
  {
    do
    {
      v3 = a2 & 0xF;
      a2 >>= 4;
      LOBYTE(v3) = a0123456789abcd[v3];
      *(_BYTE *)(a1 + v4--) = v3;
    }
    while ( v4 >= 0 );
  }
  return v3;
}
