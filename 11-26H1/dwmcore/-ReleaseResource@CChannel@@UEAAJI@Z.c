/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180192E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  v4 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  v5 = *((_QWORD *)this + 2);
  if ( (_DWORD)v4
    && v4 <= (*((_QWORD *)this + 3) - v5) >> 4
    && (v6 = *(_DWORD *)(v5 + 16LL * (unsigned int)(v4 - 1))) != 0
    && *(_DWORD *)(v5 + 16LL * (unsigned int)(v4 - 1) + 4) )
  {
    v7 = v6 - 1;
    *(_DWORD *)(v5 + 16LL * (unsigned int)(v4 - 1)) = v7;
    if ( !v7 )
    {
      v8 = (__int64 *)*((_QWORD *)this + 8);
      v9 = *(_QWORD *)(v5 + 16LL * (unsigned int)(v4 - 1) + 8);
      v10 = *v8;
      *(_QWORD *)(v5 + 16LL * (unsigned int)(v4 - 1) + 8) = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64))(v10 + 64))(v8, v9);
      v11 = *((_QWORD *)this + 2);
      *(_DWORD *)(v11 + 16LL * (unsigned int)(v4 - 1) + 4) = 0;
      v12 = *(_QWORD *)(v11 + 16LL * (unsigned int)(v4 - 1) + 8);
      *(_QWORD *)(v11 + 16LL * (unsigned int)(v4 - 1) + 8) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      --*((_QWORD *)this + 5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    return 2147942487LL;
  }
}
