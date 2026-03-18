/*
 * XREFs of ??1?$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009582C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262ED8 (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180093CC0 (-Delete@CResource@@IEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>::~com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>(
        CResource **a1)
{
  CResource *v1; // rdi
  __int64 v2; // rbx
  int v3; // esi
  int v4; // esi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((_QWORD *)v1 + 2);
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)v1 + 2));
      EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 16));
    }
    v3 = _InterlockedDecrement((volatile signed __int32 *)v1 + 2);
    if ( v3 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    if ( !v3 )
    {
      if ( _InterlockedAdd((volatile signed __int32 *)v1 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      (*(void (__fastcall **)(CResource *))(*(_QWORD *)v1 + 40LL))(v1);
      v4 = _InterlockedDecrement((volatile signed __int32 *)v1 + 2);
      if ( v4 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      if ( !v4 )
      {
        if ( _InterlockedDecrement((volatile signed __int32 *)v1 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v5);
        CResource::Delete(v1);
      }
    }
    if ( v2 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 16));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
