/*
 * XREFs of ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffect::UpdateBitmaps(CBrushRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // r15
  __int64 v9; // rsi
  bool v10; // r13
  char *v11; // r12
  int v12; // ecx
  int v13; // eax
  void *v14; // r9
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, char *); // r13
  int v19; // esi
  __int64 v20; // rdx
  void (__fastcall *v21)(__int64, bool, _QWORD, void *, int, char *); // [rsp+40h] [rbp-58h]
  _BYTE v22[16]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(*((_QWORD *)this + 2) + 260LL);
  while ( 1 )
  {
    if ( (unsigned int)v5 >= v6 )
      return 0LL;
    v8 = 24 * v5;
    if ( !*((_QWORD *)this + 3 * v5 + 4) )
      goto LABEL_18;
    v9 = *(_QWORD *)((char *)this + v8 + 24);
    if ( v9 )
    {
      v10 = *((_QWORD *)a2 + 5) && !*((_BYTE *)g_pComposition + 6458);
      v21 = *(void (__fastcall **)(__int64, bool, _QWORD, void *, int, char *))(*(_QWORD *)v9 + 48LL);
      v11 = *((_BYTE *)a2 + 184) ? (char *)a2 + 156 : 0LL;
      v12 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 3) + 8LL)
                                                                            + 24LL))(
                          *((_QWORD *)a2 + 3) + 8LL,
                          v22,
                          0LL)
                      + 8);
      v13 = *((_DWORD *)a2 + 72);
      v14 = v13 ? (void *)(*((_QWORD *)a2 + 35) + 68LL * (unsigned int)(v13 - 1)) : &CMILMatrix::Identity;
      v21(v9, v10, 0LL, v14, v12, v11);
      v15 = *(__int64 **)((char *)this + v8 + 24);
      v16 = *(_QWORD *)((char *)this + v8 + 32);
      v17 = *v15;
      *(_QWORD *)((char *)this + v8 + 32) = 0LL;
      v18 = *(__int64 (__fastcall **)(__int64 *, char *))(v17 + 64);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v19 = v18(v15, (char *)this + v8 + 32);
      if ( v19 < 0 )
        break;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, __int64))(**(_QWORD **)((char *)this + v8 + 32)
                                                                               + 96LL))(
            *(_QWORD *)((char *)this + v8 + 32),
            a2,
            v2);
    if ( v19 < 0 )
    {
      v20 = 99LL;
      goto LABEL_20;
    }
    v2 = 0LL;
LABEL_18:
    v5 = (unsigned int)(v5 + 1);
  }
  v20 = 94LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)(unsigned int)v19);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xF0u, 0LL);
  return (unsigned int)v19;
}
