/*
 * XREFs of MiMapWorkingSetTypeToVm @ 0x1403A1750
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1403A1878 (MiPfCompleteInPageSupport.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C38A4 (MmQuerySystemWorkingSetInformation.c)
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
    return &unk_140E3D680;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_140E37200;
  v3 = v2 - 1;
  if ( !v3 )
    return &unk_140E36F80;
  v4 = v3 - 1;
  if ( !v4 )
    return &unk_140E370C0;
  v6 = v4 - 2;
  if ( !v6 )
    return &unk_140E37480;
  if ( v6 == 3 )
    return &unk_140E37840;
  return 0LL;
}
