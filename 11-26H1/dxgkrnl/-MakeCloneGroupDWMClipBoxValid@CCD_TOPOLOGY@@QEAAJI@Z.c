/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14033EDCC
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318DA0 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14005F79C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x14006AC54 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x14033F530 (DxgkGetAdapterDefaultScaling.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14033F748 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  CCD_TOPOLOGY *v2; // rbx
  unsigned int v3; // r13d
  int v4; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rdi
  __int64 v9; // rbx
  signed int v10; // r9d
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // cf
  signed __int64 v18; // rax
  _DWORD *v19; // r15
  int v20; // eax
  unsigned int v21; // esi
  int v22; // ecx
  __int64 result; // rax
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v27; // r9d
  int v28; // eax
  int v29; // r8d
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  char v34; // al
  unsigned int v35; // ebx
  unsigned int v36; // esi
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // [rsp+20h] [rbp-78h]
  unsigned int v41[18]; // [rsp+50h] [rbp-48h] BYREF
  int v43; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v44; // [rsp+B8h] [rbp+20h] BYREF

  v2 = this;
  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v43 = v4;
  while ( 1 )
  {
    if ( v3 >= *(unsigned __int16 *)(*((_QWORD *)v2 + 8) + 20LL) )
      return 0LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v2, v3);
    v8 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) == v4 )
      break;
LABEL_29:
    v2 = this;
    ++v3;
  }
  if ( !*((_BYTE *)PathDescriptor + 129) )
  {
    if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4049;
    }
    *((_DWORD *)v8 + 65) |= 1u;
    *((_QWORD *)v8 + 21) = 0LL;
    goto LABEL_26;
  }
  v9 = *((_QWORD *)PathDescriptor + 12);
  v10 = *((_DWORD *)PathDescriptor + 33);
  *(_QWORD *)v41 = v9;
  v44 = 0LL;
  if ( v10 >= 5 )
  {
    if ( v10 > 16 )
      goto LABEL_8;
    D3DKMDT_VPPR_GET_OFFSET_ROTATION(v10);
    v28 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART(v27);
    v6 = (unsigned int)((v29 + v28 - 2) >> 31);
    LODWORD(v6) = (v29 + v28 - 2) % 4;
    v10 = v6 + 1;
  }
  if ( v10 == 2 || v10 == 4 )
  {
    v11 = *((_DWORD *)v8 + 39);
    v12 = *((_DWORD *)v8 + 38);
    goto LABEL_9;
  }
LABEL_8:
  v11 = *((_DWORD *)v8 + 38);
  v12 = *((_DWORD *)v8 + 39);
LABEL_9:
  v13 = *(_DWORD *)v8;
  v44 = __PAIR64__(v12, v11);
  if ( (*(_QWORD *)&v13 & 0x800000LL) == 0 )
    goto LABEL_10;
  v24 = *((_DWORD *)v8 + 43);
  if ( v24 >= 0 )
  {
    v25 = *((_DWORD *)v8 + 42);
    if ( v25 >= 0 )
    {
      v6 = *((unsigned int *)v8 + 44);
      if ( (int)v6 > v25 )
      {
        v7 = *((unsigned int *)v8 + 45);
        if ( (int)v7 > v24 && (int)v6 <= (int)v9 && (int)v7 <= SHIDWORD(v9) )
          goto LABEL_29;
      }
    }
  }
  if ( (*((_DWORD *)v8 + 2) & 0x800000) == 0 )
  {
LABEL_10:
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v14[3] = v3;
    v14[4] = *((unsigned int *)v8 + 6);
    v14[5] = *((unsigned int *)v8 + 7);
    v17 = _bittest64((const signed __int64 *)v8, 0x2Au);
    WdLogGlobalForLineNumber = 3996;
    if ( !v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3998;
    }
    v18 = *(_QWORD *)v8;
    if ( *((_DWORD *)v8 + 34) == 1 )
    {
      v19 = (_DWORD *)((char *)v8 + 140);
      if ( (v18 & 0x10000) != 0 )
      {
        if ( *v19 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140, v15, v16);
          *((_DWORD *)v8 + 65) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140, v15, v16);
        *(_QWORD *)v8 |= 0x10000uLL;
        *((_DWORD *)v8 + 65) |= 0x80u;
      }
      v20 = ConvertDmmToDisplayConfigScaling((unsigned int)*v19);
      v21 = v41[1];
      switch ( v20 )
      {
        case 1:
          if ( (_DWORD)v9 != v11 || v41[1] != v12 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 85;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"*pSurfaceSize == *pContentSize",
              85LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          break;
        case 2:
          if ( (unsigned int)v9 >= v11 && v41[1] >= v12 )
          {
            v35 = ((unsigned int)v9 - v11) >> 1;
            v36 = (v41[1] - v12) >> 1;
            *((_DWORD *)v8 + 44) = v35 + v11;
            v37 = v36 + v12;
            goto LABEL_56;
          }
LABEL_58:
          v39 = v11 * v41[1];
          if ( v11 * v41[1] < v12 * (unsigned int)v9 )
          {
            *((_DWORD *)v8 + 45) = v41[1];
            v35 = ((unsigned int)v9 - v39 / v12) >> 1;
            *((_DWORD *)v8 + 44) = v35 + v39 / v12;
            v36 = 0;
            goto LABEL_64;
          }
          v38 = v12 * (unsigned int)v9 / v11;
          *((_DWORD *)v8 + 44) = v9;
          v36 = (v21 - v38) >> 1;
          v37 = v36 + v38;
          v35 = 0;
LABEL_56:
          *((_DWORD *)v8 + 45) = v37;
LABEL_64:
          *((_DWORD *)v8 + 42) = v35;
          *((_DWORD *)v8 + 43) = v36;
LABEL_52:
          v4 = v43;
          goto LABEL_27;
        case 3:
          break;
        case 4:
          goto LABEL_58;
        default:
          if ( v20 != 5 )
          {
            v30 = v20;
            WdLogSingleEntry1(1LL);
            WdLogGlobalForLineNumber = 146;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Unknown scaling type 0x%lx", v30, 0LL, 0LL, 0LL, 0LL);
          }
          WdLogSingleEntry1(1LL);
          v40 = (int)*v19;
          WdLogGlobalForLineNumber = 4036;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Failed to set clipbox with scaling intent 0x%lx, going to force ",
            v40,
            0LL,
            0LL,
            0LL,
            0LL);
          DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140, v31, v32);
          v33 = ConvertDmmToDisplayConfigScaling((unsigned int)*v19);
          v34 = CalculateScaling(v33, v41, (unsigned int *)&v44, (unsigned int *)v8 + 42);
          *((_DWORD *)v8 + 65) |= 0x40u;
          if ( !v34 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4042;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bRet", 4042LL, 0LL, 0LL, 0LL, 0LL);
          }
          goto LABEL_52;
      }
      *((_DWORD *)v8 + 44) = v9;
      *((_DWORD *)v8 + 45) = v21;
      v35 = 0;
      v36 = 0;
      goto LABEL_64;
    }
    if ( (v18 & 0x100) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4002;
    }
    *((_DWORD *)v8 + 65) |= 1u;
    *((_QWORD *)v8 + 21) = 0LL;
LABEL_26:
    *((_DWORD *)v8 + 44) = *((_DWORD *)v8 + 24);
    *((_DWORD *)v8 + 45) = *((_DWORD *)v8 + 25);
LABEL_27:
    *(_QWORD *)v8 |= 0x800000uLL;
    v22 = *((_DWORD *)v8 + 43);
    if ( v22 < 0 || (v26 = *((_DWORD *)v8 + 42), v26 < 0) || *((_DWORD *)v8 + 44) <= v26 || *((_DWORD *)v8 + 45) <= v22 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4062;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pPathDescriptor->DwmClipBox.top >= 0) && (pPathDescriptor->DwmClipBox.left >= 0) && (pPathDescriptor->"
                  "DwmClipBox.right > pPathDescriptor->DwmClipBox.left) && (pPathDescriptor->DwmClipBox.bottom > pPathDes"
                  "criptor->DwmClipBox.top)",
        4062LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_29;
  }
  WdLogSingleEntry3(2LL, v3, *((unsigned int *)v8 + 6), *((unsigned int *)v8 + 7));
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 3985;
  return result;
}
