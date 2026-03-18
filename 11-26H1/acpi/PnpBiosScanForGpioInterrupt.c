/*
 * XREFs of PnpBiosScanForGpioInterrupt @ 0x140051948
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1400518C0 (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForGpioInterrupt(char *a1, unsigned int a2)
{
  char *v2; // r9
  char *v3; // r10
  char v4; // r8
  char *v5; // r11
  unsigned __int16 v6; // cx

  v2 = a1;
  if ( a2 >= 0x18 )
  {
    v3 = a1;
    while ( 1 )
    {
      v4 = *a1;
      v5 = v3;
      if ( *a1 < 0 )
      {
        v6 = *(_WORD *)(v3 + 1) + 3;
      }
      else
      {
        v6 = (v4 & 7) + 1;
        v4 &= 0x78u;
      }
      if ( v4 == 120 )
        break;
      a1 = &v3[v6];
      v3 = a1;
      if ( a1 >= &v2[a2] )
        break;
      if ( v4 == -116 && !v5[4] )
        return 1;
    }
  }
  return 0;
}
