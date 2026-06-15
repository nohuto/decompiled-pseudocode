/*
 * XREFs of ??1SpatialAudioFormatSubtypeInfo@@QEAA@XZ @ 0x180091CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18015409C (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 */

void __fastcall SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo(SpatialAudioFormatSubtypeInfo *this)
{
  SpatialAudioAppDetails *v2; // rcx

  v2 = (SpatialAudioAppDetails *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(v2);
    std::_Deallocate<16>(
      *((void **)this + 2),
      (struct std::nothrow_t *)((*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 1);
}
