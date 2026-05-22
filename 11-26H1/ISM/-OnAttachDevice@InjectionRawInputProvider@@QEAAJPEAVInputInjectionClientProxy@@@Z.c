/*
 * XREFs of ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E262C
 * Callers:
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801A17D0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18008A840 (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x1800B9940 (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$emplace@AEAKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@1@@Z @ 0x1800E1AB8 (--$emplace@AEAKV-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValidator@@@std@@@.c)
 *     ??$emplace@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAI$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800E1C54 (--$emplace@IV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@@-.c)
 *     ??1?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@QEAA@XZ @ 0x1800E20E8 (--1-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValidator@@@std@@@std@@QEAA@XZ.c)
 *     ??0InputInfoValidator@@QEAA@XZ @ 0x1801A0774 (--0InputInfoValidator@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InjectionRawInputProvider::OnAttachDevice(
        InjectionRawInputProvider *this,
        struct InputInjectionClientProxy *a2)
{
  int v5; // eax
  unsigned __int8 *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  InputInfoValidator *v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  InputInfoValidator *v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int8 *v13; // [rsp+68h] [rbp+38h] BYREF
  InputInfoValidator *v14; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v12) = *((_DWORD *)a2 + 10);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 5,
    &v13,
    (const unsigned __int8 *)&v12);
  if ( v13 == *((unsigned __int8 **)this + 6) )
  {
    std::make_unique<LegacyDeviceInfo,,0>(&v13);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
    v6 = v13;
    *(_DWORD *)v13 = v5;
    *((_DWORD *)v6 + 1) = 8;
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, InjectionRawInputProvider *))(**((_QWORD **)this + 3)
                                                                                           + 40LL))(
           *((_QWORD *)this + 3),
           v6,
           this);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (InputInfoValidator *)RefCountedObject::operator new(0x50uLL);
      v12 = v9;
      if ( v9 )
        v9 = InputInfoValidator::InputInfoValidator(v9);
      v14 = v9;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>::emplace<unsigned long &,std::unique_ptr<InputInfoValidator>>(
        (float *)this + 26,
        (__int64)v10,
        v6,
        (__int64 *)&v14);
      LODWORD(v12) = *((_DWORD *)a2 + 10);
      std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::emplace<unsigned int,std::unique_ptr<LegacyDeviceInfo>>(
        (float *)this + 10,
        (__int64)v10,
        (unsigned __int8 *)&v12,
        (__int64 *)&v13);
      std::unique_ptr<InputInfoValidator>::~unique_ptr<InputInfoValidator>((__int64 *)&v14);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
        (const char *)(unsigned int)v7);
    }
    std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>((void **)&v13);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
