/*
 * XREFs of ??1?$com_ptr_t@VCSecondarySysmemBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F56DC
 * Callers:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x1800F55C8 (--1CD2DBitmapCache@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F5710 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CSecondarySysmemBitmap,wil::err_returncode_policy>::~com_ptr_t<CSecondarySysmemBitmap,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease();
  return result;
}
