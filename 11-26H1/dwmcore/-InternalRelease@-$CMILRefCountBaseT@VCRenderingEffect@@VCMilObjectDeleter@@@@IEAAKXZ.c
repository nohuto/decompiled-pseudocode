/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18009D970
 * Callers:
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18009D77C (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18009D7F0 (--_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease(volatile signed __int32 *a1)
{
  int v2; // edi
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = _InterlockedDecrement(a1 + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v4);
  if ( !v2 )
  {
    if ( _InterlockedAdd(a1 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v4);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 88LL))(a1);
    v2 = _InterlockedDecrement(a1 + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v4);
    if ( !v2 )
    {
      if ( _InterlockedDecrement(a1 + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v4);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 80LL))(a1, 1LL);
    }
  }
  return (unsigned int)v2;
}
