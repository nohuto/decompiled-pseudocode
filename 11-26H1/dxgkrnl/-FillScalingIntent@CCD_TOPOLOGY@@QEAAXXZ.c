/*
 * XREFs of ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x14037F438
 * Callers:
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026A5DC (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x14033F530 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x14037F530 (EnforceDriverModelScalingPolicy.c)
 */

void __fastcall CCD_TOPOLOGY::FillScalingIntent(CCD_TOPOLOGY *this)
{
  unsigned int i; // edi
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v6; // ecx
  int v7; // eax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_QWORD *)PathDescriptor & 0x10000LL) != 0 )
    {
      v6 = *((_DWORD *)PathDescriptor + 34);
      v7 = *((_DWORD *)PathDescriptor + 35);
      if ( v6 != v7 && (unsigned int)(v7 - 4) <= 1 )
      {
        if ( v6 == 1 )
          DxgkGetAdapterDefaultScaling(
            (struct _LUID *)PathDescriptor + 2,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 35);
        else
          *((_DWORD *)PathDescriptor + 35) = v6;
      }
      EnforceDriverModelScalingPolicy((char *)PathDescriptor + 16, (char *)PathDescriptor + 140);
    }
    else
    {
      if ( (*(_QWORD *)PathDescriptor & 0x40000000000LL) != 0
        && (*((_DWORD *)PathDescriptor + 34) == 2
         || *((_DWORD *)PathDescriptor + 34) == 3
         || (unsigned int)(*((_DWORD *)PathDescriptor + 34) - 4) <= 1) )
      {
        *((_DWORD *)PathDescriptor + 35) = *((_DWORD *)PathDescriptor + 34);
        EnforceDriverModelScalingPolicy((char *)PathDescriptor + 16, (char *)PathDescriptor + 140);
      }
      else
      {
        DxgkGetAdapterDefaultScaling(
          (struct _LUID *)PathDescriptor + 2,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 35);
      }
      *(_QWORD *)PathDescriptor |= 0x10000uLL;
    }
  }
}
