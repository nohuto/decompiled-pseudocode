/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C54C
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002C380 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18002BCB0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x18002BE20 (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002CD84 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002CE70 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002D384 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18005D070 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180060E54 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x180089608 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180089AD8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::_ResourceInfo *v2; // rbx
  __int64 v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v15[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v16[3]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v17[1136]; // [rsp+98h] [rbp-70h] BYREF

  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v15);
  v2 = (ExecutionModel::_ResourceInfo *)v17;
  v3 = 47LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v2);
    v2 = (ExecutionModel::_ResourceInfo *)((char *)v2 + 24);
    --v3;
  }
  while ( v3 );
  if ( *((_DWORD *)this + 4) == 1 )
  {
    ExecutionModel::ResourceSet::ProcessPendingRequestList(*(struct _RM_SERVICE_GLOBALS **)(*((_QWORD *)this + 3) + 128LL));
  }
  else
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 5); i != (_QWORD *)((char *)this + 40); i = (_QWORD *)*i )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v14, i[2]);
      if ( *(_DWORD *)(v14 + 1280) == 1 && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(v15, v14) < 0 )
      {
        ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(&v14);
        goto LABEL_23;
      }
      ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(&v14);
    }
    v5 = (_QWORD *)v15[0];
    if ( (_QWORD *)v15[0] != v15 )
    {
      while ( v5 != v15 )
      {
        v6 = v5[2];
        utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v16);
        v7 = v6 + 144;
        LOWORD(v13) = 0;
        v8 = v17;
        v9 = 8LL;
        do
        {
          v10 = *(_OWORD *)v7;
          v7 += 128LL;
          *(_OWORD *)v8 = v10;
          v8 += 128;
          *((_OWORD *)v8 - 7) = *(_OWORD *)(v7 - 112);
          *((_OWORD *)v8 - 6) = *(_OWORD *)(v7 - 96);
          *((_OWORD *)v8 - 5) = *(_OWORD *)(v7 - 80);
          *((_OWORD *)v8 - 4) = *(_OWORD *)(v7 - 64);
          *((_OWORD *)v8 - 3) = *(_OWORD *)(v7 - 48);
          *((_OWORD *)v8 - 2) = *(_OWORD *)(v7 - 32);
          *((_OWORD *)v8 - 1) = *(_OWORD *)(v7 - 16);
          --v9;
        }
        while ( v9 );
        *(_OWORD *)v8 = *(_OWORD *)v7;
        *((_OWORD *)v8 + 1) = *(_OWORD *)(v7 + 16);
        *((_OWORD *)v8 + 2) = *(_OWORD *)(v7 + 32);
        *((_OWORD *)v8 + 3) = *(_OWORD *)(v7 + 48);
        *((_OWORD *)v8 + 4) = *(_OWORD *)(v7 + 64);
        *((_OWORD *)v8 + 5) = *(_OWORD *)(v7 + 80);
        *((_QWORD *)v8 + 12) = *(_QWORD *)(v7 + 96);
        if ( (int)ExecutionModel::BaseResourceSet::CheckResourceAvailability(
                    (_DWORD)this,
                    47,
                    (unsigned int)v17,
                    *(_DWORD *)(v6 + 8),
                    *(_DWORD *)(v6 + 1288),
                    1,
                    (__int64)&v13 + 1,
                    (__int64)&v13,
                    (__int64)v16) < 0 )
        {
          utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v16);
          break;
        }
        if ( (_BYTE)v13 )
        {
          if ( BYTE1(v13) )
          {
            ExecutionModel::BaseResourceSet::RevokeResourceList(v11, v16);
          }
          else
          {
            LOWORD(v13) = 0;
            ExecutionModel::BaseResourceSet::RecursiveVisit(
              (__int64)this,
              1,
              0x2Fu,
              (__int64)v17,
              *(_DWORD *)(v6 + 8),
              1,
              &v13,
              (_BYTE *)&v13 + 1,
              0LL,
              v6);
            v12 = (*(_BYTE *)(v6 + 1352) & 2) == 0;
            *(_DWORD *)(v6 + 1280) = 2;
            if ( v12 )
              ExecutionModel::ExternalResourceSet::QueueMessage(v6, 0LL);
          }
        }
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v16);
        v5 = (_QWORD *)*v5;
      }
    }
  }
LABEL_23:
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v15);
}
