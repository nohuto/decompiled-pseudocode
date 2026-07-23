/*
 * XREFs of HalpDmaCheckAdapterToken @ 0x14057C840
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14057C928 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpDmaInsertDeviceObjectByToken @ 0x14057CAB4 (HalpDmaInsertDeviceObjectByToken.c)
 */

__int64 __fastcall HalpDmaCheckAdapterToken(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  int inserted; // eax

  LOBYTE(a3) = 1;
  v5 = 0;
  if ( !HalpDmaFindDeviceObjectByToken(a1, 0LL, a3) )
  {
    LOBYTE(v4) = 1;
    inserted = HalpDmaInsertDeviceObjectByToken(a1, 0LL, v4);
    if ( inserted >= 0 )
      return (unsigned int)-1073741275;
    return (unsigned int)inserted;
  }
  return v5;
}
