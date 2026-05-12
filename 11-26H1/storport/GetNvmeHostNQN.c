/*
 * XREFs of GetNvmeHostNQN @ 0x140075274
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x14007BC80 (StorPortNvmeofExtendedFunction.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     BuildNvmeConnectData @ 0x140118D88 (BuildNvmeConnectData.c)
 *     NvmeAdapterAddAuthenticationKey @ 0x140196CE4 (NvmeAdapterAddAuthenticationKey.c)
 *     NvmeAdapterConnectController @ 0x140197E74 (NvmeAdapterConnectController.c)
 *     NvmeAdapterCreateAuthenticationKey @ 0x140198C38 (NvmeAdapterCreateAuthenticationKey.c)
 *     NvmeAdapterDeleteAuthenticationKey @ 0x1401991D8 (NvmeAdapterDeleteAuthenticationKey.c)
 *     NvmeAdapterGetAuthenticationKeys @ 0x14019A1EC (NvmeAdapterGetAuthenticationKeys.c)
 *     NvmeAdapterGetHostInformation @ 0x14019BCB0 (NvmeAdapterGetHostInformation.c)
 * Callees:
 *     GetNvmeHostName @ 0x1400753A0 (GetNvmeHostName.c)
 *     GetNvmeHostUuid @ 0x14007555C (GetNvmeHostUuid.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall GetNvmeHostNQN(char a1, char *a2)
{
  int NvmeHostUuid; // esi
  size_t v5; // rbx
  __int128 v6; // xmm1
  size_t v7; // rbx
  int v8; // eax
  __int128 v9; // xmm1
  char Src[37]; // [rsp+28h] [rbp-49h] BYREF
  char v12[40]; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v13[2]; // [rsp+78h] [rbp+7h] BYREF
  int v14; // [rsp+98h] [rbp+27h]
  _OWORD v15[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  strcpy(Src, "nqn.1991-05.com.microsoft:nvme.host.");
  strcpy(v12, "nqn.2014-08.org.nvmexpress:uuid:");
  memset_0(a2, 0, 0x100uLL);
  NvmeHostUuid = GetNvmeHostUuid(v13);
  if ( NvmeHostUuid >= 0 )
  {
    NvmeHostUuid = GetNvmeHostName(v15);
    if ( NvmeHostUuid < 0 || a1 )
    {
      NvmeHostUuid = 0;
      v7 = -1LL;
      do
        ++v7;
      while ( v12[v7] );
      memmove(a2, v12, v7);
      v8 = v14;
      v9 = v13[1];
      *(_OWORD *)&a2[v7] = v13[0];
      *(_OWORD *)&a2[v7 + 16] = v9;
      *(_DWORD *)&a2[v7 + 32] = v8;
    }
    else
    {
      v5 = -1LL;
      do
        ++v5;
      while ( Src[v5] );
      memmove(a2, Src, v5);
      v6 = v15[1];
      *(_OWORD *)&a2[v5] = v15[0];
      *(_OWORD *)&a2[v5 + 16] = v6;
    }
  }
  return (unsigned int)NvmeHostUuid;
}
