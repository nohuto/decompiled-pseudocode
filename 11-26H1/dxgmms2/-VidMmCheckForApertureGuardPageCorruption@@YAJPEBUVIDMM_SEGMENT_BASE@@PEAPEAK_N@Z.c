/*
 * XREFs of ?VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z @ 0x14004F898
 * Callers:
 *     ?ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAJ_N@Z @ 0x14004F640 (-ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAJ_N@Z.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1400A3890 (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEBAJPEAPEAK_N@Z @ 0x140050D08 (-CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEBAJPEAPEAK_N@Z.c)
 */

__int64 __fastcall VidMmCheckForApertureGuardPageCorruption(
        const struct VIDMM_SEGMENT_BASE *a1,
        unsigned int **a2,
        bool a3)
{
  if ( (*((_DWORD *)a1 + 14) & 1) != 0 )
    return VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(
             (VIDMM_APERTURE_SEGMENT *)(((unsigned __int64)a1 - 8) & -(__int64)(a1 != 0LL)),
             a2,
             a3);
  else
    return 0LL;
}
