/*
 * XREFs of ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801613C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffect::UpdateBitmaps(CCommonRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 v2; // r8
  __int64 i; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14
  bool v8; // r12
  void (__fastcall *v9)(__int64, bool, _QWORD, void *, int, char *); // r13
  char *v10; // r15
  int v11; // ecx
  int v12; // eax
  void *v13; // r9
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64 *, char *); // r12
  int v18; // r14d
  __int64 v20; // rdx
  _BYTE v21[16]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
      return 0LL;
    v6 = 24 * i;
    if ( !*((_QWORD *)this + 3 * i + 3) )
      continue;
    v7 = *(_QWORD *)((char *)this + v6 + 16);
    if ( v7 )
    {
      v8 = *((_QWORD *)a2 + 5) && !*((_BYTE *)g_pComposition + 6458);
      v9 = *(void (__fastcall **)(__int64, bool, _QWORD, void *, int, char *))(*(_QWORD *)v7 + 48LL);
      v10 = *((_BYTE *)a2 + 184) ? (char *)a2 + 156 : 0LL;
      v11 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 3) + 8LL)
                                                                            + 24LL))(
                          *((_QWORD *)a2 + 3) + 8LL,
                          v21,
                          0LL)
                      + 8);
      v12 = *((_DWORD *)a2 + 72);
      v13 = v12 ? (void *)(*((_QWORD *)a2 + 35) + 68LL * (unsigned int)(v12 - 1)) : &CMILMatrix::Identity;
      v9(v7, v8, 0LL, v13, v11, v10);
      v14 = *(__int64 **)((char *)this + v6 + 16);
      v15 = *(_QWORD *)((char *)this + v6 + 24);
      v16 = *v14;
      *(_QWORD *)((char *)this + v6 + 24) = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64 *, char *))(v16 + 64);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v18 = v17(v14, (char *)this + v6 + 24);
      if ( v18 < 0 )
        break;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, __int64))(**(_QWORD **)((char *)this + v6 + 24)
                                                                               + 96LL))(
            *(_QWORD *)((char *)this + v6 + 24),
            a2,
            v2);
    if ( v18 < 0 )
    {
      v20 = 99LL;
      goto LABEL_20;
    }
    v2 = 0LL;
  }
  v20 = 94LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)(unsigned int)v18);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x9Eu, 0LL);
  return (unsigned int)v18;
}
