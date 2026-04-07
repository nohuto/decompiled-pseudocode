/*
 * XREFs of ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18006314C
 * Callers:
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18003A0DC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x180063470 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EB10C (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDWriteText::CreateTextLayout(CDWriteText *this)
{
  char *v2; // rbx
  char *v3; // rsi
  int TextFormat; // ebx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, char *, __int64, _QWORD); // rbp
  char *v8; // rdx
  char *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v16; // rdx
  float v17; // [rsp+20h] [rbp-68h]
  _QWORD v18[2]; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+54h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (char *)this + 316;
  v3 = (char *)this + 224;
  if ( memcmp_0((char *)this + 224, (char *)this + 316, 0x5CuLL) )
  {
    *(_OWORD *)v2 = *(_OWORD *)v3;
    *((_OWORD *)v2 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)v2 + 2) = *((_OWORD *)v3 + 2);
    *((_OWORD *)v2 + 3) = *((_OWORD *)v3 + 3);
    *((_OWORD *)v2 + 4) = *((_OWORD *)v3 + 4);
    *((_QWORD *)v2 + 10) = *((_QWORD *)v3 + 10);
    *((_DWORD *)v2 + 22) = *((_DWORD *)v3 + 22);
    TextFormat = CDWriteText::CreateTextFormat(this);
    if ( TextFormat < 0 )
    {
      v16 = 342LL;
      goto LABEL_18;
    }
  }
  TextFormat = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 40LL))(
                 *((_QWORD *)this + 22),
                 1LL);
  if ( TextFormat < 0 )
  {
    v16 = 346LL;
    goto LABEL_18;
  }
  if ( *((_BYTE *)this + 424) )
  {
    TextFormat = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 48LL))(
                   *((_QWORD *)this + 22),
                   1LL);
    if ( TextFormat < 0 )
    {
      v16 = 351LL;
      goto LABEL_18;
    }
  }
  if ( *((_BYTE *)this + 425) )
  {
    TextFormat = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 24LL))(
                   *((_QWORD *)this + 22),
                   1LL);
    if ( TextFormat < 0 )
    {
      v16 = 356LL;
      goto LABEL_18;
    }
  }
  v5 = *((_QWORD *)this + 9);
  v18[1] = v5;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v7 = *(__int64 (__fastcall **)(__int64, char *, __int64, _QWORD))(*(_QWORD *)v6 + 144LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
  v8 = (char *)this + 192;
  v9 = (char *)this + 192;
  if ( *((_QWORD *)this + 27) > 7uLL )
    v9 = *(char **)v8;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&v9[2 * v10] );
  if ( *((_QWORD *)this + 27) > 7uLL )
    v8 = *(char **)v8;
  v17 = (float)(int)v5;
  TextFormat = v7(v6, v8, v10, *((_QWORD *)this + 22));
  if ( TextFormat < 0 )
  {
    v16 = 368LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)TextFormat,
      SLODWORD(v17));
    return (unsigned int)TextFormat;
  }
  v18[0] = 0LL;
  v11 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v12 = *v11;
  v18[0] = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v12 + 160))(v11, *((_QWORD *)this + 22), v18);
  TextFormat = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v13,
      SLODWORD(v17));
    if ( v18[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
    return (unsigned int)TextFormat;
  }
  v19 = 1;
  v20 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD))(**((_QWORD **)this + 23) + 72LL))(
          *((_QWORD *)this + 23),
          &v19,
          v18[0]);
  TextFormat = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v14,
      SLODWORD(v17));
    if ( v18[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
    return (unsigned int)TextFormat;
  }
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  return 0LL;
}
