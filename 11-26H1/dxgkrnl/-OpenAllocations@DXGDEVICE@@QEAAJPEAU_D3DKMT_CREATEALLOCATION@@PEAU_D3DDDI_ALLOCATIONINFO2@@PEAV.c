/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140360B80
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x140361170 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        D3DKMT_CREATESTANDARDALLOCATION *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  struct _D3DDDI_ALLOCATIONINFO2 *v14; // r14
  __int64 v17; // rcx
  UINT v18; // ebx
  int v19; // esi
  UINT *p_NumAllocations; // rdi
  UINT NumAllocations; // edx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // r9
  DXGK_OPENALLOCATIONINFO *pOpenAllocation; // rcx
  struct DXGALLOCATION *v24; // r12
  UINT v25; // r15d
  __int64 v26; // r10
  struct _D3DDDI_ALLOCATIONINFO2 *v27; // r8
  void *pPrivateDriverData; // rcx
  int v29; // r14d
  struct _D3DKMT_CREATEALLOCATION *v30; // r12
  UINT *p_PrivateDriverDataSize; // rsi
  unsigned __int64 v32; // rax
  struct DXGALLOCATION *v33; // r15
  char v34; // r8
  __int64 v35; // r12
  void *v36; // rdx
  size_t PrivateDriverDataSize; // r8
  void *v38; // rcx
  void *v40; // rax
  size_t v41; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  UINT *v43; // r13
  D3DKMT_CREATESTANDARDALLOCATION *v44; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *v45; // [rsp+50h] [rbp-A8h]
  void *v46; // [rsp+60h] [rbp-98h]
  _DXGKARG_OPENALLOCATION v47; // [rsp+70h] [rbp-88h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-50h]
  __int64 v49; // [rsp+B0h] [rbp-48h]
  void **v50; // [rsp+B8h] [rbp-40h]
  UINT *v52; // [rsp+108h] [rbp+10h]

  v14 = a3;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v17 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
  {
    v18 = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3685;
    v18 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3685LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v46 = 0LL;
  v19 = 0;
  p_NumAllocations = &a2->NumAllocations;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
    goto LABEL_33;
  *(&v47.NumAllocations + 1) = 0;
  v47.pPrivateDriverData = 0LL;
  memset(&v47.SubresourceIndex + 1, 0, 20);
  p_Flags = &a2->Flags;
  v45 = &a2->Flags;
  v47.Flags.Value = (a10 == 0) | (*(_DWORD *)&a2->Flags >> 6) & 2;
  v47.NumAllocations = NumAllocations;
  pOpenAllocation = a5;
  v47.pOpenAllocation = a5;
  v47.SubresourceIndex = a11;
  v24 = a4;
  v25 = 0;
  while ( 1 )
  {
    v26 = v25;
    pOpenAllocation[v26].hAllocation = *((_DWORD *)v24 + 4);
    v47.pOpenAllocation[v26].hDeviceSpecificAllocation = 0LL;
    v27 = &v14[v25];
    v47.pOpenAllocation[v26].PrivateDriverDataSize = v27->PrivateDriverDataSize;
    v47.pOpenAllocation[v26].pPrivateDriverData = a6[v25];
    pPrivateDriverData = v27->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( !a9 || (*(_DWORD *)p_Flags & 0x10000) != 0 )
        memmove(v47.pOpenAllocation[v26].pPrivateDriverData, pPrivateDriverData, v27->PrivateDriverDataSize);
      else
        memmove(v47.pOpenAllocation[v26].pPrivateDriverData, a7[v25], v27->PrivateDriverDataSize);
      goto LABEL_10;
    }
    if ( v27->PrivateDriverDataSize && a9 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3753;
      v19 = -1073741811;
LABEL_10:
      p_Flags = v45;
    }
    v29 = v19;
    ++v25;
    v24 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 8);
    if ( v25 >= *p_NumAllocations )
      break;
    pOpenAllocation = v47.pOpenAllocation;
    v14 = a3;
  }
  v30 = a2;
  p_PrivateDriverDataSize = &a2->PrivateDriverDataSize;
  v52 = p_PrivateDriverDataSize;
  v32 = *p_PrivateDriverDataSize;
  v47.PrivateDriverSize = *p_PrivateDriverDataSize;
  v33 = a4;
  if ( v30->pStandardAllocation && (_DWORD)v32 )
  {
    v40 = (void *)operator new[](v32, 0x4B677844u, 258LL);
    v46 = v40;
    v41 = *p_PrivateDriverDataSize;
    if ( v40 )
    {
      v47.pPrivateDriverData = v40;
      if ( a9 )
        pStandardAllocation = Src;
      else
        pStandardAllocation = v30->pStandardAllocation;
      memmove(v40, pStandardAllocation, v41);
      goto LABEL_13;
    }
    v19 = -1073741801;
    WdLogSingleEntry3(3LL, this, v41, -1073741801LL);
    WdLogGlobalForLineNumber = 3770;
  }
  else
  {
LABEL_13:
    v19 = v29;
    if ( v29 >= 0 && (*(_DWORD *)v45 & 0x100000) == 0 )
      v19 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 77), &v47);
    if ( v19 >= 0 )
    {
      if ( a12 )
        *a12 = v47.Pitch;
      if ( a13 )
        *a13 = v47.SubresourceOffset;
      v34 = a10;
      if ( !v46 || a10 )
        goto LABEL_22;
      if ( a9 )
      {
        v43 = v52;
        RtlCopyToUser(v30->pStandardAllocation, v46, *v52);
        v44 = Src;
      }
      else
      {
        v43 = v52;
        v44 = v30->pStandardAllocation;
      }
      memmove(v44, v46, *v43);
      while ( 1 )
      {
        v34 = a10;
LABEL_22:
        if ( v18 >= *p_NumAllocations )
          break;
        v49 = v18;
        *((_QWORD *)v33 + 4) = v47.pOpenAllocation[v18].hDeviceSpecificAllocation;
        v35 = v18;
        v48 = v35 * 8;
        v50 = &a6[v35];
        v36 = a6[v35];
        if ( v36 && !v34 )
        {
          if ( !a9 || (*(_DWORD *)v45 & 0x10000) != 0 )
          {
            PrivateDriverDataSize = a3[v18].PrivateDriverDataSize;
            v38 = a3[v18].pPrivateDriverData;
          }
          else
          {
            RtlCopyToUser(a3[v18].pPrivateDriverData, v36, a3[v18].PrivateDriverDataSize);
            PrivateDriverDataSize = a3[v18].PrivateDriverDataSize;
            v36 = a6[v35];
            v38 = a7[v35];
          }
          memmove(v38, v36, PrivateDriverDataSize);
        }
        ++v18;
        v33 = (struct DXGALLOCATION *)*((_QWORD *)v33 + 8);
      }
    }
  }
LABEL_33:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v46);
  return (unsigned int)v19;
}
