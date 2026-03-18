/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z @ 0x140046CDC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, __int64 a2)
{
  char v2; // si
  unsigned __int16 i; // bx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1738); ++i )
  {
    LOBYTE(a2) = v2;
    v5 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 160LL))(v5, a2);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
