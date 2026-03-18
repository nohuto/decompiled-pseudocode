/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1400CD4E8
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400CC4C8 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVadVaRange(
        struct _KTHREAD **a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10,
        char a11)
{
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  PVOID v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rbx
  char *v22; // rdx
  char *v23; // rax
  char **v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v28; // rcx

  v13 = a3;
  v14 = a10;
  VidMmAllocFromOwner = GetVidMmAllocFromOwner(a4, a5);
  v17 = VidMmAllocFromOwner;
  if ( VidMmAllocFromOwner )
    v14 = *(_QWORD *)(***(_QWORD ***)VidMmAllocFromOwner + 16LL);
  v18 = v14 - a6;
  v19 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v19
    && (v20 = (v18 >> 12) & -(__int64)(v18 < a10),
        (v21 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                 (__int64)v19,
                 v20,
                 (__int64)a2,
                 a9,
                 a9 + a10,
                 v13,
                 a5,
                 a6,
                 a4,
                 a7,
                 a8,
                 v20,
                 a6,
                 0)) != 0) )
  {
    if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a11 )
      {
        v22 = (char *)(v21 + 8);
        v23 = (char *)a2 + 16 * v13 + 8 * v13 + 104;
        v24 = (char **)*((_QWORD *)v23 + 1);
        if ( *v24 == v23 )
        {
          *(_QWORD *)v22 = v23;
          *(_QWORD *)(v21 + 16) = v24;
          *v24 = v22;
          *((_QWORD *)v23 + 1) = v22;
          if ( !v17 )
          {
LABEL_11:
            *(_DWORD *)(v21 + 72) |= 0x8000u;
            return v21;
          }
          v25 = *(_QWORD **)(v17 + 672);
          v26 = (_QWORD *)(v21 + 32);
          if ( *v25 == v17 + 664 )
          {
            *v26 = v17 + 664;
            *(_QWORD *)(v21 + 40) = v25;
            *v25 = v26;
            *(_QWORD *)(v17 + 672) = v26;
            goto LABEL_11;
          }
        }
        __fastfail(3u);
      }
      if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, v13, (struct VIDMM_MAPPED_VA_RANGE *)v21) >= 0 )
        return v21;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2872;
    }
    else
    {
      if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, v13, (struct VIDMM_MAPPED_VA_RANGE *)v21) >= 0 )
        return v21;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2883;
    }
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v21);
  }
  else
  {
    _InterlockedIncrement(&dword_14008A830);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2845;
    DxgkLogInternalTriageEvent(v28, 262145LL);
  }
  return 0LL;
}
