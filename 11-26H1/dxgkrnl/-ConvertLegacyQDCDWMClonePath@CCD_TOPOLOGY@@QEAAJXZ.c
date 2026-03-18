/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318FCC
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1403D7540 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000C890 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000D0FC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x140317AD8 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x14031FD8C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  unsigned int v2; // edi
  unsigned int v3; // r15d
  DXGADAPTERSOURCEHASH *v4; // r12
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v6; // rsi
  int v7; // ebx
  unsigned int i; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v9; // rax
  const struct _LUID *v10; // r15
  unsigned int v11; // esi
  const struct _LUID *v12; // r10
  unsigned int j; // r12d
  int PreferredVidPnSourceList; // eax
  __int64 v15; // r12
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rax
  unsigned int m; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int HighPart; // ebx
  unsigned int v25; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-99h]
  __int64 v28; // [rsp+28h] [rbp-91h]
  __int64 v29; // [rsp+28h] [rbp-91h]
  __int64 LowPart; // [rsp+30h] [rbp-89h]
  unsigned int v31; // [rsp+50h] [rbp-69h] BYREF
  int AdapterAndSourceForHash; // [rsp+54h] [rbp-65h]
  struct _LUID v33; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v34[16]; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v35[16]; // [rsp+A0h] [rbp-19h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1400);
  while ( v3 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v6 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      v7 = *((_DWORD *)PathDescriptor + 7);
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v4) & v7) != 0 )
      {
        HighPart = v6[3].HighPart;
        v33 = 0LL;
        v31 = 0;
        v25 = HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(v4);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v4, v25, &v33, &v31);
        if ( AdapterAndSourceForHash < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4118;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed info for hash (0x%lx)",
            v25,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v6[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v4);
        v6[3].LowPart = v31;
        v6[2] = v33;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    ++v3;
  }
  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++i )
  {
    v9 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v10 = (const struct _LUID *)v9;
    if ( (*(_QWORD *)v9 & 0x4000000000000LL) != 0 )
    {
      v11 = 0;
      v12 = (const struct _LUID *)((char *)v9 + 16);
      for ( j = i; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
      {
        v19 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        v12 = v10 + 2;
        v20 = v19;
        if ( v10[2].LowPart == *((_DWORD *)v19 + 4) && v10[2].HighPart == *((_DWORD *)v19 + 5) )
        {
          if ( v11 >= 0x10 )
          {
            WdLogSingleEntry4(2LL, v11, v10[2].HighPart, v10[2].LowPart, -1073741811LL);
            LowPart = v10[2].LowPart;
            v29 = v10[2].HighPart;
            WdLogGlobalForLineNumber = 4177;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Total paths (0x%I64x) from adapter 0x%I64x%08I64x is larger than D3DKMDT_MAX_VIDPN_SOURCES, returning 0x%I64x.",
              v11,
              v29,
              LowPart,
              -1073741811LL,
              0LL);
            return 3221225485LL;
          }
          if ( !*((_BYTE *)v19 + 129) || _bittest64((const signed __int64 *)v19 + 1, 0x2Du) )
            v21 = *((_DWORD *)v19 + 6);
          else
            v21 = -1;
          v22 = v11++;
          v35[v22] = v21;
          v34[v22] = *((_DWORD *)v20 + 7);
        }
      }
      PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList(v12, v11, (char *)v34, (char *)v35);
      v15 = PreferredVidPnSourceList;
      if ( PreferredVidPnSourceList < 0 )
      {
        WdLogSingleEntry3(2LL, v10[2].HighPart, v10[2].LowPart, PreferredVidPnSourceList);
        v28 = v10[2].LowPart;
        v27 = v10[2].HighPart;
        WdLogGlobalForLineNumber = 4217;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get the preferred VidPn source list for adapter 0x%I64x%08I64x, Status = 0x%I64x",
          v27,
          v28,
          v15,
          0LL,
          0LL);
        return (unsigned int)v15;
      }
      for ( k = i; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
      {
        v17 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( v10[2].LowPart == *((_DWORD *)v17 + 4) && v10[2].HighPart == *((_DWORD *)v17 + 5) )
        {
          for ( m = 0; m < v11; ++m )
          {
            if ( v34[m] == *((_DWORD *)v17 + 7) )
            {
              *((_DWORD *)v17 + 6) = v35[m];
              break;
            }
          }
          *(_QWORD *)v17 &= ~0x4000000000000uLL;
        }
      }
    }
  }
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    do
    {
      v26 = CCD_TOPOLOGY::GetPathDescriptor(this, v2++);
      *(_QWORD *)v26 |= 0x4000000000000uLL;
    }
    while ( v2 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
  }
  return 0LL;
}
