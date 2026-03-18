/*
 * XREFs of ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400A9630
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003E87C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ?AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400A9D2C (-AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVID.c)
 *     ValidateUniqueGpuVaMapping @ 0x1400AB034 (ValidateUniqueGpuVaMapping.c)
 *     CompareVaRangeAddressWithin @ 0x1401122E4 (CompareVaRangeAddressWithin.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x140113A8C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140117E64 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x14011B04C (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rbx
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  _QWORD *i; // rdi
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // rdi
  int v15; // eax
  struct VIDMM_MAPPED_VA_RANGE *v16; // rdi
  struct VIDMM_MAPPED_VA_RANGE *v17; // rax
  struct VIDMM_MAPPED_VA_RANGE *v18; // r15
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD **v26; // rcx
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  _QWORD *j; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r9
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r10
  int v39; // r11d
  unsigned __int64 v40; // rax
  __int64 v41; // rbx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // r9d
  int v46; // r11d
  __int64 VidMmAllocFromOwner; // rax
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v51; // rcx
  __int64 v52; // [rsp+50h] [rbp-78h]
  _QWORD *VidMmGlobalAllocFromOwner; // [rsp+70h] [rbp-58h]
  __int64 v54; // [rsp+78h] [rbp-50h]
  unsigned __int64 v55; // [rsp+78h] [rbp-50h]
  char v56; // [rsp+D0h] [rbp+8h]
  __int16 v57; // [rsp+E0h] [rbp+18h]
  struct _RTL_AVL_TREE *v58; // [rsp+E8h] [rbp+20h]

  v57 = a3;
  v5 = a3;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD **)a4 + 8));
  v8 = VidMmGlobalAllocFromOwner;
  v56 = 0;
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
    v56 = 1;
  }
  if ( VidMmGlobalAllocFromOwner )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 24, 0LL);
  }
  v58 = (struct VIDMM_VAD *)((char *)a2 + 24 * v5 + 96);
  v9 = 0LL;
  for ( i = *(_QWORD **)v58; i; i = (_QWORD *)*i )
  {
    v11 = CompareVaRangeAddressWithin((char *)a4 + 104, i);
    if ( !v11 )
    {
      v9 = i;
      v13 = 0LL;
      v14 = (_QWORD *)*i;
      if ( v14 )
      {
        do
        {
          v15 = CompareVaRangeAddressWithin((char *)a4 + 104, v14);
          if ( v15 >= 0 )
          {
            if ( v15 <= 0 )
              v13 = v14;
            else
              ++v14;
          }
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
        if ( v13 )
          v9 = v13;
      }
      break;
    }
    v12 = i;
    if ( v11 >= 0 )
      v12 = v9;
    v9 = v12;
    if ( v11 >= 0 )
      ++i;
  }
  v16 = (struct VIDMM_MAPPED_VA_RANGE *)ExAllocateFromLookasideListEx(&g_VaRangeLookasideList);
  v17 = (struct VIDMM_MAPPED_VA_RANGE *)ExAllocateFromLookasideListEx(&g_VaRangeLookasideList);
  v18 = v17;
  if ( !v16 || !v17 )
  {
    _InterlockedIncrement(&dword_14008A830);
    WdLogSingleEntry2(6LL, v16, v17);
    WdLogGlobalForLineNumber = 10687;
    DxgkLogInternalTriageEvent(v51, 262145LL);
    v19 = -1073741801;
    goto LABEL_61;
  }
  if ( !(unsigned __int8)ValidateUniqueGpuVaMapping(a4) )
  {
    v19 = -1073741811;
    goto LABEL_61;
  }
  if ( (*((_DWORD *)a4 + 18) & 0x8000) != 0 )
  {
    v20 = (_QWORD *)((char *)a4 + 32);
    v21 = *((_QWORD *)a4 + 4);
    if ( v21 )
    {
      if ( *(_QWORD **)(v21 + 8) != v20 )
        goto LABEL_39;
      v22 = (_QWORD *)*((_QWORD *)a4 + 5);
      if ( (_QWORD *)*v22 != v20 )
        goto LABEL_39;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      *v20 = 0LL;
      *((_QWORD *)a4 + 5) = 0LL;
    }
    v23 = (_QWORD *)((char *)a4 + 8);
    v24 = *((_QWORD *)a4 + 1);
    if ( *(struct VIDMM_MAPPED_VA_RANGE **)(v24 + 8) == (struct VIDMM_MAPPED_VA_RANGE *)((char *)a4 + 8) )
    {
      v25 = (_QWORD *)*((_QWORD *)a4 + 2);
      if ( (_QWORD *)*v25 == v23 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        *v23 = 0LL;
        *((_QWORD *)a4 + 2) = 0LL;
        *((_DWORD *)a4 + 18) &= ~0x8000u;
        goto LABEL_34;
      }
    }
LABEL_39:
    __fastfail(3u);
  }
LABEL_34:
  if ( v9 )
  {
    do
    {
      v26 = (_QWORD **)v9[1];
      v27 = v9 - 1;
      v28 = v9;
      if ( v26 )
      {
        v9 = (_QWORD *)v9[1];
        for ( j = *v26; j; j = (_QWORD *)*j )
          v9 = j;
      }
      else
      {
        while ( 1 )
        {
          v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v9 || (_QWORD *)*v9 == v28 )
            break;
          v28 = v9;
        }
      }
      if ( *((_QWORD *)a4 + 14) <= v27[13] )
        break;
      _InterlockedIncrement((volatile signed __int32 *)v27 + 34);
      CVirtualAddressAllocator::RemoveVaRangeFromVad(
        (CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)v27,
        0,
        0,
        1u);
      v30 = *((_QWORD *)a4 + 13);
      v31 = v27[13];
      if ( v30 > v31 )
      {
        v55 = v27[14];
        if ( *((_QWORD *)a4 + 14) < v55 )
        {
          if ( v16 )
            VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v16,
              v30,
              (__int64)a2,
              v31,
              v30,
              v57,
              v27[8],
              v27[10],
              v27[9] & 0xF,
              v27[12],
              v27[11],
              v27[16],
              v27[15],
              *((_DWORD *)v27 + 18));
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v58, v16);
          v40 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v27, *((_QWORD *)a4 + 13) - v31);
          v41 = *((_QWORD *)a4 + 14);
          v42 = v40;
          v43 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v27, v41 - v31);
          VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v18,
            v44,
            (__int64)a2,
            v41,
            v55,
            v57,
            v27[8],
            v43,
            v46,
            v27[12],
            v27[11],
            v27[16],
            v27[15],
            v45);
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v58, v18);
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)this,
            (struct VIDMM_MAPPED_VA_RANGE *)v27,
            v42,
            *((_QWORD *)a4 + 13),
            *((_QWORD *)a4 + 14));
          v16 = 0LL;
          goto LABEL_56;
        }
        if ( v16 )
          VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v16,
            v30,
            (__int64)a2,
            v31,
            v30,
            v57,
            v27[8],
            v27[10],
            v27[9] & 0xF,
            v27[12],
            v27[11],
            v27[16],
            v27[15],
            *((_DWORD *)v27 + 18));
        CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v58, v16);
        v33 = v27[14];
        v16 = 0LL;
        v31 = *((_QWORD *)a4 + 13);
      }
      else
      {
        v32 = *((_QWORD *)a4 + 14);
        v33 = v27[14];
        v54 = v32;
        if ( v32 < v33 )
        {
          v34 = v27[9] & 0xF;
          v35 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v27, v32 - v31);
          VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v18,
            v36,
            (__int64)a2,
            v54,
            v37,
            v57,
            v27[8],
            v35,
            v34,
            v38,
            v27[11],
            v27[16],
            v27[15],
            v39);
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v58, v18);
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)this,
            (struct VIDMM_MAPPED_VA_RANGE *)v27,
            v27[10],
            v27[13],
            *((_QWORD *)a4 + 14));
LABEL_56:
          v18 = 0LL;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v27);
          break;
        }
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)v27,
        v27[10],
        v31,
        v33);
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v27);
    }
    while ( v9 );
    v8 = VidMmGlobalAllocFromOwner;
  }
  CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v58, a4);
  if ( byte_14008A202 < 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD *)a4 + 8));
    LODWORD(v52) = v48;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      v49,
      &UpdateGpuVirtualAddressRangeMapping,
      v48,
      this,
      VidMmAllocFromOwner,
      *((_QWORD *)a4 + 10),
      *((_QWORD *)a4 + 13),
      *((_QWORD *)a4 + 14),
      *((_QWORD *)a4 + 12),
      *((_QWORD *)a4 + 11),
      v52,
      *((_QWORD *)a4 + 15),
      *((_QWORD *)a4 + 16));
  }
  v19 = 0;
LABEL_61:
  if ( v8 )
  {
    ExReleasePushLockExclusiveEx(v8 + 24, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v16 )
    ExFreeToLookasideListEx(&g_VaRangeLookasideList, v16);
  if ( v18 )
    ExFreeToLookasideListEx(&g_VaRangeLookasideList, v18);
  if ( v56 )
  {
    this[9] = 0LL;
    ExReleasePushLockExclusiveEx(this + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  return v19;
}
