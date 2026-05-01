/*
 * XREFs of ?v_PushBoundsToAppView@LegacyWindowWrapper@@EEAAXXZ @ 0x18042D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyWindowWrapper::v_PushBoundsToAppView(LegacyWindowWrapper *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  int v4; // eax
  int v5[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((float *)this + 151) != *((float *)this + 118)
    || *((float *)this + 152) != *((float *)this + 119)
    || *((float *)this + 153) != *((float *)this + 120)
    || *((float *)this + 154) != *((float *)this + 121) )
  {
    v2 = *(_OWORD *)((char *)this + 472);
    v3 = *((_QWORD *)this + 74);
    *(_QWORD *)&v5[2] = *((_QWORD *)&v2 + 1);
    *(_QWORD *)v5 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 56LL))(v3, v5);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
        (const char *)(unsigned int)v4,
        v5[0]);
    *(_OWORD *)((char *)this + 604) = *(_OWORD *)((char *)this + 472);
  }
}
