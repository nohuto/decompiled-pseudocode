/*
 * XREFs of ??1CTextureCollection@@MEAA@XZ @ 0x1802B1544
 * Callers:
 *     ??_ECTextureCollection@@MEAAPEAXI@Z @ 0x1802B1610 (--_ECTextureCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTextureCollection::~CTextureCollection(CTextureCollection *this)
{
  __int64 *v2; // rcx

  *(_QWORD *)this = &CTextureCollection::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CTextureCollection::`vftable'{for `IDeviceResourceNotify'};
  v2 = (__int64 *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 22));
    std::_Deallocate<16>(
      *((void **)this + 21),
      (*((_QWORD *)this + 23) - *((_QWORD *)this + 21)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  CCachedTexture::~CCachedTexture(this);
}
