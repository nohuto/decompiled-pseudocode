/*
 * XREFs of ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F8100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180068C78 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1864 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F785C (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Prox.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F7A00 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x1800F8E70 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemCursorController2::AttachApplication2(
        std::_Ref_count_base **this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoCustomCursorControllerClient2Proxy *a3)
{
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // kr00_8
  std::_Ref_count_base *v6; // rax
  std::_Ref_count_base *v7; // rdi
  float *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-30h]
  _QWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int PeerId; // [rsp+60h] [rbp+8h] BYREF
  void (__fastcall ***v21)(_QWORD); // [rsp+70h] [rbp+18h] BYREF
  void *v22; // [rsp+78h] [rbp+20h]

  v21 = (void (__fastcall ***)(_QWORD))a3;
  try
  {
    if ( this[10] )
    {
      PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6) + 16LL));
      if ( SystemCursorController2::IsApplicationPeer((SystemCursorController2 *)this, PeerId) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          72LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x8000FFFFLL,
          v15);
      v4 = (__int64)this[10] - 8;
      v5 = this[10];
      v6 = this[11];
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v15 = v4 & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64);
      v16 = this[11];
      v22 = operator new(0x70uLL);
      v7 = (std::_Ref_count_base *)std::_Ref_count_obj2<CustomCursorApplication2>::_Ref_count_obj2<CustomCursorApplication2>(
                                     (__int64)v22,
                                     &v15,
                                     (int *)&PeerId,
                                     &v21);
      v17[0] = (char *)v7 + 16;
      v17[1] = v7;
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      v8 = (float *)(*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this[10] + 96LL))(this[10]);
      std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
        v8,
        (__int64)v18,
        (unsigned __int8 *)&PeerId);
      v9 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v15, v17);
      v11 = *v9;
      *v9 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 24) = v11;
      v12 = v9[1];
      v9[1] = *(_QWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 32) = v12;
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8);
      if ( v13 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          85LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v13,
          v15);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      (const char *)v10);
  }
  return 0LL;
}
