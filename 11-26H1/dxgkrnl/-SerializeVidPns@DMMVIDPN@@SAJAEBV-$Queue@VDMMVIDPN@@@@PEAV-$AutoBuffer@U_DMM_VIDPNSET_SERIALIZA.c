/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x140266F84
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14004AE84 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x140067D80 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140384CA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int8 v17; // dl
  __int64 v18; // rbx
  unsigned __int8 v19; // di
  unsigned __int8 *v20; // r8
  unsigned __int8 *v21; // rsi
  _QWORD *v22; // rax
  _BYTE *v23; // rax
  void **v24; // [rsp+20h] [rbp-40h] BYREF
  void **v25; // [rsp+28h] [rbp-38h] BYREF
  int v26; // [rsp+30h] [rbp-30h]
  _QWORD v27[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-18h]
  int v29; // [rsp+50h] [rbp-10h]
  __int64 v30; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v31)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 896;
    }
    v26 = 0;
    v24 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = a1 + 24;
    v6 = *(_QWORD *)(a1 + 24);
    v25 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v28 = 0LL;
    v27[1] = v27;
    v7 = 0LL;
    v29 = 2;
    v27[0] = v27;
    if ( v6 != a1 + 24 )
      v7 = v6 - 8;
    v30 = 0LL;
    while ( v7 )
    {
      v8 = operator new(0x38uLL, 0x4E506456u, 256LL);
      v9 = v8;
      if ( !v8 )
      {
        v31 = 0LL;
        WdLogSingleEntry2(6LL, 56LL, v7);
        WdLogGlobalForLineNumber = 912;
        v11 = -1073741801;
        goto LABEL_16;
      }
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_QWORD *)v8 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      *(_QWORD *)(v8 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_QWORD *)(v8 + 48) = 256LL;
      v31 = (__int64 (__fastcall ***)(_QWORD, __int64))v8;
      v10 = DMMVIDPN::Serialize(v7, v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(2LL, v7, v10);
        WdLogGlobalForLineNumber = 925;
LABEL_16:
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v31);
        goto LABEL_39;
      }
      v31 = 0LL;
      Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v24, v9);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v31);
      v12 = *(_QWORD *)(v7 + 8);
      v7 = v12 - 8;
      if ( v12 == v5 )
        v7 = 0LL;
    }
    v13 = 1LL;
    v14 = 0LL;
    if ( v28 > 1 )
      v13 = v28;
    v15 = 4 * v13 + 4;
    if ( (_QWORD *)v27[0] != v27 )
      v14 = v27[0] - 8LL;
    while ( v14 )
    {
      v16 = *(_QWORD **)(v14 + 8);
      v15 += *(_QWORD *)(v14 + 40);
      v14 = (__int64)(v16 - 1);
      if ( v16 == v27 )
        v14 = 0LL;
    }
    v11 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v15);
    if ( v11 >= 0 )
    {
      v17 = 1;
      v18 = 0LL;
      v19 = 0;
      *(_BYTE *)a2[4] = v28;
      v20 = (unsigned __int8 *)a2[4];
      if ( *v20 > 1u )
        v17 = *v20;
      v21 = &v20[4 * v17 + 4];
      if ( (_QWORD *)v27[0] != v27 )
        v18 = v27[0] - 8LL;
      while ( 1 )
      {
        v23 = (_BYTE *)a2[4];
        if ( !v18 )
          break;
        *(_DWORD *)&v23[4 * v19 + 4] = (_DWORD)v21 - *((_DWORD *)a2 + 8);
        memmove(v21, *(const void **)(v18 + 32), *(_QWORD *)(v18 + 40));
        v21 += *(_QWORD *)(v18 + 40);
        v22 = *(_QWORD **)(v18 + 8);
        v18 = (__int64)(v22 - 1);
        if ( v22 == v27 )
          v18 = 0LL;
        ++v19;
      }
      if ( v19 != *v23 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 997;
      }
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 961;
    }
LABEL_39:
    v24 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v25 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v25);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 890;
  }
  return result;
}
