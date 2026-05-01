/*
 * XREFs of ?CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180667604
 * Callers:
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x180667738 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x180671D54 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateFileSystemBindData(const struct _GUID *a1, void **a2)
{
  unsigned int v3; // edi
  char *v4; // rbx

  *a2 = 0LL;
  v3 = -2147024882;
  v4 = (char *)operator new(0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &CFileSysBindData::`vftable';
    memset_0(v4 + 40, 0, 0x250uLL);
    *((_QWORD *)v4 + 2) = 0LL;
    *(_OWORD *)(v4 + 24) = xmmword_1807A9A20;
    v3 = (**(__int64 (__fastcall ***)(void *, GUID *, void **))v4)(v4, &GUID_01e18d10_4d8b_11d2_855d_006008059367, a2);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
