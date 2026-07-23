/*
 * XREFs of HvlQueryVsmProtectionInfo @ 0x140B54650
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HvlpProcessIommu @ 0x1404E7774 (HvlpProcessIommu.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall HvlQueryVsmProtectionInfo(void *a1, unsigned int a2, char a3, unsigned int *a4)
{
  unsigned int v6; // edi
  unsigned int v8; // ebx
  char v10; // al
  _OWORD v11[3]; // [rsp+28h] [rbp-30h] BYREF
  int Src; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *v13; // [rsp+78h] [rbp+20h]

  v13 = a4;
  v6 = a2;
  v11[0] = 0LL;
  v8 = 0;
  if ( a2 < 3 )
  {
    v8 = -1073741584;
    *a4 = 0;
    return v8;
  }
  if ( a2 >= 4 )
    v6 = 4;
  Src = 0;
  if ( !HvlHypervisorConnected )
    goto LABEL_15;
  if ( (HvlpFlags & 2) == 0 )
  {
    if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu() )
      LOBYTE(Src) = 1;
    BYTE1(Src) = (HvlpFlags & 0x40) != 0;
    goto LABEL_17;
  }
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    HviGetHardwareFeatures((__int64)v11);
    v10 = LOBYTE(v11[0]) >> 7;
    BYTE1(Src) = LOBYTE(v11[0]) >> 7;
  }
  else
  {
LABEL_15:
    v10 = HvlpProcessIommu();
    BYTE1(Src) = 0;
  }
  LOBYTE(Src) = v10;
LABEL_17:
  BYTE2(Src) = (HvlpFlags & 0x20000) != 0;
  HIBYTE(Src) = HIBYTE(HvlpFlags) & 1;
  if ( a3 )
    RtlCopyToUser(a1, &Src, v6);
  else
    RtlCopyVolatileMemory(a1, &Src, v6);
  *a4 = v6;
  return v8;
}
