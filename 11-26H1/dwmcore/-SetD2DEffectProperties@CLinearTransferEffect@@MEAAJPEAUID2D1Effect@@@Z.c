/*
 * XREFs of ?SetD2DEffectProperties@CLinearTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18027A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearTransferEffect::SetD2DEffectProperties(CLinearTransferEffect *this, struct ID2D1Effect *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v10; // [rsp+50h] [rbp+20h] BYREF

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\lineartransfereffect.cpp",
      (const char *)0x8007029CLL);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 352,
         4);
  if ( v4 < 0 )
  {
    v5 = 21LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\lineartransfereffect.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         1LL,
         0LL,
         (char *)this + 356,
         4);
  if ( v4 < 0 )
  {
    v5 = 26LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 360);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         2LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 31LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         3LL,
         0LL,
         (char *)this + 364,
         4);
  if ( v4 < 0 )
  {
    v5 = 36LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         4LL,
         0LL,
         (char *)this + 368,
         4);
  if ( v4 < 0 )
  {
    v5 = 41LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 372);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         5LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 46LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         6LL,
         0LL,
         (char *)this + 376,
         4);
  if ( v4 < 0 )
  {
    v5 = 51LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         7LL,
         0LL,
         (char *)this + 380,
         4);
  if ( v4 < 0 )
  {
    v5 = 56LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 384);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         8LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 61LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         9LL,
         0LL,
         (char *)this + 388,
         4);
  if ( v4 < 0 )
  {
    v5 = 66LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         10LL,
         0LL,
         (char *)this + 392,
         4);
  if ( v4 < 0 )
  {
    v5 = 71LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 396);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         11LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 76LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 397);
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         12LL,
         0LL,
         &v10,
         4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\lineartransfereffect.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
