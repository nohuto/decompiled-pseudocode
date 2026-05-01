/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18002B6A0
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18002DFA4 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002BADC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18002BCB0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x18002BE20 (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002CD84 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?remove@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_KAEBV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18002CDDC (-remove@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRe.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002CE70 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180042F38 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x18005A398 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18005D070 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180060E54 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800709A4 (--_U@YAPEAX_K@Z.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180089AD8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        _BYTE *a8,
        int a9,
        _DWORD *a10)
{
  ExecutionModel::_ResourceInfo *v10; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // r12
  ExecutionModel::_ResourceInfo *v16; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  ExecutionModel::_ResourceInfo *i; // rdi
  __int64 v20; // rax
  _BYTE *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // xmm0_8
  int v24; // eax
  int v25; // ebx
  _BYTE *v27; // rbx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  char v33; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[7]; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE *v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-8Ch] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v42[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[1200]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = (ExecutionModel::_ResourceInfo *)v43;
  v35 = a8;
  v12 = a1;
  v13 = a3;
  v14 = 50LL;
  v36 = a1;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v10);
    v10 = (ExecutionModel::_ResourceInfo *)((char *)v10 + 24);
    --v14;
  }
  while ( v14 );
  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v42);
  v15 = v13;
  memcpy_0(v43, a4, 24 * v13);
  if ( a9 == 1 )
    goto LABEL_29;
  v34[0] = 0;
  v33 = 0;
  v16 = (ExecutionModel::_ResourceInfo *)operator new[](saturated_mul(v13, 0x18uLL));
  v17 = (__int64)v16;
  if ( !v16 )
  {
LABEL_21:
    v25 = -2147024882;
    goto LABEL_17;
  }
  v18 = v13;
  for ( i = v16; v18; --v18 )
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(i);
    i = (ExecutionModel::_ResourceInfo *)((char *)i + 24);
  }
  if ( (_DWORD)v13 )
  {
    v20 = v17;
    v21 = &v43[-v17];
    v22 = v13;
    do
    {
      v23 = *(_QWORD *)&v21[v20 + 16];
      *(_OWORD *)v20 = *(_OWORD *)&v21[v20];
      *(_QWORD *)(v20 + 16) = v23;
      v20 += 24LL;
      --v22;
    }
    while ( v22 );
  }
  v24 = ExecutionModel::BaseResourceSet::RecursiveVisit(v36, 0, v13, v17, a6, 1, v34, &v33, (__int64)v42, 0LL);
  v25 = 0;
  if ( v24 < 0 )
    v25 = v24;
  operator delete((void *)v17);
  if ( v25 < 0 )
  {
    LOBYTE(v14) = 0;
    goto LABEL_17;
  }
  if ( v33 )
  {
    v12 = v36;
  }
  else if ( a7 != 1
         || (v12 = v36,
             ExecutionModel::BaseResourceSet::CheckPoolResources(
               v36,
               v13,
               (unsigned int)v43,
               a6,
               0,
               (__int64)v34,
               (__int64)&v33,
               0LL),
             !v33) )
  {
    LOBYTE(v14) = 0;
LABEL_16:
    v25 = -2147220992;
    goto LABEL_17;
  }
  if ( v34[0]
    || (*(int (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, (unsigned int)v13, v43) < 0
    || (unsigned __int8)ExecutionModel::BaseResourceSet::HigherPriorityPending(v12, (unsigned int)v13, v43, a5) )
  {
LABEL_29:
    v27 = v35;
    LOBYTE(v14) = 1;
    if ( !v35 )
      goto LABEL_16;
  }
  else
  {
    v27 = v35;
    LOBYTE(v14) = 0;
  }
  a10[322] = a5;
  a10[2] = a6;
  if ( (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(v12 + 40, a10) < 0 )
    goto LABEL_21;
  if ( (_BYTE)v14 )
  {
    a10[320] = 1;
    if ( (_DWORD)v13 )
    {
      do
      {
        if ( *(_DWORD *)a4 <= 0x31u )
        {
          v28 = 3 * (*(int *)a4 + 3LL);
          *(_OWORD *)&a10[2 * v28] = *(_OWORD *)a4;
          *(_QWORD *)&a10[2 * v28 + 4] = a4[2];
        }
        a4 += 3;
        --v15;
      }
      while ( v15 );
    }
    ExecutionModel::BaseResourceSet::RevokeResourceList(v28, v42);
  }
  else
  {
    v33 = 0;
    v32 = a10[2];
    v34[0] = 0;
    ExecutionModel::BaseResourceSet::RecursiveVisit(v12, 1, v13, (__int64)v43, v32, 1, &v33, v34, 0LL, (__int64)a10);
    a10[320] = 2;
  }
  if ( v27 )
    *v27 = v14;
  v25 = 0;
LABEL_17:
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
  {
    v37 = a7;
    v38 = (unsigned __int8)v14;
    v39 = a6;
    v40 = a5;
    v41 = v13;
    LODWORD(v35) = v25;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v29,
      (unsigned int)&unk_1800D34F8,
      v30,
      v31,
      (__int64)&v35,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37);
  }
  if ( v25 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v35, a10);
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove(
      v36 + 40,
      &v35);
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(&v35);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a10 + 32LL))(a10);
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v42);
  return (unsigned int)v25;
}
