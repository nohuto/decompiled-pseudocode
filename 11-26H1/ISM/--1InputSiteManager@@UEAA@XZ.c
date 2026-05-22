/*
 * XREFs of ??1InputSiteManager@@UEAA@XZ @ 0x180132F30
 * Callers:
 *     ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x180132FD0 (--_GInputSiteManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180061A40 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800666AC (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAX.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall InputSiteManager::~InputSiteManager(InputSiteManager *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9

  v2 = (__int64 *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(v2, *((__int64 **)this + 11));
    std::_Deallocate<16>(
      *((void **)this + 10),
      (struct std::nothrow_t *)((*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v3,
    v4,
    v5);
}
