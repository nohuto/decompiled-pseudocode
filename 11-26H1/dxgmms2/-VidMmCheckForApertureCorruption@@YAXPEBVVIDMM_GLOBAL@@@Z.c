/*
 * XREFs of ?VidMmCheckForApertureCorruption@@YAXPEBVVIDMM_GLOBAL@@@Z @ 0x140028A3C
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmCheckForApertureCorruption(const struct VIDMM_GLOBAL *a1, __int64 a2)
{
  unsigned __int16 i; // bx
  __int64 v4; // rcx

  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
  {
    for ( i = 0; (unsigned int)i < *((_DWORD *)a1 + 1738); ++i )
    {
      LOBYTE(a2) = 1;
      v4 = *(_QWORD *)(*((_QWORD *)a1 + 5040) + 8LL * i);
      if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 160LL))(v4, a2) < 0 )
        break;
    }
  }
}
