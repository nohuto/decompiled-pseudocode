/*
 * XREFs of AslpFileGetVersionBlock @ 0x140893EF8
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140893E0C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlVerifyVersionInfo @ 0x14048F510 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x1404A8A90 (VerSetConditionMask.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     RtlFileMapFree @ 0x140719740 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     AslpMemorySpanCheckBounds @ 0x140719BB4 (AslpMemorySpanCheckBounds.c)
 *     AslpMemorySpanInitViewFromFileMapping @ 0x140719BFC (AslpMemorySpanInitViewFromFileMapping.c)
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x140719C80 (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _WORD *v6; // r14
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  int v11; // ebx
  int v12; // eax
  ULONGLONG v13; // rax
  ULONGLONG v14; // rax
  __int64 v15; // rax
  const char *v16; // r9
  int v17; // r8d
  size_t v18; // rbx
  __int64 v19; // rcx
  void *v20; // rbx
  size_t v21; // rcx
  void *Src; // [rsp+48h] [rbp-1E0h] BYREF
  _WORD *v24; // [rsp+50h] [rbp-1D8h]
  unsigned __int128 v25; // [rsp+58h] [rbp-1D0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-1C0h] BYREF
  _QWORD v27[3]; // [rsp+78h] [rbp-1B0h] BYREF
  __int128 v28; // [rsp+90h] [rbp-198h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-188h]
  __int128 v30; // [rsp+B0h] [rbp-178h]
  __int64 v31; // [rsp+C0h] [rbp-168h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+D0h] [rbp-158h] BYREF
  size_t Size; // [rsp+248h] [rbp+20h] BYREF

  Src = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  Size = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v7 = *(_QWORD *)(a3 + 72);
  if ( !v7 )
  {
    v11 = AslFileMappingEnsure(a3);
    if ( v11 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGetVersionBlock",
        1527,
        (unsigned int)"AslFileMappingEnsure failed [%x]");
      goto LABEL_54;
    }
    if ( *(_DWORD *)(a3 + 64) != 6 )
    {
      v11 = -1073741687;
      goto LABEL_54;
    }
    v27[0] = 16LL;
    v27[1] = 1LL;
    v27[2] = 0LL;
    AslpMemorySpanInitViewFromFileMapping(&v25, a3);
    v12 = LdrResSearchResource(
            *(_QWORD *)(a3 + 32),
            (unsigned int)v27,
            3,
            *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0,
            (__int64)&Src,
            (__int64)&Size,
            0LL,
            0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned int)(v12 + 1073741687) <= 2 )
        goto LABEL_54;
      if ( v12 != -1073741701 || *(_BYTE *)(a3 + 59) || *(_DWORD *)(a3 + 84) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpFileGetVersionBlock",
          1651,
          (unsigned int)"LdrResFindResource failed %ls [%x]");
        goto LABEL_54;
      }
      memset_0(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.dwMajorVersion = 6;
      VersionInfo.dwMinorVersion = 2;
      v13 = VerSetConditionMask(0LL, 2u, 3u);
      v14 = VerSetConditionMask(v13, 1u, 3u);
      if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v14) < 0 )
      {
LABEL_15:
        v11 = -1073741687;
        goto LABEL_54;
      }
      v15 = *(_QWORD *)(a3 + 8);
      LOBYTE(v31) = 0;
      *(_QWORD *)&v28 = v15;
      v11 = RtlFileMapMapView((__int64)&v28, 1);
      if ( v11 < 0 )
      {
        v16 = "RtlFileMapMapView failed [%x]";
        v17 = 1618;
LABEL_53:
        AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlock", v17, (_DWORD)v16);
        goto LABEL_54;
      }
      AslLogCallPrintf(
        3,
        (unsigned int)"AslpFileGetVersionBlock",
        1627,
        (unsigned int)"Re-mapped file as image to get version block: %ls");
      v11 = LdrResSearchResource(DWORD2(v29), (unsigned int)v27, 3, 0, (__int64)&Src, (__int64)&Size, 0LL, 0LL);
      AslLogCallPrintf(
        2,
        (unsigned int)"AslpFileGetVersionBlock",
        1640,
        (unsigned int)"%ls version block after re-mapping as image [%x]");
      if ( v11 < 0 )
      {
        v16 = "LdrResFindResource failed [%x]";
        v17 = 1643;
        goto LABEL_53;
      }
      v25 = __PAIR128__(v30, *((unsigned __int64 *)&v29 + 1));
    }
    if ( !Src )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGetVersionBlock",
        1658,
        (unsigned int)"LdrResFindResource returned null version block with status: [%x]");
      goto LABEL_15;
    }
    v18 = Size;
    if ( Size < 0x26 )
    {
      v16 = "Version block is too small to be valid";
      v17 = 1665;
      goto LABEL_52;
    }
    if ( Size > 0x8000 )
    {
      v16 = "Version block is too large to be valid";
      v17 = 1675;
      goto LABEL_52;
    }
    *(_QWORD *)&v26 = Src;
    *((_QWORD *)&v26 + 1) = Size;
    if ( !AslpMemorySpanCheckBounds((unsigned __int64 *)&v26, (unsigned __int64 *)&v25) )
    {
      v11 = -1073741687;
      v16 = "Version block has bad size (falls outside file)";
      v17 = 1686;
      goto LABEL_53;
    }
    v6 = (_WORD *)AslAlloc(v19, v18);
    v24 = v6;
    if ( !v6 )
    {
      v11 = -1073741801;
      v16 = "Out of memory";
      v17 = 1698;
      goto LABEL_53;
    }
    v20 = Src;
    if ( MmIsUserAddress((unsigned __int64)Src) )
      RtlCopyFromUser(v6, v20, Size);
    else
      memmove(v6, v20, Size);
    if ( (unsigned int)Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( Size < 0x5C || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
      {
        v17 = 1722;
LABEL_51:
        v16 = "Version block invalid";
        goto LABEL_52;
      }
    }
    else if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
    {
      v17 = 1729;
      goto LABEL_51;
    }
    v21 = (unsigned __int16)*v6;
    if ( (unsigned __int16)v21 >= 0x5Cu )
    {
      if ( Size < v21 )
      {
        AslLogCallPrintf(
          3,
          (unsigned int)"AslpFileGetVersionBlock",
          1752,
          (unsigned int)"LdrResSearchResource returned a VersionBlockSize smaller than reflected in the actual block data.");
        *v6 = Size;
        LOWORD(v21) = Size;
      }
      *(_QWORD *)&v25 = v6;
      *((_QWORD *)&v25 + 1) = (unsigned __int16)v21;
      *(_QWORD *)&v26 = v6 + 20;
      *((_QWORD *)&v26 + 1) = 52LL;
      if ( AslpMemorySpanCheckBounds((unsigned __int64 *)&v26, (unsigned __int64 *)&v25) )
      {
        *a2 = v6 + 20;
      }
      else
      {
        *a2 = 0LL;
        if ( v6[1] )
        {
          v16 = "Version block invalid (fixed info falls outside root)";
          v17 = 1776;
          goto LABEL_52;
        }
      }
      *(_QWORD *)(a3 + 72) = v6;
      v6 = 0LL;
      v24 = 0LL;
      v9 = a1;
      *a1 = *(_QWORD *)(a3 + 72);
      v11 = 0;
      goto LABEL_54;
    }
    v16 = "Version block invalid (too small to contain data)";
    v17 = 1743;
LABEL_52:
    v11 = -1073741595;
    goto LABEL_53;
  }
  v8 = *(_WORD *)(v7 + 2);
  v9 = (_QWORD *)(v7 + 40);
  v10 = 0LL;
  if ( v8 >= 0x34u )
    v10 = v9;
  *a2 = v10;
  *a1 = *(_QWORD *)(a3 + 72);
  v11 = 0;
LABEL_54:
  if ( v6 )
    AslFree(v9, v6);
  RtlFileMapFree((__int64)&v28);
  return (unsigned int)v11;
}
