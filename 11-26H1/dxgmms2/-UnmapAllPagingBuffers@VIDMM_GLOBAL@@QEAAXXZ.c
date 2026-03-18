/*
 * XREFs of ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011677C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapAllPagingBuffers(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v5; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + i + 80);
    if ( (*(_DWORD *)(v3 + 36) & 4) != 0 )
    {
      v4 = *(_QWORD **)(v3 + 88);
      while ( v4 != (_QWORD *)(v3 + 88) )
      {
        v5 = (_QWORD *)v4[6];
        v4 = (_QWORD *)*v4;
        if ( v5 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 16) + 368LL))(*(_QWORD *)(v3 + 16), *v5);
      }
      *(_DWORD *)(v3 + 36) &= ~4u;
    }
  }
  *((_DWORD *)this + 10022) = 0;
}
