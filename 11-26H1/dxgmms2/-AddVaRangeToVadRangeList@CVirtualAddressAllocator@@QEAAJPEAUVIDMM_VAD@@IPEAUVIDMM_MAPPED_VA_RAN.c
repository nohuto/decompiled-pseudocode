/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400CBEA0
 * Callers:
 *     MergeAllocationPendingVaRangeList @ 0x1400A13CC (MergeAllocationPendingVaRangeList.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1400CD4E8 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400CD8CC (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x140105F78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1400389C0 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003E87C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@222K@Z @ 0x1400A955C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAVCVirtualAddressAllocator@@PEAUVIDMM_VAD@@_K2IPEAX2W4VIDMM_VAD.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400A9630 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400CC4C8 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140112180 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPP.c)
 *     CompareVaRangeAddressWithin @ 0x1401122E4 (CompareVaRangeAddressWithin.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x140113A8C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140117E64 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x14011B04C (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rbx
  _QWORD *v9; // rsi
  _QWORD *i; // rdi
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned __int64 *v16; // r14
  _QWORD **v17; // rcx
  unsigned __int64 *v18; // rdi
  _QWORD *v19; // rax
  _QWORD *j; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  int v26; // ebx
  void *v27; // r10
  struct VIDMM_MAPPED_VA_RANGE *v28; // rax
  VIDMM_MAPPED_VA_RANGE *v29; // rcx
  __int64 v30; // rbx
  unsigned __int64 v31; // rcx
  void *v32; // r10
  struct VIDMM_MAPPED_VA_RANGE *v33; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v35; // r8
  __int64 v36; // [rsp+50h] [rbp-78h]
  char v37; // [rsp+70h] [rbp-58h]
  struct _RTL_AVL_TREE *v38; // [rsp+78h] [rbp-50h]
  VIDMM_MAPPED_VA_RANGE *v39; // [rsp+80h] [rbp-48h]
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]
  __int64 v41; // [rsp+90h] [rbp-38h]
  struct VIDMM_MAPPED_VA_RANGE *v42; // [rsp+90h] [rbp-38h]
  __int16 v43; // [rsp+E0h] [rbp+18h]

  v43 = a3;
  v5 = a3;
  if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    return CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(this, a2, v5, a4);
  v37 = 0;
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
    v37 = 1;
  }
  v38 = (struct VIDMM_VAD *)((char *)a2 + 24 * v5 + 96);
  v9 = 0LL;
  for ( i = *(_QWORD **)v38; i; i = (_QWORD *)*i )
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
          goto LABEL_22;
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
  v13 = v9;
  if ( !v9 )
  {
    v16 = (unsigned __int64 *)((char *)a4 + 112);
LABEL_58:
    v26 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, a4);
    if ( v26 >= 0 )
      goto LABEL_59;
    goto LABEL_61;
  }
LABEL_22:
  v16 = (unsigned __int64 *)((char *)a4 + 112);
  while ( 1 )
  {
    v17 = (_QWORD **)v13[1];
    v18 = v13 - 1;
    v19 = v13;
    if ( v17 )
    {
      v13 = (_QWORD *)v13[1];
      for ( j = *v17; j; j = (_QWORD *)*j )
        v13 = j;
    }
    else
    {
      while ( 1 )
      {
        v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || (_QWORD *)*v13 == v19 )
          break;
        v19 = v13;
      }
    }
    v21 = *v16;
    v22 = v18 + 13;
    v23 = v18[13];
    if ( *v16 <= v23 )
      goto LABEL_58;
    v24 = *((_QWORD *)a4 + 13);
    v25 = v18[14];
    v41 = v25;
    if ( v24 > v23 )
      break;
    if ( v21 < v25 )
    {
      *v22 = v21;
      v26 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, a4);
      if ( v26 < 0 )
      {
        *v22 = v23;
        goto LABEL_61;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)v18,
        v18[10],
        v23,
        *v16);
      if ( GetVidMmAllocFromOwner(v18[9] & 0xF, v18[8]) )
        v18[10] = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v18, *v16 - v23);
      goto LABEL_59;
    }
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)v18,
      v18[10],
      v23,
      v25);
    CVirtualAddressAllocator::RemoveVaRangeFromVad(
      (CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)v18,
      0,
      1u,
      0);
LABEL_36:
    if ( !v13 )
      goto LABEL_58;
  }
  if ( v21 >= v25 )
  {
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)v18,
      v18[10],
      v24,
      v25);
    v18[14] = *((_QWORD *)a4 + 13);
    goto LABEL_36;
  }
  *v22 = v25;
  v27 = VIDMM_MAPPED_VA_RANGE::operator new(v21);
  if ( !v27
    || (v28 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                (__int64)v27,
                                                v18[9] & 0xF,
                                                (__int64)a2,
                                                v23,
                                                *((_QWORD *)a4 + 13),
                                                v43,
                                                v18[8],
                                                v18[10],
                                                v18[9] & 0xF,
                                                v18[12],
                                                v18[11],
                                                v18[16],
                                                v18[15],
                                                0),
        (v39 = v28) == 0LL) )
  {
    *v22 = v23;
    goto LABEL_56;
  }
  v26 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, v28);
  if ( v26 < 0 )
  {
    v29 = v39;
LABEL_46:
    *v22 = *((_QWORD *)v29 + 13);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v29);
    goto LABEL_61;
  }
  v26 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, a4);
  if ( v26 < 0 )
  {
    *v22 = *((_QWORD *)a4 + 13);
    goto LABEL_61;
  }
  v40 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v18, *((_QWORD *)a4 + 13) - v23);
  v30 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)v18, *v16 - v23);
  v32 = VIDMM_MAPPED_VA_RANGE::operator new(v31);
  if ( !v32
    || (v33 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                (__int64)v32,
                                                v18[9] & 0xF,
                                                (__int64)a2,
                                                *v16,
                                                v41,
                                                v43,
                                                v18[8],
                                                v30,
                                                v18[9] & 0xF,
                                                v18[12],
                                                v18[11],
                                                v18[16],
                                                v18[15],
                                                0),
        (v42 = v33) == 0LL) )
  {
    *v22 = *v16;
LABEL_56:
    v26 = -1073741801;
    goto LABEL_61;
  }
  v26 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, v33);
  if ( v26 < 0 )
  {
    v29 = v42;
    goto LABEL_46;
  }
  VidMmiLogEndVaRangeMapping(
    (struct CVirtualAddressAllocator *)this,
    (struct VIDMM_MAPPED_VA_RANGE *)v18,
    v40,
    *((_QWORD *)a4 + 13),
    *v16);
  *v22 = v23;
  CVirtualAddressAllocator::RemoveVaRangeFromVad(
    (CVirtualAddressAllocator *)this,
    (struct VIDMM_MAPPED_VA_RANGE *)v18,
    0,
    0,
    0);
LABEL_59:
  if ( byte_14008A202 < 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD *)a4 + 8));
    LODWORD(v36) = v35;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      *v16,
      &UpdateGpuVirtualAddressRangeMapping,
      v35,
      this,
      VidMmAllocFromOwner,
      *((_QWORD *)a4 + 10),
      *((_QWORD *)a4 + 13),
      *v16,
      *((_QWORD *)a4 + 12),
      *((_QWORD *)a4 + 11),
      v36,
      *((_QWORD *)a4 + 15),
      *((_QWORD *)a4 + 16));
  }
LABEL_61:
  if ( v37 )
  {
    this[9] = 0LL;
    ExReleasePushLockExclusiveEx(this + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v26;
}
