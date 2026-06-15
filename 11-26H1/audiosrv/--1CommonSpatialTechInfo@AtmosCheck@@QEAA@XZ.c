/*
 * XREFs of ??1CommonSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x180154D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18015409C (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 */

void __fastcall AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo(AtmosCheck::CommonSpatialTechInfo *this)
{
  SpatialAudioAppDetails *v2; // rcx

  v2 = (SpatialAudioAppDetails *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(v2, *((SpatialAudioAppDetails **)this + 5));
    std::_Deallocate<16>(
      *((void **)this + 4),
      (struct std::nothrow_t *)((*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 3);
}
