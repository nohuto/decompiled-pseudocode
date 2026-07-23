/*
 * XREFs of KeQueryKvaShadowInformation @ 0x14077BA94
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x140CBFCEC (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x1404DF8A8 (KeKvaShadowingActive.c)
 *     KeQueryImplementedPhysicalBits @ 0x1405F9AB0 (KeQueryImplementedPhysicalBits.c)
 *     SpcQueryKvaLeakagePresent @ 0x140722FFC (SpcQueryKvaLeakagePresent.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int ImplementedPhysicalBits; // eax
  char v8; // di
  BOOL v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned int Src; // [rsp+68h] [rbp+20h] BYREF

  Src = 0;
  *a4 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  v8 = 0;
  if ( ImplementedPhysicalBits > 0 )
    v8 = ImplementedPhysicalBits - 1;
  v9 = KiKvaShadow != 0;
  v10 = (unsigned int)SpcQueryKvaLeakagePresent() != 0 ? 8240 : 8224;
  v11 = KeKvaShadowingActive();
  v12 = 0;
  if ( v11 == 2 )
    v12 = 2;
  v13 = v9 | (4 * (KiFlushPcid & 3 | (16 * (v8 & 0x3F | ((KeFeatureBits2 & 1) << 6))))) | v12 | v10;
  Src = v13;
  if ( a3 )
    RtlWriteULongToUser(a1, v13);
  else
    RtlCopyVolatileMemory(a1, &Src, 4uLL);
  return 0LL;
}
