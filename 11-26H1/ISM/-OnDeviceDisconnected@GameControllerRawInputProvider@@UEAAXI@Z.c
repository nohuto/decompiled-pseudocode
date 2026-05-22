/*
 * XREFs of ?OnDeviceDisconnected@GameControllerRawInputProvider@@UEAAXI@Z @ 0x1800CDA70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameControllerRawInputProvider::OnDeviceDisconnected(GameControllerRawInputProvider *this, int a2)
{
  _DWORD *i; // rbx
  __int64 v3; // r8
  _QWORD *v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (_DWORD *)*((_QWORD *)this + 9); i != (_DWORD *)((char *)this + 72); i = *(_DWORD **)i )
  {
    v3 = *(_QWORD *)i;
    if ( i[4] == a2 )
    {
      v4 = (_QWORD *)*((_QWORD *)i + 1);
      if ( *(_DWORD **)(v3 + 8) != i || (_DWORD *)*v4 != i )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      --*((_DWORD *)this + 22);
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(char *), _DWORD *, __int64))(**((_QWORD **)this + 5)
                                                                                                + 152LL))(
             *((_QWORD *)this + 5),
             GameControllerRawInputProvider::DeviceRemovalCallback,
             i,
             4LL);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x18D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
          (const char *)(unsigned int)v5);
        operator delete(i, (const struct std::nothrow_t *)0x20);
      }
      return;
    }
  }
}
