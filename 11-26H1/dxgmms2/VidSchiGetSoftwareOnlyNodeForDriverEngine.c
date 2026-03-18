/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x140046D68
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400FC140 (VidSchCreateSystemDevices.c)
 *     VidSchCreateContext @ 0x1401188C0 (VidSchCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 88));
}
