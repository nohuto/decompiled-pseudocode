/*
 * XREFs of ?v_PushBoundsToAppView@LegacyWindowWrapper@@EEAAXXZ @ 0x180421D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyWindowWrapper::v_PushBoundsToAppView(LegacyWindowWrapper *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  int v4; // eax
  int v5[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((float *)this + 155) != *((float *)this + 122)
    || *((float *)this + 156) != *((float *)this + 123)
    || *((float *)this + 157) != *((float *)this + 124)
    || *((float *)this + 158) != *((float *)this + 125) )
  {
    v2 = *(_OWORD *)((char *)this + 488);
    v3 = *((_QWORD *)this + 76);
    *(_QWORD *)&v5[2] = *((_QWORD *)&v2 + 1);
    v5[0] = 0;
    v5[1] = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 56LL))(v3, v5);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
        (const char *)(unsigned int)v4,
        v5[0]);
    *(_OWORD *)((char *)this + 620) = *(_OWORD *)((char *)this + 488);
  }
}
