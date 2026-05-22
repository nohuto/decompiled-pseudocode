/*
 * XREFs of ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800262D8
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800264C0 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x1800445D8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$unordered_map@IIU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA@XZ @ 0x18004D9AC (--0-$unordered_map@IIU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@QE.c)
 *     ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18006DF80 (-OnSystemContextNotification@GestureServices@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18006FBB4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1800800D0 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180085480 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ??0?$unordered_map@_KV?$shared_ptr@VGestureHandler@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180087A1C (--0-$unordered_map@_KV-$shared_ptr@VGestureHandler@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$alloc.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180092B40 (--4-$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvi.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=14
GestureServices *__fastcall GestureServices::GestureServices(
        GestureServices *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  _QWORD *v3; // rax
  struct KernelContextProvider *Instance; // rax
  struct InputConfigContextProvider *v5; // rax
  int v6; // eax
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)this = &BamoGestureServicesPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoGestureServicesPrincipal::`vftable'{for `IGestureServicesPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((GestureServices *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoGestureServicesPrincipalImpl::`vftable';
  *(_QWORD *)this = &GestureServices::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &GestureServices::`vftable'{for `IGestureServicesPrincipal'};
  *((_QWORD *)this + 7) = &GestureServices::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  std::unordered_map<unsigned int,unsigned int>::unordered_map<unsigned int,unsigned int>((char *)this + 136);
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(40LL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 26) = v3;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 7LL;
  *((_QWORD *)this + 32) = 8LL;
  *((_DWORD *)this + 50) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 28,
    0x10uLL,
    *((_QWORD *)this + 26));
  std::unordered_map<unsigned __int64,std::shared_ptr<GestureHandler>>::unordered_map<unsigned __int64,std::shared_ptr<GestureHandler>>((char *)this + 264);
  Instance = KernelContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<InputConfigContextProvider>::operator=((char *)this + 96, Instance);
  v5 = InputConfigContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<InputConfigContextProvider>::operator=((char *)this + 104, v5);
  v6 = SystemContextProvider::RegisterSystemContextObserver(
         *((SystemContextProvider **)this + 13),
         (GestureServices *)((char *)this + 56));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)(unsigned int)v6,
      v9[0]);
  v10 = 0;
  if ( (int)InputConfigContextProvider::GetCurrentContext(*((_QWORD *)this + 13), v9) >= 0 )
  {
    v7 = GestureServices::OnSystemContextNotification((char *)this + 56, v9);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\"
                      "gestureservices.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
  }
  if ( v10 != -1LL && v10 && v10 != 1LL )
  {
    if ( v10 == 2LL )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v9);
    }
    else if ( v10 == 3LL )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v9);
    }
  }
  return this;
}
