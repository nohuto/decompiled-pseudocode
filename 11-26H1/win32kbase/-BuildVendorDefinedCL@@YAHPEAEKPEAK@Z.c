/*
 * XREFs of ?BuildVendorDefinedCL@@YAHPEAEKPEAK@Z @ 0x14020A5D8
 * Callers:
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x140209BAC (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildVendorDefinedCL(unsigned __int8 *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d

  v3 = *a3;
  v4 = 0;
  if ( (int)v3 + 4 < a2 )
  {
    a1[v3] = 9;
    a1[(unsigned int)(v3 + 1)] = 127;
    *a3 = v3 + 2;
    return 1;
  }
  return v4;
}
