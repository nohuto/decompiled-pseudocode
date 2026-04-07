/*
 * XREFs of ?AddResourceOwner@CGraphicsDeviceManager@@QEAAXPEAVCGraphicsResourceOwner@@@Z @ 0x1800278B4
 * Callers:
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CGraphicsDeviceManager::AddResourceOwner(
        CGraphicsDeviceManager *this,
        struct CGraphicsResourceOwner *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 120) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x170,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      a4);
  v5 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v6 = (_QWORD *)((char *)this + 96);
  v7 = *((_QWORD *)this + 12);
  if ( *(CGraphicsDeviceManager **)(v7 + 8) != (CGraphicsDeviceManager *)((char *)this + 96) )
    __fastfail(3u);
  *v5 = v7;
  v5[1] = v6;
  *(_QWORD *)(v7 + 8) = v5;
  *v6 = v5;
}
