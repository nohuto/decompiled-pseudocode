/*
 * XREFs of AcpiPccLinkInterrupt @ 0x1400654F4
 * Callers:
 *     AcpiPccReleaseSubspace @ 0x140064EC0 (AcpiPccReleaseSubspace.c)
 *     AcpiPccRingDoorbell @ 0x140065000 (AcpiPccRingDoorbell.c)
 * Callees:
 *     ACPIPccInterruptQueryGsivState @ 0x140065304 (ACPIPccInterruptQueryGsivState.c)
 */

__int64 __fastcall AcpiPccLinkInterrupt(char *a1)
{
  char v1; // al
  unsigned int v2; // edx
  int v4; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 3;
  v6 = 0LL;
  if ( (v1 == 3 || v1 == 4) && (*((_DWORD *)a1 + 2) & 1) != 0 )
  {
    v4 = *((_DWORD *)a1 + 50);
    if ( v4 )
    {
      if ( *((_QWORD *)a1 + 26) )
      {
        return 1;
      }
      else
      {
        v2 = ACPIPccInterruptQueryGsivState(v4, 3LL, &v6);
        if ( v6 )
          *((_QWORD *)a1 + 26) = *(_QWORD *)(v6 + 72);
      }
    }
  }
  return v2;
}
