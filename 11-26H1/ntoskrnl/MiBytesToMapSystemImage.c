/*
 * XREFs of MiBytesToMapSystemImage @ 0x140AC99D8
 * Callers:
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiBytesToMapSystemImage(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (unsigned int)(HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget)) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = v2 + (unsigned int)(*(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[72] << 12);
  if ( result < a1 )
    return 0LL;
  return result;
}
