/*
 * XREFs of ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880
 * Callers:
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180123010 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180125DA0 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180122D6C (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x180126CA0 (-assign@-$vector@EV-$allocator@E@std@@@std@@QEAAX_KAEBE@Z.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180126D4C (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     memcpy_s_1 @ 0x1801D7C5C (memcpy_s_1.c)
 *     ??$?0E$0A@@?$shared_ptr@$$BY0A@E@std@@QEAA@PEAE@Z @ 0x1802175FC (--$-0E$0A@@-$shared_ptr@$$BY0A@E@std@@QEAA@PEAE@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1802180FC (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x18021F088 (-GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180284E4C (-clear@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     McTemplateU0pxttt_EventWriteTransfer @ 0x180284F1C (McTemplateU0pxttt_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSynchronousSuperWetInk::PullNewPerFrameData(CSynchronousSuperWetInk *this, int a2, bool *a3)
{
  __int64 v3; // r9
  std::_Ref_count_base **v4; // r12
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // r15d
  std::_Ref_count_base *v11; // rbx
  int v12; // r15d
  __int64 v13; // rdx
  _DWORD *v14; // rsi
  unsigned __int8 v15; // r14
  unsigned __int64 LatestLookupId; // rax
  bool v17; // cf
  bool v18; // r12
  LPVOID v19; // rax
  rsize_t v20; // r9
  rsize_t v21; // rdx
  void *v22; // r13
  volatile signed __int32 *v23; // rbx
  char *v24; // rcx
  std::_Ref_count_base *v25; // rcx
  char v26; // al
  void *Destination; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-20h]
  _BYTE v29[24]; // [rsp+50h] [rbp-18h] BYREF
  int v30; // [rsp+B0h] [rbp+48h] BYREF
  int v31; // [rsp+B8h] [rbp+50h]
  bool *v32; // [rsp+C0h] [rbp+58h]
  unsigned int v33; // [rsp+C8h] [rbp+60h]

  v32 = a3;
  v31 = a2;
  v3 = *((_QWORD *)this + 27);
  v4 = (std::_Ref_count_base **)((char *)this + 264);
  *a3 = 0;
  LOBYTE(v30) = 0;
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12) * v6;
  v33 = v6;
  std::vector<unsigned char>::assign((char *)this + 264, v7, &v30);
  v8 = *((_QWORD *)this + 34);
  v9 = *((_QWORD *)this + 27);
  v10 = *((_DWORD *)this + 60);
  v30 = 0;
  v11 = *v4;
  gsl::details::extent_type<-1>::extent_type<-1>(&Destination, v8 - (_QWORD)*v4);
  if ( Destination == (void *)-1LL || !v11 && Destination )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v28 = v11;
  CSharedCircularQueue::PopAll(v9, (unsigned int)&Destination, v10, (unsigned int)&v30, (__int64)this + 240);
  v12 = v30;
  while ( 1 )
  {
    --v12;
    LODWORD(v13) = v6 - 24;
    if ( v12 < 0 )
      break;
    v14 = (_DWORD *)((char *)*v4 + v6 * v12);
    if ( v14[4] > (unsigned int)v13 )
    {
      v26 = 0;
      v15 = 0;
LABEL_32:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
        McTemplateU0pxttt_EventWriteTransfer(v15, v13, (_DWORD)this, *(_QWORD *)v14, 0, v15, v26);
      goto LABEL_24;
    }
    v15 = 0;
    if ( !*(_QWORD *)v14 )
    {
      v15 = 1;
      *((_BYTE *)this + 96) = 1;
    }
    LatestLookupId = CSynchronousSuperWetInk::GetLatestLookupId(this);
    v17 = *(_QWORD *)v14 < LatestLookupId;
    if ( *(_QWORD *)v14 < LatestLookupId )
    {
      if ( !v15 )
        goto LABEL_31;
      v17 = *(_QWORD *)v14 < LatestLookupId;
    }
    v18 = !v17;
    v19 = operator new[](v6);
    std::shared_ptr<unsigned char [0]>::shared_ptr<unsigned char [0]>(&Destination, v19);
    v20 = v6;
    v21 = v6;
    v22 = Destination;
    memcpy_s_1(Destination, v21, v14, v20);
    v23 = (volatile signed __int32 *)v28;
    v24 = (char *)this + 224;
    if ( v15 )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::clear(v24);
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, &Destination);
    }
    else
    {
      v13 = *(_QWORD *)std::map<unsigned __int64,std::shared_ptr<unsigned char [0]>>::_Try_emplace<unsigned __int64 const &,>(
                         v24,
                         v29,
                         v14);
      if ( v23 )
        _InterlockedIncrement(v23 + 2);
      *(_QWORD *)(v13 + 40) = v22;
      v25 = *(std::_Ref_count_base **)(v13 + 48);
      *(_QWORD *)(v13 + 48) = v23;
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      if ( *(_QWORD *)v14 == v31 )
      {
        if ( v23 )
          _InterlockedIncrement(v23 + 2);
        *((_QWORD *)this + 31) = v22;
        v25 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
        *((_QWORD *)this + 32) = v23;
        if ( v25 )
          std::_Ref_count_base::_Decref(v25);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        (__int64)v25,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_NEW_FROM_GUEST,
        this,
        *(_QWORD *)v14);
    *v32 = 1;
    if ( v23 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
    if ( !v18 )
    {
LABEL_31:
      v26 = 1;
      if ( v15 )
        goto LABEL_24;
      goto LABEL_32;
    }
LABEL_24:
    v6 = v33;
    v4 = (std::_Ref_count_base **)((char *)this + 264);
  }
}
