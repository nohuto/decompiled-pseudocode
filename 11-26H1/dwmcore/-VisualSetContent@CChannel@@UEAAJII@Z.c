/*
 * XREFs of ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x180117850
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualSetContent(CChannel *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rcx
  unsigned int v11; // ebx
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  v5 = a3;
  v6 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v7 = *((_QWORD *)this + 2) + 16LL * (unsigned int)(v6 - 1);
  if ( !(_DWORD)v6
    || (v8 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4, v6 > v8)
    || !*(_DWORD *)v7
    || (v9 = *(unsigned int *)(v7 + 4), !(_DWORD)v9) )
  {
LABEL_8:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x811,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v7);
  }
  while ( 1 )
  {
    if ( (unsigned int)v9 >= 0xA6 )
      goto LABEL_8;
    if ( (_DWORD)v9 == 156 )
      break;
    LODWORD(v9) = *((_DWORD *)&byte_180376D10 + v9);
  }
  if ( (_DWORD)v5 )
  {
    v10 = (_DWORD *)(*((_QWORD *)this + 2) + 16LL * (unsigned int)(v5 - 1));
    if ( v5 > v8 || !*v10 || !v10[1] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x811,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)v7);
  }
  v13[0] = 304;
  v13[1] = v6;
  v13[2] = v5;
  v11 = CChannel::SendCommand(this, v13, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v11;
}
