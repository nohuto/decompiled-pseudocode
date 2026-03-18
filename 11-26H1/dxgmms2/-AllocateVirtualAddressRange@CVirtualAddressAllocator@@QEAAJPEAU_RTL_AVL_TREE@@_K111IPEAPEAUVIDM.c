/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80
 * Callers:
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400C9374 (-AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C943C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1400C9610 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ValidateVadInFreeTree @ 0x1400C9968 (ValidateVadInFreeTree.c)
 *     ValidateVadAddressRange @ 0x1400CBD40 (ValidateVadAddressRange.c)
 *     ?FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140104E98 (-FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x14011056C (-ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r13d
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // r12d
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // r14
  struct VIDMM_VAD **v30; // rdi
  __int64 v31; // rax
  struct VIDMM_VAD *Vad; // r15
  __int64 v33; // r8
  _QWORD *v34; // rbx
  __int64 v35; // r14
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  struct VIDMM_VAD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // rcx
  char **v46; // rax
  char *v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v52; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-70h]
  unsigned __int64 v54; // [rsp+60h] [rbp-68h]
  unsigned __int64 v55; // [rsp+68h] [rbp-60h]
  unsigned __int64 v56; // [rsp+70h] [rbp-58h]
  __int64 v57; // [rsp+78h] [rbp-50h]
  __int64 v58; // [rsp+80h] [rbp-48h]
  unsigned __int64 v59; // [rsp+88h] [rbp-40h]
  __int64 v60; // [rsp+90h] [rbp-38h]
  unsigned __int64 v61; // [rsp+D8h] [rbp+10h]

  v11 = a9;
  if ( a9 )
  {
    v12 = *((_QWORD *)this + 13);
    if ( !v12 || (*(_DWORD *)(v12 + 136) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 12) + 40096LL) )
      v11 = 0;
  }
  v13 = *((_QWORD *)this + 12);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 6952);
  else
    v14 = 1;
  v15 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    WdLogSingleEntry2(1LL, a4, a3 + a4);
    WdLogGlobalForLineNumber = 1795;
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 3221225485LL;
  }
  if ( !a7 || (v18 = a7 - 1, ((unsigned int)v18 & a7) != 0) )
  {
    WdLogSingleEntry1(1LL, a7);
    WdLogGlobalForLineNumber = 1801;
    DxgkLogInternalTriageEvent(v50, 0x40000LL);
    return 3221225485LL;
  }
  v53 = 0LL;
  v58 = ~v18;
  v59 = 0LL;
  v60 = 0LL;
  v57 = (unsigned int)v18;
  if ( ((unsigned int)v18 & (unsigned int)a4) != 0 )
  {
    WdLogSingleEntry2(1LL, a4, a7);
    WdLogGlobalForLineNumber = 1811;
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
    return 3221225485LL;
  }
  v20 = a6;
  v21 = a5;
  v52 = a4;
  v53 = a3 + a4;
  v54 = a5;
  if ( !a6 )
    v20 = *((_QWORD *)this + 2);
  v55 = v20;
  v22 = 0;
  v56 = a3;
  if ( v11 && dword_14008A5DC && v15 != *((_QWORD *)this + 2) )
  {
    v23 = a3 + 4096;
    if ( a3 + 4096 < a3 || v15 + 4096 < v15 )
    {
      WdLogSingleEntry0(1LL);
      HIDWORD(v51) = 0;
      WdLogGlobalForLineNumber = 1833;
      DxgkLogInternalTriageEvent(v24, 0x40000LL);
      a3 = v56;
      v20 = v55;
      v21 = v54;
    }
    else
    {
      a3 += 4096LL;
      v56 = v23;
      v53 = v15 + 4096;
      v22 = 1;
    }
  }
  if ( v21 >= v20 || v20 - v21 < a3 )
    return 3221225485LL;
  NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, &v52);
  v26 = (__int64)NodeInFreeList;
  if ( !NodeInFreeList )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1855;
    return result;
  }
  v27 = v59;
  v28 = *((_QWORD *)NodeInFreeList + 3);
  v29 = v59 + v56;
  v61 = v59 + v56;
  if ( v28 == v59 )
  {
    if ( *((_QWORD *)NodeInFreeList + 4) - v28 == v56 )
    {
      if ( byte_14008A202 < 0 )
      {
        LODWORD(v51) = *((_DWORD *)NodeInFreeList + 18);
        McTemplateK0pqxx_EtwWriteTransfer(
          v28,
          &DestroyGpuVirtualAddressRange,
          *((_QWORD *)NodeInFreeList + 4),
          this,
          v51,
          v28,
          *((_QWORD *)NodeInFreeList + 4));
      }
      ValidateVadInFreeTree((__int64)this, v26);
      RtlAvlRemoveNode((char *)this + 48, v26);
      v30 = a8;
      *(_DWORD *)(v26 + 72) &= 0xFFFFFFF0;
      *a8 = (struct VIDMM_VAD *)v26;
      goto LABEL_56;
    }
    v31 = operator new[](24 * (v14 + 4), 0x39346956u, 256LL);
    Vad = (struct VIDMM_VAD *)v31;
    if ( v31 )
    {
      *(_QWORD *)(v31 + 24) = v27;
      *(_QWORD *)(v31 + 32) = v29;
      ValidateVadAddressRange((__int64)this, v31);
      *((_DWORD *)Vad + 18) ^= ((unsigned __int16)*((_DWORD *)Vad + 18) ^ (unsigned __int16)(16 * v14)) & 0x7F0;
      if ( v14 )
      {
        v34 = (_QWORD *)((char *)Vad + 104);
        v35 = v14;
        do
        {
          *(v34 - 1) = 0LL;
          if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
          {
            v34[1] = v34;
            *v34 = v34;
          }
          v34 += 3;
          --v35;
        }
        while ( v35 );
        v29 = v61;
      }
      v30 = a8;
      *((_QWORD *)Vad + 11) = (char *)Vad + 80;
      v36 = (_QWORD *)((char *)Vad + 40);
      *((_QWORD *)Vad + 10) = (char *)Vad + 80;
      v37 = *(_QWORD **)(v26 + 48);
      *a8 = Vad;
      if ( *v37 == v26 + 40 )
      {
        *((_QWORD *)Vad + 6) = v37;
        *v36 = v26 + 40;
        *v37 = v36;
        *(_QWORD *)(v26 + 48) = v36;
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)v26, v33);
        *(_QWORD *)(v26 + 24) = v29;
        CVirtualAddressAllocator::InsertVadToFreeList(this, (struct VIDMM_VAD *)v26, v38);
LABEL_55:
        CVirtualAddressAllocator::ValidateVadInTheOrderedList(this, Vad);
        CVirtualAddressAllocator::ValidateVadInTheOrderedList(this, (struct VIDMM_VAD *)v26);
LABEL_56:
        *((_DWORD *)*v30 + 18) = (v22 << 12) | *((_DWORD *)*v30 + 18) & 0xFFFFEFFF;
        return 0LL;
      }
      goto LABEL_57;
    }
    _InterlockedIncrement(&dword_14008A828);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1893;
  }
  else
  {
    Vad = CVirtualAddressAllocator::AllocateVad(this, v59, v59 + v56, v14);
    if ( Vad )
    {
      v40 = *(_QWORD *)(v26 + 32);
      v41 = 0LL;
      if ( v61 >= v40 || (v41 = CVirtualAddressAllocator::AllocateVad(this, v61, v40, v14)) != 0LL )
      {
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)v26, v40);
        *(_QWORD *)(v26 + 32) = v59;
        CVirtualAddressAllocator::InsertVadToFreeList(this, (struct VIDMM_VAD *)v26, v43);
        v45 = *(_QWORD *)(v26 + 40);
        v46 = (char **)(v26 + 40);
        v30 = a8;
        v47 = (char *)Vad + 40;
        *a8 = Vad;
        if ( *(_QWORD *)(v45 + 8) == v26 + 40 )
        {
          *(_QWORD *)v47 = v45;
          *((_QWORD *)Vad + 6) = v46;
          *(_QWORD *)(v45 + 8) = v47;
          *v46 = v47;
          if ( !v41 )
            goto LABEL_55;
          CVirtualAddressAllocator::InsertVadToFreeList(this, v41, v44);
          v48 = *(_QWORD *)v47;
          v49 = (_QWORD *)((char *)v41 + 40);
          if ( *(char **)(*(_QWORD *)v47 + 8LL) == v47 )
          {
            *v49 = v48;
            *((_QWORD *)v41 + 6) = v47;
            *(_QWORD *)(v48 + 8) = v49;
            *(_QWORD *)v47 = v49;
            CVirtualAddressAllocator::ValidateVadInTheOrderedList(this, v41);
            goto LABEL_55;
          }
        }
LABEL_57:
        __fastfail(3u);
      }
      _InterlockedIncrement(&dword_14008A828);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1939;
      DxgkLogInternalTriageEvent(v42, 262145LL);
      CVirtualAddressAllocator::FreeVad(this, Vad);
      return 3221225495LL;
    }
    _InterlockedIncrement(&dword_14008A828);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1926;
  }
  DxgkLogInternalTriageEvent(v39, 262145LL);
  return 3221225495LL;
}
