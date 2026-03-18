/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025D2C0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14004AE84 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x140067D80 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1400966A0 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned __int8 v16; // dl
  __int64 v17; // rbx
  unsigned __int8 v18; // di
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // r14
  _QWORD *v21; // rax
  _BYTE *v22; // rax
  void **v23; // [rsp+20h] [rbp-40h] BYREF
  void **v24; // [rsp+28h] [rbp-38h] BYREF
  int v25; // [rsp+30h] [rbp-30h]
  _QWORD v26[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v30)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6620;
    }
    v25 = 0;
    v23 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = *(_QWORD *)(a1 + 24);
    v24 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v27 = 0LL;
    v26[1] = v26;
    v6 = 0LL;
    v28 = 2;
    v26[0] = v26;
    if ( v5 != a1 + 24 )
      v6 = v5 - 8;
    v29 = 0LL;
    while ( v6 )
    {
      v7 = operator new(0x38uLL, 0x4E506456u, 256LL);
      v8 = v7;
      if ( !v7 )
      {
        v30 = 0LL;
        WdLogSingleEntry2(6LL, 56LL, v6);
        WdLogGlobalForLineNumber = 6636;
        v10 = -1073741801;
        goto LABEL_16;
      }
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_QWORD *)v7 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      *(_QWORD *)(v7 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      *(_QWORD *)(v7 + 40) = 0LL;
      *(_QWORD *)(v7 + 48) = 256LL;
      v30 = (__int64 (__fastcall ***)(_QWORD, __int64))v7;
      v9 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v6, (_QWORD *)v7);
      v10 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry2(2LL, v6, v9);
        WdLogGlobalForLineNumber = 6649;
LABEL_16:
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v30);
        goto LABEL_39;
      }
      v30 = 0LL;
      Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v23, v8);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v30);
      v11 = *(_QWORD *)(v6 + 8);
      v6 = v11 - 8;
      if ( v11 == a1 + 24 )
        v6 = 0LL;
    }
    v12 = 1LL;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v12 = *(_QWORD *)(a1 + 40);
    v14 = 28 * v12 - 20;
    if ( (_QWORD *)v26[0] != v26 )
      v13 = v26[0] - 8LL;
    while ( v13 )
    {
      v15 = *(_QWORD **)(v13 + 8);
      v14 += *(_QWORD *)(v13 + 40);
      v13 = (__int64)(v15 - 1);
      if ( v15 == v26 )
        v13 = 0LL;
    }
    v10 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v14);
    if ( v10 >= 0 )
    {
      v16 = 1;
      v17 = 0LL;
      v18 = 0;
      *(_BYTE *)a2[4] = v27;
      v19 = (unsigned __int8 *)a2[4];
      if ( *v19 > 1u )
        v16 = *v19;
      v20 = &v19[4 * v16 + 4];
      if ( (_QWORD *)v26[0] != v26 )
        v17 = v26[0] - 8LL;
      while ( 1 )
      {
        v22 = (_BYTE *)a2[4];
        if ( !v17 )
          break;
        *(_DWORD *)&v22[4 * v18 + 4] = (_DWORD)v20 - *((_DWORD *)a2 + 8);
        memmove(v20, *(const void **)(v17 + 32), *(_QWORD *)(v17 + 40));
        v20 += *(_QWORD *)(v17 + 40);
        v21 = *(_QWORD **)(v17 + 8);
        v17 = (__int64)(v21 - 1);
        if ( v21 == v26 )
          v17 = 0LL;
        ++v18;
      }
      if ( v18 != *v22 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6726;
      }
      v10 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6685;
    }
LABEL_39:
    v23 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v24 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v24);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6614;
  }
  return result;
}
