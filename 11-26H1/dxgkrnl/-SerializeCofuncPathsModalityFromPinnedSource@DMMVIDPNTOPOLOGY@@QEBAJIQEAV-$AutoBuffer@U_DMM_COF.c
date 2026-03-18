/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x140265170
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025E388 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140006E54 (-Initialize@-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14004AE84 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004BD5C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x14005EE30 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x140067D80 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140267B28 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140386274 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int NumPathsFromSource; // eax
  unsigned int v8; // ebx
  DMMVIDPN *Container; // rax
  DMMVIDPNTARGET *SourceFromId; // rax
  unsigned __int64 v11; // rax
  DMMVIDPNPRESENTPATH *v12; // rbx
  DMMVIDPNTARGET *v13; // rcx
  struct DMMVIDPNTARGETMODESET *v14; // rax
  DMMVIDPNTARGETMODESET *v15; // rbx
  int v16; // eax
  size_t v17; // rbx
  DMMVIDPNTARGETMODESET *v18; // rax
  __int64 v19; // r12
  int v20; // eax
  DMMVIDPNPRESENTPATH *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rax
  int v26; // eax
  unsigned __int8 v27; // dl
  __int64 v28; // rbx
  unsigned __int8 v29; // di
  unsigned __int8 *v30; // r8
  unsigned __int8 *v31; // rsi
  _QWORD *v32; // rax
  _BYTE *v33; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-51h]
  void **v36; // [rsp+40h] [rbp-49h] BYREF
  void **v37; // [rsp+48h] [rbp-41h] BYREF
  int v38; // [rsp+50h] [rbp-39h]
  _QWORD v39[2]; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-21h]
  int v41; // [rsp+70h] [rbp-19h]
  __int64 v42; // [rsp+78h] [rbp-11h]
  DMMVIDPNPRESENTPATH *Path; // [rsp+80h] [rbp-9h]
  void **v44; // [rsp+88h] [rbp-1h] BYREF
  __int128 v45; // [rsp+90h] [rbp+7h]
  void **v46; // [rsp+A0h] [rbp+17h]
  void *Src; // [rsp+A8h] [rbp+1Fh]
  size_t Size; // [rsp+B0h] [rbp+27h]
  __int64 v49; // [rsp+B8h] [rbp+2Fh]
  struct DMMVIDPNTARGETMODESET *v50; // [rsp+100h] [rbp+77h] BYREF
  DMMVIDPNTARGETMODESET *v51; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( a3 )
  {
    if ( a3[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1556;
    }
    v34 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v3, &v34);
    v8 = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      WdLogSingleEntry2(7LL, v3, this);
      result = 3223192377LL;
      WdLogGlobalForLineNumber = 1566;
    }
    else
    {
      if ( NumPathsFromSource >= 0 )
      {
        Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        SourceFromId = DMMVIDPN::GetSourceFromId(Container, v3);
        v50 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
        if ( !*((_QWORD *)v50 + 18) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1583;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
        v38 = 0;
        v36 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v40 = 0LL;
        v37 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        v39[1] = v39;
        v39[0] = v39;
        v11 = 0LL;
        v41 = 2;
        v42 = 0LL;
        while ( 1 )
        {
          v35 = v11;
          if ( v11 >= v34 )
            break;
          LODWORD(v50) = -1;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v3, v11, (unsigned int *)&v50) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1602;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, (int)v50);
          v12 = Path;
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1611;
          }
          Src = 0LL;
          v44 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          Size = 0LL;
          v46 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v45 = 0LL;
          v49 = 256LL;
          v13 = (DMMVIDPNTARGET *)*((_QWORD *)v12 + 12);
          v51 = 0LL;
          v14 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v13);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, (__int64)v14);
          v15 = v51;
          if ( !v51 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1623;
          }
          if ( *((_QWORD *)v15 + 18) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1627;
          }
          v16 = DMMVIDPNTARGETMODESET::Serialize(v15);
          v8 = v16;
          if ( v16 < 0 )
          {
            WdLogSingleEntry4(2LL, v3, (unsigned int)v50, this, v16);
            WdLogGlobalForLineNumber = 1636;
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
            goto LABEL_32;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
          v17 = Size;
          v18 = (DMMVIDPNTARGETMODESET *)operator new(0x38uLL, 0x4E506456u, 256LL);
          v19 = (__int64)v18;
          if ( !v18 )
          {
            v51 = 0LL;
            WdLogSingleEntry3(6LL, 56LL, v3, (unsigned int)v50);
            WdLogGlobalForLineNumber = 1660;
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
            v8 = -1073741801;
            goto LABEL_32;
          }
          *((_QWORD *)v18 + 1) = 0LL;
          *((_QWORD *)v18 + 2) = 0LL;
          *(_QWORD *)v18 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          *((_QWORD *)v18 + 4) = 0LL;
          *((_QWORD *)v18 + 5) = 0LL;
          *((_QWORD *)v18 + 3) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          *((_QWORD *)v18 + 6) = 256LL;
          v51 = v18;
          v20 = DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::Initialize(v18, v17 + 360);
          v8 = v20;
          if ( v20 < 0 )
          {
            WdLogSingleEntry4(2LL, v3, (unsigned int)v50, this, v20);
            WdLogGlobalForLineNumber = 1677;
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
LABEL_32:
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v44);
            goto LABEL_55;
          }
          v21 = Path;
          if ( *((_DWORD *)Path + 28) != 254 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1689;
          }
          if ( *((_DWORD *)v21 + 29) != 254 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1690;
          }
          DMMVIDPNPRESENTPATH::Serialize(v21, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v19 + 32));
          memmove((void *)(*(_QWORD *)(v19 + 32) + 360LL), Src, Size);
          v51 = 0LL;
          Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v36, v19);
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
          DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v44);
          v11 = v35 + 1;
        }
        v22 = 1LL;
        v23 = 0LL;
        if ( v40 > 1 )
          v22 = v40;
        v24 = 4 * v22 + 4;
        if ( (_QWORD *)v39[0] != v39 )
          v23 = v39[0] - 8LL;
        while ( v23 )
        {
          v25 = *(_QWORD **)(v23 + 8);
          v24 += *(_QWORD *)(v23 + 40);
          v23 = (__int64)(v25 - 1);
          if ( v25 == v39 )
            v23 = 0LL;
        }
        v26 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a3, v24);
        v8 = v26;
        if ( v26 >= 0 )
        {
          v27 = 1;
          v28 = 0LL;
          v29 = 0;
          *(_BYTE *)a3[4] = v40;
          v30 = (unsigned __int8 *)a3[4];
          if ( *v30 > 1u )
            v27 = *v30;
          v31 = &v30[4 * v27 + 4];
          if ( (_QWORD *)v39[0] != v39 )
            v28 = v39[0] - 8LL;
          while ( 1 )
          {
            v33 = (_BYTE *)a3[4];
            if ( !v28 )
              break;
            *(_DWORD *)&v33[4 * v29 + 4] = (_DWORD)v31 - *((_DWORD *)a3 + 8);
            memmove(v31, *(const void **)(v28 + 32), *(_QWORD *)(v28 + 40));
            v31 += *(_QWORD *)(v28 + 40);
            v32 = *(_QWORD **)(v28 + 8);
            v28 = (__int64)(v32 - 1);
            if ( v32 == v39 )
              v28 = 0LL;
            ++v29;
          }
          if ( v29 != *v33 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1773;
          }
          v8 = 0;
        }
        else
        {
          WdLogSingleEntry4(2LL, a3, v3, this, v26);
          WdLogGlobalForLineNumber = 1733;
        }
LABEL_55:
        v36 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v37 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v37);
      }
      else
      {
        WdLogSingleEntry3(2LL, v3, this, NumPathsFromSource);
        WdLogGlobalForLineNumber = 1573;
      }
      return v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1550;
  }
  return result;
}
