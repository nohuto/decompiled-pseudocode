/*
 * XREFs of ??1?$com_ptr_t@VCWarpRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180184E90
 * Callers:
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18000FC50 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  int v2; // edi
  int v3; // edi
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = _InterlockedDecrement(v1 + 2);
    if ( v2 < -1 )
      result = wil::details::in1diag3::Log_Hr(
                 retaddr,
                 (void *)0x26,
                 (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                 (const char *)0x8007029CLL,
                 v5);
    if ( !v2 )
    {
      if ( _InterlockedAdd(v1 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 88LL))(v1);
      v3 = _InterlockedDecrement(v1 + 2);
      if ( v3 < -1 )
        result = wil::details::in1diag3::Log_Hr(
                   retaddr,
                   (void *)0x26,
                   (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                   (const char *)0x8007029CLL,
                   v5);
      if ( !v3 )
      {
        if ( _InterlockedDecrement(v1 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v5);
        return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 80LL))(v1, 1LL);
      }
    }
  }
  return result;
}
