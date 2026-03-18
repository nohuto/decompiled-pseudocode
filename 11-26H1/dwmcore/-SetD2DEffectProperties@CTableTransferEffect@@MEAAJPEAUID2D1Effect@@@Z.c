/*
 * XREFs of ?SetD2DEffectProperties@CTableTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180285320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTableTransferEffect::SetD2DEffectProperties(CTableTransferEffect *this, struct ID2D1Effect *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+8h] BYREF

  if ( !a2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\tabletransfereffect.cpp",
      (const char *)0x8007029CLL);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, 0LL, 0LL);
  if ( v4 < 0 )
  {
    v5 = 28LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\tabletransfereffect.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 2LL);
  if ( v4 < 0 )
  {
    v5 = 34LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 4LL);
  if ( v4 < 0 )
  {
    v5 = 40LL;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 6LL);
  if ( v4 < 0 )
  {
    v5 = 46LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 352);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         1LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 51LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 353);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         3LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 56LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 354);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         5LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 61LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 355);
  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         7LL,
         0LL,
         &v10,
         4);
  if ( v4 < 0 )
  {
    v5 = 66LL;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)this + 356);
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         8LL,
         0LL,
         &v10,
         4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\tabletransfereffect.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
