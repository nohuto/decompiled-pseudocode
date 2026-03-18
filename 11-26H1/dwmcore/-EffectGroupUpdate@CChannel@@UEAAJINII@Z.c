/*
 * XREFs of ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x180117970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::EffectGroupUpdate(CChannel *this, unsigned int a2, double a3, int a4, float a5)
{
  __int64 v5; // rbx
  unsigned __int64 v8; // r14
  const char *v9; // r9
  _DWORD *v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rax
  float v15; // xmm0_4
  int v16; // eax
  int v17; // edi
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+24h] [rbp-1Ch]
  float v22; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v5 = *((_QWORD *)this + 8);
  v8 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  v10 = (_DWORD *)(*((_QWORD *)this + 2) + 16LL * (unsigned int)(v8 - 1));
  if ( !(_DWORD)v8
    || (v11 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4, v8 > v11)
    || !*v10
    || (v12 = (unsigned int)v10[1], !(_DWORD)v12) )
  {
LABEL_9:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x811,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v9);
  }
  v9 = &byte_180376D10;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= 0xA6 )
      goto LABEL_9;
    if ( (_DWORD)v12 == 48 )
      break;
    LODWORD(v12) = *((_DWORD *)&byte_180376D10 + v12);
  }
  if ( a5 != 0.0 )
  {
    v13 = (_DWORD *)(*((_QWORD *)this + 2) + 16LL * (unsigned int)(LODWORD(a5) - 1));
    if ( LODWORD(a5) <= v11 )
    {
      if ( *v13 )
      {
        v14 = (unsigned int)v13[1];
        if ( (_DWORD)v14 )
        {
          while ( (unsigned int)v14 < 0xA6 )
          {
            if ( (_DWORD)v14 == 148 )
              goto LABEL_18;
            LODWORD(v14) = *((_DWORD *)&byte_180376D10 + v14);
          }
        }
      }
    }
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x811,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      &byte_180376D10);
  }
LABEL_18:
  v20 = 441;
  v21 = v8;
  v15 = a3;
  v22 = v15;
  v16 = CChannel::SendCommand(this, &v20, 0xCu);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  }
  else
  {
    v20 = 442;
    v21 = v8;
    v22 = *(float *)&a4;
    v17 = CChannel::SendCommand(this, &v20, 0xCu);
    if ( v17 < 0 )
    {
      v19 = 1519LL;
    }
    else
    {
      v20 = 443;
      v21 = v8;
      v22 = a5;
      v17 = CChannel::SendCommand(this, &v20, 0xCu);
      if ( v17 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
        return 0LL;
      }
      v19 = 1526LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  }
  return (unsigned int)v17;
}
