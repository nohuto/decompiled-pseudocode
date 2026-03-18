/*
 * XREFs of MiMapWorkingSetTypeToVm @ 0x14039F9F0
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14039FB18 (MiPfCompleteInPageSupport.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C9E74 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiMapWorkingSetTypeToVm(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_140E3D500;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_140E37080;
  v3 = v2 - 1;
  if ( !v3 )
    return &unk_140E36E00;
  v4 = v3 - 1;
  if ( !v4 )
    return &unk_140E36F40;
  v6 = v4 - 2;
  if ( !v6 )
    return &unk_140E37300;
  if ( v6 == 3 )
    return &unk_140E376C0;
  return 0LL;
}
