/*
 * XREFs of ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140097D48
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C16AC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DL @ 0x140070860 (WPP_RECORDER_SF_DL_ea_140070860.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  unsigned __int8 *v4; // r14
  unsigned int NumAddresses; // r9d
  unsigned int v7; // ebx
  unsigned int i; // r8d
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // ebp
  int v13; // esi
  unsigned int v14; // edx
  _ETH_MULTICAST_WRAPPER *OldMCastAddressBuf; // r8
  __int64 v16; // r12

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      13,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      (char)a1);
  }
  NumAddresses = a1->NumAddresses;
  v7 = 0;
  *a3 = 1;
  for ( i = 0; i < NumAddresses; ++i )
  {
    MCastAddressBuf = a1->MCastAddressBuf;
    if ( *(_DWORD *)&MCastAddressBuf[i].MCastAddress[2] == *(_DWORD *)(v4 + 2)
      && *(_WORD *)MCastAddressBuf[i].MCastAddress == *(_WORD *)v4 )
    {
      ++MCastAddressBuf[i].RefCount;
      goto LABEL_24;
    }
  }
  v10 = a1->NumAddresses;
  if ( (unsigned int)(v10 + 1) <= a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * v10);
    v11 = a1->NumAddresses;
    v12 = 0;
    a1->OldNumAddresses = v11;
    v13 = 1;
    a1->NumAddresses = v11 + 1;
    if ( v11 )
    {
      v14 = *(_DWORD *)(v4 + 2);
      OldMCastAddressBuf = a1->OldMCastAddressBuf;
      while ( *(_DWORD *)&OldMCastAddressBuf[v12].MCastAddress[2] <= v14 )
      {
        if ( *(_DWORD *)&OldMCastAddressBuf[v12].MCastAddress[2] >= v14 )
        {
          if ( *(_WORD *)OldMCastAddressBuf[v12].MCastAddress > *(_WORD *)v4 )
            break;
          v13 = -(*(_WORD *)OldMCastAddressBuf[v12].MCastAddress < *(_WORD *)v4);
        }
        else
        {
          v13 = -1;
        }
        if ( ++v12 >= v11 )
          goto LABEL_21;
      }
      v13 = 1;
    }
LABEL_21:
    v16 = v12;
    memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, v16 * 12);
    memmove(a1->MCastAddressBuf[v16].MCastAddress, v4, 6uLL);
    a1->MCastAddressBuf[v16].RefCount = 1;
    if ( v13 > 0 )
      memmove(&a1->MCastAddressBuf[v12 + 1], &a1->OldMCastAddressBuf[v16], 12LL * (a1->OldNumAddresses - v12));
    *a3 = 0;
  }
  else
  {
    v7 = -1073676279;
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      *a3,
      v7);
  return v7;
}
