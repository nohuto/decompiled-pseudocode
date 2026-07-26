/*
 * XREFs of ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140097F74
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C16AC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DL @ 0x140070860 (WPP_RECORDER_SF_DL_ea_140070860.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ethDeleteOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  unsigned __int8 *v4; // r12
  __int64 NumAddresses; // r8
  const void **p_MCastAddressBuf; // rsi
  __int64 v8; // rbx
  unsigned int v9; // ebp
  _WORD *v10; // rdx
  __int64 v11; // r14
  int v12; // r9d
  unsigned int v13; // eax
  size_t v14; // r14
  unsigned int OldNumAddresses; // ecx
  unsigned int v17; // eax
  char v18[4]; // [rsp+30h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      11,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      (char)a1);
  }
  NumAddresses = a1->NumAddresses;
  p_MCastAddressBuf = (const void **)&a1->MCastAddressBuf;
  v8 = 0LL;
  *a3 = 1;
  v9 = 0;
  if ( (_DWORD)NumAddresses )
  {
    v10 = *p_MCastAddressBuf;
    while ( 1 )
    {
      v11 = (unsigned int)v8;
      if ( *(_DWORD *)&v10[6 * v8 + 3] == *(_DWORD *)(v4 + 2) && v10[6 * v8 + 2] == *(_WORD *)v4 )
        break;
      v8 = (unsigned int)(v8 + 1);
      v9 = v8;
      if ( (unsigned int)v8 >= (unsigned int)NumAddresses )
        goto LABEL_8;
    }
    v17 = *(_DWORD *)&v10[6 * v8];
    v12 = 0;
    if ( v17 > 1 )
    {
      *(_DWORD *)&v10[6 * v8] = v17 - 1;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v8) = v9;
    v12 = 1;
    v11 = v9;
  }
  if ( (_DWORD)v8 != (_DWORD)NumAddresses || !v12 )
  {
    memmove(a1->OldMCastAddressBuf, *p_MCastAddressBuf, 12 * NumAddresses);
    v13 = a1->NumAddresses;
    a1->OldNumAddresses = v13--;
    a1->NumAddresses = v13;
    if ( v13 )
    {
      v14 = 12 * v11;
      memmove((void *)*p_MCastAddressBuf, a1->OldMCastAddressBuf, v14);
      OldNumAddresses = a1->OldNumAddresses;
      if ( (unsigned int)v8 < OldNumAddresses - 1 )
        memmove(
          (char *)*p_MCastAddressBuf + v14,
          &a1->OldMCastAddressBuf[(unsigned int)(v8 + 1)],
          12LL * (OldNumAddresses + ~v9));
    }
    *a3 = 0;
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = 0;
    WPP_RECORDER_SF_DL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      *a3,
      *(_DWORD *)v18);
  }
  return 0LL;
}
