/*
 * XREFs of ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMM_N@Z @ 0x180117B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::RectangleGeometrySetRectangle(
        CChannel *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        bool a15)
{
  __int64 v15; // rbx
  unsigned __int64 v17; // rdi
  const char *v18; // r9
  _DWORD *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  int v22; // r14d
  int v23; // eax
  unsigned int v24; // edi
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-60h] BYREF
  int v28; // [rsp+24h] [rbp-5Ch]
  float v29; // [rsp+28h] [rbp-58h]
  _DWORD v30[10]; // [rsp+30h] [rbp-50h] BYREF
  bool v31; // [rsp+58h] [rbp-28h]
  __int16 v32; // [rsp+59h] [rbp-27h]
  char v33; // [rsp+5Bh] [rbp-25h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v15 = *((_QWORD *)this + 8);
  v17 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
  v19 = (_DWORD *)(*((_QWORD *)this + 2) + 16LL * (unsigned int)(v17 - 1));
  if ( !(_DWORD)v17
    || v17 > (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4
    || !*v19
    || (v20 = (unsigned int)v19[1], !(_DWORD)v20) )
  {
LABEL_8:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x811,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v18);
  }
  while ( 1 )
  {
    if ( (unsigned int)v20 >= 0xA6 )
      goto LABEL_8;
    if ( (_DWORD)v20 == 103 )
      break;
    LODWORD(v20) = *((_DWORD *)&byte_180376D10 + v20);
  }
  v30[0] = 239;
  v33 = 0;
  *(float *)&v30[2] = a7;
  *(float *)&v30[3] = a8;
  *(float *)&v30[4] = a9;
  *(float *)&v30[5] = a10;
  *(float *)&v30[6] = a11;
  *(float *)&v30[7] = a12;
  *(float *)&v30[8] = a13;
  *(float *)&v30[9] = a14;
  v30[1] = v17;
  v31 = a15;
  v32 = 256;
  v21 = CChannel::SendCommand(this, v30, 0x2Cu);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x471,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v21);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
    return (unsigned int)v22;
  }
  v27 = 237;
  v29 = a3;
  v28 = v17;
  v22 = CChannel::SendCommand(this, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 1144LL;
    goto LABEL_16;
  }
  v27 = 242;
  v29 = a4;
  v28 = v17;
  v22 = CChannel::SendCommand(this, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 1151LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v22);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
    return (unsigned int)v22;
  }
  v27 = 240;
  v29 = a5;
  v28 = v17;
  v22 = CChannel::SendCommand(this, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 1158LL;
    goto LABEL_16;
  }
  v27 = 236;
  v29 = a6;
  v28 = v17;
  v23 = CChannel::SendCommand(this, &v27, 0xCu);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
    return v24;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
    return 0LL;
  }
}
