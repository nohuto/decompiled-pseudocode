/*
 * XREFs of ??$?0_K@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@H$0?0@gsl@@QEAA@PEAH_K@Z @ 0x180059FD0
 * Callers:
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180058540 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005A170 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B0D84 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
        gsl::details *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = 5LL;
  *((_QWORD *)a1 + 1) = a2;
  if ( !a2 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x180059FF2LL);
  }
  return a1;
}
