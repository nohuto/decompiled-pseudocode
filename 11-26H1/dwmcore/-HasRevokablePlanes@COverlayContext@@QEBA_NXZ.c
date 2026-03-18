/*
 * XREFs of ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180188360
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HasRevokablePlanes(COverlayContext *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = *((_QWORD *)this + 1586);
  v2 = *((_QWORD *)this + 1587);
  while ( 1 )
  {
    if ( v1 == v2 )
      return 0;
    if ( !*(_DWORD *)(v1 + 348)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 16) + 152LL))(*(_QWORD *)(v1 + 16)) )
    {
      break;
    }
    v1 += 392LL;
  }
  return 1;
}
