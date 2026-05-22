/*
 * XREFs of ??1CompliantHapticInterface@@QEAA@XZ @ 0x180188840
 * Callers:
 *     ??1TouchpadHapticDevice@@UEAA@XZ @ 0x1801888F8 (--1TouchpadHapticDevice@@UEAA@XZ.c)
 *     _TouchpadHapticDevice::TouchpadHapticDevice_::_1_::dtor$1 @ 0x1801DC283 (_TouchpadHapticDevice--TouchpadHapticDevice_--_1_--dtor$1.c)
 *     _MouseHapticDevice::MouseHapticDevice_::_1_::dtor$1 @ 0x1801DC391 (_MouseHapticDevice--MouseHapticDevice_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800E772C (--1-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePrepars.c)
 *     ??1?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801887C4 (--1-$_Tree@V-$_Tmap_traits@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@U-$less@.c)
 *     ??1HapticsSupport@@QEAA@XZ @ 0x1801888B0 (--1HapticsSupport@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CompliantHapticInterface::~CompliantHapticInterface(CompliantHapticInterface *this, __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx

  v2 = (char *)this + 464;
  v4 = (char *)*((_QWORD *)this + 65);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v2 + 7) = 0LL;
  }
  std::_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>::~_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>((void **)this + 56);
  HapticsSupport::~HapticsSupport((CompliantHapticInterface *)((char *)this + 16));
  wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>((struct _HIDP_PREPARSED_DATA **)this + 1);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this);
}
