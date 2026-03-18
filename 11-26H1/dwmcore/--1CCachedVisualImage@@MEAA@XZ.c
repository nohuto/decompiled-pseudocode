/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x18009B48C
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18009B440 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1801AF2EC (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x18009B5E8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  v3 = 0LL;
  v4 = *(_DWORD *)(v1 + 5928);
  v5 = *(_QWORD *)(v1 + 5904);
  if ( v4 )
  {
    do
    {
      if ( this == *(CCachedVisualImage **)(v5 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
  if ( (unsigned int)v3 < v4 )
  {
    if ( (unsigned int)v3 < v4 - 1 )
    {
      do
      {
        v7 = (unsigned int)(v3 + 1);
        *(_QWORD *)(v5 + 8 * v3) = *(_QWORD *)(v5 + 8 * v7);
        v3 = v7;
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v1 + 5928) - 1 );
    }
    --*(_DWORD *)(v1 + 5928);
  }
  operator delete(*((void **)this + 18), 0x44uLL);
  COcclusionContext::~COcclusionContext((CCachedVisualImage *)((char *)this + 192));
  v6 = *((_QWORD *)this + 21);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(v6, *((_QWORD *)this + 22));
    std::_Deallocate<16>(
      *((_QWORD *)this + 21),
      (*((_QWORD *)this + 23) - *((_QWORD *)this + 21)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 20);
  CResource::~CResource(this);
}
