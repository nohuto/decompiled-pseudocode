/*
 * XREFs of ?RemoveResourceOwner@CGraphicsDeviceManager@@QEAAXPEAVCGraphicsResourceOwner@@@Z @ 0x18005DD08
 * Callers:
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CGraphicsDeviceManager::RemoveResourceOwner(
        CGraphicsDeviceManager *this,
        struct CGraphicsResourceOwner *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 120) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      a4);
  v4 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
}
