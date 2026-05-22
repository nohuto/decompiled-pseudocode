/*
 * XREFs of ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800E2768
 * Callers:
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801A17D0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180010B90 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180062EBC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800E2A2C (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x1801A0840 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InjectionRawInputProvider::OnInputReport(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned int SizeForPointerCount; // eax
  __int64 v9; // r8
  const char *v10; // r9
  struct InputInfo *v11; // rbp
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  bool v15; // r8
  const struct std::nothrow_t *v16; // rdx
  int v17; // eax
  int v18; // eax
  struct InputInfo *v20[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v22) = *(_DWORD *)(a2 + 40);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)(a1 + 40),
    &v23,
    (const unsigned __int8 *)&v22);
  v6 = v23;
  if ( v23 != *(_QWORD *)(a1 + 48) )
  {
    SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount((__int64)(a3[1] - *a3) >> 4);
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
      (__int64)v20,
      SizeForPointerCount,
      v9,
      v10);
    v11 = v20[0];
    v12 = InjectionRawInputProvider::PopulatePointerInputInfo(a1, *(_QWORD *)(v6 + 24), a3, a2, v20[0]);
    v7 = v12;
    if ( v12 >= 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
        (_QWORD *)(a1 + 104),
        &v22,
        *(const unsigned __int8 **)(v6 + 24));
      if ( v22 == *(_QWORD *)(a1 + 112) )
      {
        v7 = -2147418113;
        v13 = 2147549183LL;
        v14 = 186LL;
      }
      else
      {
        v17 = InputInfoValidator::OnInputReport(*(InputInfoValidator **)(v22 + 24), v11, v15);
        v7 = v17;
        if ( v17 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**(_QWORD **)(a1 + 24) + 24LL))(
                  *(_QWORD *)(a1 + 24),
                  v11);
          v7 = v18;
          if ( v18 >= 0 )
          {
            v7 = 0;
            goto LABEL_13;
          }
          v13 = (unsigned int)v18;
          v14 = 196LL;
        }
        else
        {
          v13 = (unsigned int)v17;
          v14 = 194LL;
        }
      }
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = 182LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)v13);
LABEL_13:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v20, v16);
    return v7;
  }
  v7 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
    (const char *)0x8000FFFFLL);
  return v7;
}
