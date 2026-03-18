/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180227190
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A4AF4 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002BD0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800925C0 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?FindKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEBAHAEBI@Z @ 0x1800A7A88 (-FindKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEBAHAEBI@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800A860C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800A8838 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D7B84 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x180226DB0 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z @ 0x180226F70 (-FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180227848 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // r8d
  struct MCCollections *v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdi
  char *v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // r15
  int Key; // eax
  unsigned int v15; // r13d
  __int64 v16; // r14
  struct CInteraction *v17; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  struct CInteraction *i; // rbx
  const struct CVisual *VisualNoRef; // rax
  bool *v21; // rdx
  struct _LUID v22; // rbx
  unsigned __int8 v23; // r14
  __int64 *v24; // rcx
  __int64 v25; // rax
  struct CDesktopTree *v26; // rbx
  struct CVisual *v27; // rax
  __int64 v28; // r15
  struct CInteraction *v29; // rbx
  const struct CVisual *v30; // rax
  bool *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // r10d
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // r8
  __int64 j; // rcx
  CManipulationContext **v46; // [rsp+20h] [rbp-E0h]
  struct _LUID *v47; // [rsp+28h] [rbp-D8h]
  struct _LUID v48; // [rsp+50h] [rbp-B0h] BYREF
  CManipulationContext *v49; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-98h]
  struct CDesktopTree *v51; // [rsp+70h] [rbp-90h] BYREF
  CManipulationContext *v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  struct MCCollections *v56; // [rsp+98h] [rbp-68h]
  struct CInteraction *v57; // [rsp+A0h] [rbp-60h] BYREF
  CManipulationContext *v58; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+B0h] [rbp-50h] BYREF
  CManipulationContext **v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  CManipulationContext **v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  struct _LUID *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]

  v2 = 0;
  v56 = a2;
  v3 = a2;
  if ( *((int *)this + 18) > 0 )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(v5 + *((_QWORD *)this + 8));
      if ( v6 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 224);
          *(_QWORD *)(v6 + 216) = v7;
          v6 = v7;
        }
        while ( v7 );
      }
      v8 = *((_DWORD *)this + 18);
      ++v2;
      v5 += 8LL;
    }
    while ( v2 < v8 );
    v9 = 0;
    v50 = 0;
    if ( v8 > 0 )
    {
      v10 = 0LL;
      v11 = (char *)v3 + 40;
      v12 = 0LL;
      v55 = 0LL;
      v54 = 0LL;
      v13 = (_QWORD *)((char *)this + 56);
      while ( 1 )
      {
        LODWORD(v49) = *(_DWORD *)(v12 + *v13);
        Key = CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::FindKey(
                (__int64)v11,
                &v49);
        v15 = Key == -1 ? 2 : *(_DWORD *)(*((_QWORD *)v3 + 6) + 4LL * Key);
        v53 = *(_QWORD *)(v10 + *((_QWORD *)this + 8));
        v16 = v53;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v53);
        v17 = *(struct CInteraction **)(v16 + 208);
        if ( v17 )
        {
          do
          {
            ClosestInteractionAncestor = v17;
            v17 = (struct CInteraction *)*((_QWORD *)v17 + 26);
          }
          while ( v17 );
          v48 = (struct _LUID)ClosestInteractionAncestor;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v48);
          CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
            v13,
            v9,
            &v49,
            &v48);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
        }
        else
        {
          ClosestInteractionAncestor = (struct CInteraction *)v16;
        }
        if ( CInteraction::GetVisualNoRef(ClosestInteractionAncestor) )
        {
          for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(
                                                         VisualNoRef,
                                                         v21) )
          {
            if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
            {
              v48 = (struct _LUID)i;
              v47 = &v48;
              v49 = this;
              v46 = &v49;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                (__int64)&dword_1803DC880,
                (__int64)&unk_1803B0785);
            }
            *((_BYTE *)i + 200) |= 0x80u;
            VisualNoRef = CInteraction::GetVisualNoRef(i);
          }
        }
        else
        {
          ClosestInteractionAncestor = 0LL;
          v48 = 0LL;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v48);
          CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
            v13,
            v9,
            &v49,
            &v48);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
        }
        v22 = (struct _LUID)v16;
        if ( v16 )
        {
          do
          {
            if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
            {
              v48 = v22;
              v47 = &v48;
              v49 = this;
              v46 = &v49;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                (__int64)&dword_1803DC880,
                (__int64)&unk_1803B0839);
            }
            *(_BYTE *)(*(_QWORD *)&v22 + 201LL) |= 1u;
            v22 = *(struct _LUID *)(*(_QWORD *)&v22 + 216LL);
          }
          while ( v22 );
        }
        if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
        {
          v48 = (struct _LUID)v16;
          v64 = &v48;
          v49 = ClosestInteractionAncestor;
          v62 = &v49;
          v52 = this;
          v60 = &v52;
          v65 = 8LL;
          v63 = 8LL;
          v61 = 8LL;
          tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803DC880, byte_1803B07D7, 0LL, 0LL, 5u, &v59);
        }
        if ( ClosestInteractionAncestor != (struct CInteraction *)v16 )
          CManipulationContext::CleanStaleFork((__int64)this, v15, v16);
        v23 = 0;
        if ( ClosestInteractionAncestor )
          break;
LABEL_64:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
        v12 = v54 + 4;
        v9 = v50 + 1;
        v3 = v56;
        v10 = v55 + 8;
        v8 = *((_DWORD *)this + 18);
        v50 = v9;
        v54 += 4LL;
        v55 += 8LL;
        v11 = (char *)v56 + 40;
        if ( (int)v9 >= v8 )
          goto LABEL_65;
      }
      while ( 1 )
      {
        v48 = 0LL;
        CManipulationContext::FindDesktopTree(v56, ClosestInteractionAncestor, &v48);
        v24 = (__int64 *)*((_QWORD *)this + 5);
        v25 = *v24;
        v51 = 0LL;
        (*(void (__fastcall **)(__int64 *, struct _LUID, struct CDesktopTree **))(v25 + 64))(v24, v48, &v51);
        v26 = v51;
        if ( v51 )
        {
          v27 = CInteraction::GetVisualNoRef(ClosestInteractionAncestor);
          CManipulationContext::OnVisualPropertyChange(v27, v26);
        }
        if ( *((_DWORD *)ClosestInteractionAncestor + 51) == 2 )
          v23 = 1;
        CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor);
        if ( v23 && (*((_BYTE *)ClosestInteractionAncestor + 200) & 0x10) != 0 )
          (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)ClosestInteractionAncestor + 9) + 80LL))(
            (__int64)ClosestInteractionAncestor + 72,
            v15,
            0LL);
        v28 = *((_QWORD *)ClosestInteractionAncestor + 27);
        v29 = ClosestInteractionAncestor;
        v30 = CInteraction::GetVisualNoRef(ClosestInteractionAncestor);
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v30, v31);
        if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
        {
          LODWORD(v49) = v23;
          v52 = v29;
          v48 = (struct _LUID)v28;
          v57 = ClosestInteractionAncestor;
          v58 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            v32,
            byte_1803B0704,
            v33,
            v34,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v48,
            (__int64)&v52,
            (__int64)&v49);
        }
        if ( (struct CInteraction *)v28 != ClosestInteractionAncestor )
          break;
        if ( ClosestInteractionAncestor )
          goto LABEL_56;
LABEL_62:
        *((_BYTE *)v29 + 200) &= ~0x80u;
        *((_BYTE *)v29 + 201) &= ~1u;
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v51);
        if ( !ClosestInteractionAncestor )
        {
          v13 = (_QWORD *)((char *)this + 56);
          goto LABEL_64;
        }
      }
      v35 = *((_QWORD *)v29 + 29);
      if ( v35 )
        *(_QWORD *)(v35 + 240) = *((_QWORD *)v29 + 30);
      v36 = *((_QWORD *)v29 + 30);
      if ( v36 )
        *(_QWORD *)(v36 + 232) = *((_QWORD *)v29 + 29);
      v37 = *((_QWORD *)v29 + 28);
      if ( v37 && *(struct CInteraction **)(v37 + 248) == v29 )
        *(_QWORD *)(v37 + 248) = *((_QWORD *)v29 + 29);
      *((_QWORD *)v29 + 30) = 0LL;
      *((_QWORD *)v29 + 29) = 0LL;
      *((_QWORD *)v29 + 28) = 0LL;
      CManipulationContext::CleanStaleFork((__int64)this, v15, v28);
      if ( !ClosestInteractionAncestor )
        goto LABEL_62;
      *((_QWORD *)v29 + 29) = *((_QWORD *)ClosestInteractionAncestor + 31);
      v38 = *((_QWORD *)ClosestInteractionAncestor + 31);
      if ( v38 )
        *(_QWORD *)(v38 + 240) = v29;
      *((_QWORD *)ClosestInteractionAncestor + 31) = v29;
      *((_QWORD *)v29 + 28) = ClosestInteractionAncestor;
LABEL_56:
      if ( (*((_BYTE *)ClosestInteractionAncestor + 201) & 1) == 0 )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v40) = v41 & *((_BYTE *)this + 28);
          LOBYTE(v39) = v41;
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, CManipulationContext **, struct _LUID *))(*((_QWORD *)ClosestInteractionAncestor + 9) + 40LL))(
            (__int64)ClosestInteractionAncestor + 72,
            v39,
            v40,
            v15,
            v46,
            v47);
          v41 = 1;
        }
        v42 = (int)v15 - 1LL;
        if ( v15 - 1 >= 6 )
          v42 = 0LL;
        *((_DWORD *)ClosestInteractionAncestor + v42 + 64) += v41;
      }
      goto LABEL_62;
    }
LABEL_65:
    v43 = 0;
    if ( v8 > 0 )
    {
      v44 = 0LL;
      do
      {
        for ( j = *(_QWORD *)(v44 + *((_QWORD *)this + 8)); j; j = *(_QWORD *)(j + 224) )
          *(_QWORD *)(j + 216) = 0LL;
        ++v43;
        v44 += 8LL;
      }
      while ( v43 < *((_DWORD *)this + 18) );
    }
  }
}
