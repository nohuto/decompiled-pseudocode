/*
 * XREFs of ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180195230
 * Callers:
 *     ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801950C0 (-VisualTargetSetRoot@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::QueryResourceInterface(CChannel *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rbp
  __int64 v9; // r9
  __int64 (__fastcall ***v10)(_QWORD, const struct _GUID *, void **); // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 8);
  v6 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  v9 = *((_QWORD *)this + 2);
  if ( !(_DWORD)v6
    || v6 > (*((_QWORD *)this + 3) - v9) >> 4
    || !*(_DWORD *)(v9 + 16LL * (unsigned int)(v6 - 1))
    || !*(_DWORD *)(v9 + 16LL * (unsigned int)(v6 - 1) + 4) )
  {
    v11 = -2147024890;
    v12 = 492LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
    return v11;
  }
  *a4 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2)
                                                                          + 16LL * (unsigned int)(v6 - 1)
                                                                          + 8);
  if ( !v10 )
  {
    v11 = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80004002LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
    return v11;
  }
  v11 = (**v10)(v10, a3, a4);
  if ( (v11 & 0x80000000) != 0 )
  {
    v12 = 502LL;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  return 0LL;
}
