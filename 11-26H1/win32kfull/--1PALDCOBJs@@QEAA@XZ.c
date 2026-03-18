/*
 * XREFs of ??1PALDCOBJs@@QEAA@XZ @ 0x14028F578
 * Callers:
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x140256060 (NtGdiResizePalette.c)
 * Callees:
 *     ?_Uninit@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ @ 0x14028F5C8 (-_Uninit@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ.c)
 */

void __fastcall PALDCOBJs::~PALDCOBJs(PALDCOBJs *this)
{
  __int64 v1; // rdx
  __int64 i; // rax

  v1 = *((_QWORD *)this + 5);
  for ( i = *((_QWORD *)this + 4); i != v1; i += 8LL )
  {
    if ( *(_QWORD *)i != *((_QWORD *)this + 7) )
      _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)i + 12LL));
  }
  utl::vector<DC *,GreAllocator<DC *,1886221383>>::_Uninit();
  PopThreadGuardedObject(this);
}
