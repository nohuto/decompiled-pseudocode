/*
 * XREFs of AslpFileGetVersionBlock @ 0x18009CB34
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x18009CA48 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     RtlFileMapFree @ 0x18009AA74 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x18009ABDC (RtlFileMapMapView.c)
 *     AslpMemorySpanCheckBounds @ 0x18009E8C8 (AslpMemorySpanCheckBounds.c)
 *     AslpMemorySpanInitViewFromFileMapping @ 0x18009E910 (AslpMemorySpanInitViewFromFileMapping.c)
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x18009E980 (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  void *v5; // r12
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  ULONGLONG v11; // rax
  ULONGLONG v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r13
  const wchar_t *v16; // rax
  SIZE_T v17; // rbx
  const char *v18; // r9
  __int64 v19; // r8
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v21; // rbx
  SIZE_T v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-228h]
  __int64 v25; // [rsp+20h] [rbp-228h]
  SIZE_T Size; // [rsp+48h] [rbp-200h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-1F8h] BYREF
  unsigned __int16 *v28; // [rsp+60h] [rbp-1E8h]
  __int128 v29; // [rsp+68h] [rbp-1E0h] BYREF
  __int128 v30; // [rsp+78h] [rbp-1D0h] BYREF
  _QWORD *v31; // [rsp+88h] [rbp-1C0h]
  _QWORD *v32; // [rsp+90h] [rbp-1B8h]
  __int64 v33; // [rsp+98h] [rbp-1B0h]
  __int128 v34; // [rsp+A0h] [rbp-1A8h] BYREF
  __int128 v35; // [rsp+B0h] [rbp-198h]
  __int128 v36; // [rsp+C0h] [rbp-188h]
  struct _OSVERSIONINFOEXW VersionInfo; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD v38[3]; // [rsp+1F0h] [rbp-58h] BYREF

  v31 = a2;
  v32 = a1;
  v33 = a3;
  Src[0] = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  Size = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v6 = *(_QWORD *)(a3 + 64);
  if ( !v6 )
  {
    v9 = AslFileMappingEnsure(a3);
    v8 = v9;
    if ( v9 < 0 )
    {
      AslLogCallPrintf(1LL, "AslpFileGetVersionBlock", 1527LL, "AslFileMappingEnsure failed [%x]", v9);
      goto LABEL_53;
    }
    if ( *(_DWORD *)(a3 + 56) != 6 )
    {
      v8 = -1073741687;
      goto LABEL_53;
    }
    v38[0] = 16LL;
    v38[1] = 1LL;
    v38[2] = 0LL;
    AslpMemorySpanInitViewFromFileMapping(&v29, a3);
    v10 = LdrResSearchResource(
            *(_QWORD *)(a3 + 32),
            v38,
            3LL,
            *(_BYTE *)(a3 + 51) == 0 ? 0x200 : 0,
            Src,
            &Size,
            0LL,
            0LL);
    v8 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)(v10 + 1073741687) <= 2 )
        goto LABEL_53;
      if ( v10 != -1073741701 || *(_BYTE *)(a3 + 51) || *(_DWORD *)(a3 + 76) )
      {
        AslLogCallPrintf(
          1LL,
          "AslpFileGetVersionBlock",
          1651LL,
          "LdrResFindResource failed %ls [%x]",
          *(const wchar_t **)a3,
          v10);
        goto LABEL_53;
      }
      memset_0(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.dwMajorVersion = 6;
      VersionInfo.dwMinorVersion = 2;
      v11 = VerSetConditionMask(0LL, 2u, 3u);
      v12 = VerSetConditionMask(v11, 1u, 3u);
      if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v12) < 0 )
      {
LABEL_15:
        v8 = -1073741687;
        goto LABEL_53;
      }
      v13 = *(_QWORD *)(a3 + 8);
      BYTE8(v36) = 0;
      *(_QWORD *)&v34 = v13;
      v14 = RtlFileMapMapView((__int64)&v34, 1);
      v8 = v14;
      if ( v14 < 0 )
      {
        LODWORD(v24) = v14;
        AslLogCallPrintf(1LL, "AslpFileGetVersionBlock", 1618LL, "RtlFileMapMapView failed [%x]", v24);
        goto LABEL_53;
      }
      AslLogCallPrintf(
        3LL,
        "AslpFileGetVersionBlock",
        1627LL,
        "Re-mapped file as image to get version block: %ls",
        *(const wchar_t **)a3);
      v15 = *((_QWORD *)&v35 + 1);
      v8 = LdrResSearchResource(*((_QWORD *)&v35 + 1), v38, 3LL, 0LL, Src, &Size, 0LL, 0LL);
      v16 = L"Found";
      if ( v8 < 0 )
        v16 = L"Did not find";
      AslLogCallPrintf(
        2LL,
        "AslpFileGetVersionBlock",
        1640LL,
        "%ls version block after re-mapping as image [%x]",
        v16,
        v8);
      if ( v8 < 0 )
      {
        LODWORD(v25) = v8;
        AslLogCallPrintf(1LL, "AslpFileGetVersionBlock", 1643LL, "LdrResFindResource failed [%x]", v25);
        goto LABEL_53;
      }
      *(_QWORD *)&v29 = v15;
      *((_QWORD *)&v29 + 1) = v36;
    }
    if ( !Src[0] )
    {
      AslLogCallPrintf(
        1LL,
        "AslpFileGetVersionBlock",
        1658LL,
        "LdrResFindResource returned null version block with status: [%x]",
        v8);
      goto LABEL_15;
    }
    v17 = Size;
    if ( Size < 0x26 )
    {
      v18 = "Version block is too small to be valid";
      v19 = 1665LL;
      goto LABEL_51;
    }
    if ( Size > 0x8000 )
    {
      v18 = "Version block is too large to be valid";
      v19 = 1675LL;
      goto LABEL_51;
    }
    *(void **)&v30 = Src[0];
    *((_QWORD *)&v30 + 1) = Size;
    if ( !(unsigned __int8)AslpMemorySpanCheckBounds(&v30, &v29) )
    {
      v8 = -1073741687;
      AslLogCallPrintf(1LL, "AslpFileGetVersionBlock", 1686LL, "Version block has bad size (falls outside file)");
      goto LABEL_53;
    }
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
    v21 = Heap;
    v5 = Heap;
    v28 = Heap;
    if ( !Heap )
    {
      v8 = -1073741801;
      AslLogCallPrintf(1LL, "AslpFileGetVersionBlock", 1698LL, "Out of memory");
      goto LABEL_53;
    }
    memmove_0(Heap, Src[0], Size);
    if ( (unsigned int)Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( Size < 0x5C || _wcsicmp((const wchar_t *)Src[0] + 3, L"VS_VERSION_INFO") )
      {
        v19 = 1722LL;
LABEL_50:
        v18 = "Version block invalid";
LABEL_51:
        v8 = -1073741595;
        AslLogCallPrintf(1LL, "AslpFileGetVersionBlock", v19, v18);
        goto LABEL_53;
      }
    }
    else if ( Size < 0x26 || _wcsicmp((const wchar_t *)Src[0] + 3, L"VS_VERSION_INFO") )
    {
      v19 = 1729LL;
      goto LABEL_50;
    }
    v22 = *v21;
    if ( (unsigned __int16)v22 < 0x5Cu )
    {
      v18 = "Version block invalid (too small to contain data)";
      v19 = 1743LL;
      goto LABEL_51;
    }
    if ( Size < v22 )
    {
      AslLogCallPrintf(
        3LL,
        "AslpFileGetVersionBlock",
        1752LL,
        "LdrResSearchResource returned a VersionBlockSize smaller than reflected in the actual block data.");
      *v21 = Size;
      LOWORD(v22) = Size;
    }
    *(_QWORD *)&v29 = v21;
    *((_QWORD *)&v29 + 1) = (unsigned __int16)v22;
    *(_QWORD *)&v30 = v21 + 20;
    *((_QWORD *)&v30 + 1) = 52LL;
    if ( (unsigned __int8)AslpMemorySpanCheckBounds(&v30, &v29) )
    {
      *v31 = v21 + 20;
    }
    else
    {
      *v31 = 0LL;
      if ( v21[1] )
      {
        v18 = "Version block invalid (fixed info falls outside root)";
        v19 = 1776LL;
        goto LABEL_51;
      }
    }
    *(_QWORD *)(a3 + 64) = v21;
    v5 = 0LL;
    v28 = 0LL;
    *v32 = v21;
    v8 = 0;
    goto LABEL_53;
  }
  v7 = 0LL;
  if ( *(_WORD *)(v6 + 2) >= 0x34u )
    v7 = v6 + 40;
  *a2 = v7;
  *a1 = *(_QWORD *)(a3 + 64);
  v8 = 0;
LABEL_53:
  if ( v5 )
    AslFree(NtCurrentPeb()->ProcessHeap, v5);
  RtlFileMapFree((__int64)&v34);
  return (unsigned int)v8;
}
