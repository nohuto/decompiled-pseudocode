/*
 * XREFs of FsRtlInitializeTunnels @ 0x140CBEE90
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     FsRtlGetTunnelParameterValue @ 0x140790A48 (FsRtlGetTunnelParameterValue.c)
 *     ExInitializePagedLookasideList @ 0x140B33F30 (ExInitializePagedLookasideList.c)
 */

void FsRtlInitializeTunnels()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  if ( (_BYTE)dword_140FBF22C )
    TunnelMaxEntries = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxEntries);
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, (_DWORD *)&ExpPlatformBinaryLock.QuantumTarget + 1);
  if ( !HIDWORD(ExpPlatformBinaryLock.QuantumTarget) )
    TunnelMaxEntries = 0;
  HIDWORD(ExpPlatformBinaryLock.QuantumTarget) *= 10000000;
  if ( (unsigned int)TunnelMaxEntries <= 0xFFFF )
  {
    Depth = (unsigned __int16)TunnelMaxEntries >> 4;
    if ( !((unsigned __int16)TunnelMaxEntries >> 4) )
    {
      if ( !TunnelMaxEntries )
        goto LABEL_12;
      Depth = TunnelMaxEntries + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
  else
  {
    Depth = 256;
  }
LABEL_12:
  ExInitializePagedLookasideList(&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
