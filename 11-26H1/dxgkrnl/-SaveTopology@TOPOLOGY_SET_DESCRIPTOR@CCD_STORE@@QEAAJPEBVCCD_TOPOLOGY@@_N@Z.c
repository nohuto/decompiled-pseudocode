/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026D888
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1402699A0 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x14004B300 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005CF34 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1403E4610 (_CcdOpenRegistrySubkey.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1403ECF7C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x140403C38 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x140417794 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdWriteRegistryValues @ 0x14041798C (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  unsigned __int16 *v6; // r13
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdi
  NTSTATUS v17; // eax
  int v18; // eax
  int v19; // r12d
  int v20; // eax
  int v21; // edx
  int v22; // eax
  unsigned int BitsPerPixel; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int16 v28; // dx
  unsigned int v30; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-3Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  int v33; // [rsp+40h] [rbp-30h]
  ULONG v34; // [rsp+44h] [rbp-2Ch] BYREF
  int v35; // [rsp+48h] [rbp-28h]
  _DWORD v36[3]; // [rsp+4Ch] [rbp-24h] BYREF
  WCHAR SourceString; // [rsp+58h] [rbp-18h] BYREF

  *(_QWORD *)&v36[1] = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry4(2LL, v3, a2, *((_QWORD *)a2 + 8), 1LL);
    WdLogGlobalForLineNumber = 1610;
    return v4;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v6 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    WdLogSingleEntry4(2LL, *(int *)ModalitySetId, a2, *((_QWORD *)a2 + 8), 1LL);
    WdLogGlobalForLineNumber = 1628;
    return v4;
  }
  Handle = 0LL;
  v7 = 0;
  v33 = -1;
  while ( v7 < v6[16] )
  {
    v31 = 0;
    v30 = 0;
    v8 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v6, v7, &v31, 0LL, &v30);
    if ( v8 < 0 )
    {
      WdLogSingleEntry4(1LL, v8, v7, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1651;
      break;
    }
    if ( *(int *)a2 < 0
      || !*((_WORD *)a2 + 4)
      || ((v9 = *((_QWORD *)a2 + 8)) == 0 ? (v10 = 0) : (v10 = *(_WORD *)(v9 + 20)), v7 >= v10) )
    {
      WdLogSingleEntry4(1LL, -1073741823LL, v7, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1667;
      break;
    }
    v11 = *((_QWORD *)a2 + 7);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 2LL * v7);
    else
      v12 = v7;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v12);
    v15 = v31;
    v16 = (__int64)PathDescriptor;
    if ( v33 != v31 )
    {
      v17 = RtlStringCbPrintfW(&SourceString, 6uLL, (size_t *)L"%02x", v31);
      if ( v17 < 0 )
      {
        WdLogSingleEntry5(1LL, v17, v7, v15, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1690;
        break;
      }
      if ( Handle )
        ZwClose(Handle);
      v34 = 0;
      v18 = CcdOpenRegistrySubkey((int)&Handle, 983103, *(_QWORD *)(*(_QWORD *)&v36[1] + 64LL), &SourceString, &v34);
      if ( v18 < 0 )
      {
        WdLogSingleEntry5(2LL, v18, v7, v15, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1710;
        break;
      }
      v33 = v15;
      if ( !v30 )
      {
        v19 = *(_DWORD *)(v16 + 96);
        v31 = *(_DWORD *)(v16 + 100);
        v35 = *(_DWORD *)(v16 + 112);
        if ( (*(_QWORD *)v16 & 0x20000LL) != 0 )
        {
          if ( (*(_QWORD *)v16 & 0x200LL) != 0 && ((v20 = *(_DWORD *)(v16 + 132), v20 == 2) || v20 == 4) )
          {
            v21 = *(_DWORD *)(v16 + 156);
            v22 = *(_DWORD *)(v16 + 152);
          }
          else
          {
            v21 = *(_DWORD *)(v16 + 152);
            v22 = *(_DWORD *)(v16 + 156);
          }
          *(_DWORD *)(v16 + 100) = v22;
          *(_DWORD *)(v16 + 96) = v21;
        }
        BitsPerPixel = GetBitsPerPixel((enum _D3DDDIFORMAT)*(_DWORD *)(v16 + 116));
        *(_DWORD *)(v16 + 112) = v24 * (BitsPerPixel >> 3);
        v25 = CcdWriteRegistryValues((PCWSTR)Handle, v16);
        if ( v25 < 0 )
        {
          WdLogSingleEntry4(2LL, v25, Handle, 0LL, v7);
          WdLogGlobalForLineNumber = 1762;
          break;
        }
        *(_DWORD *)(v16 + 100) = v31;
        *(_DWORD *)(v16 + 112) = v35;
        *(_DWORD *)(v16 + 96) = v19;
        v36[0] = 4;
        v26 = CcdWriteRegistryValues((PCWSTR)Handle, (__int64)v36);
        if ( v26 < 0 )
        {
          WdLogSingleEntry4(2LL, v26, Handle, 0LL, v7);
          WdLogGlobalForLineNumber = 1790;
          break;
        }
      }
    }
    v27 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
            v14,
            Handle,
            v30,
            (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v16);
    if ( v27 < 0 )
    {
      WdLogSingleEntry5(2LL, v27, v7, v30, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1811;
      break;
    }
    if ( (*(_QWORD *)v16 & 0x800000000000LL) != 0
      && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 88))
      && (v28 & 0x200) != 0 )
    {
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 343) = *(_DWORD *)(v16 + 132);
    }
    ++v7;
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
