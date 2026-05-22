/*
 * XREFs of ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18019C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_ @ 0x1800B99A8 (_lambda_cc14c4b3090cc7c63243ed8c77095553_--_lambda_cc14c4b3090cc7c63243ed8c77095553_.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::operator() @ 0x18019BAC4 (_lambda_cc14c4b3090cc7c63243ed8c77095553_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MouseProcessor::OnInputReport(MouseProcessor *this, struct InputInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // r11
  struct InputInfo *v6; // rcx
  _DWORD *v7; // rbx
  int v8; // eax
  char v9; // al
  __int64 v10; // r11
  int v11; // r9d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // r11
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct InputInfo *v18; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 != 4096 )
  {
    v2 = -2147024809;
    v3 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v18 = a2;
  lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(
    v16,
    (__int64)&v18,
    (__int64)this - 24);
  v6 = v18;
  v7 = (_DWORD *)(v5 + 72);
  v8 = *((_DWORD *)v18 + 25);
  if ( (*((_BYTE *)v18 + 90) & 1) != 0 )
  {
    *v7 = v8;
    *(_DWORD *)(v5 + 76) = *((_DWORD *)v6 + 26);
  }
  else
  {
    *(_DWORD *)(v5 + 80) = v8;
    *(_DWORD *)(v5 + 84) = *((_DWORD *)v6 + 26);
  }
  v9 = *((_BYTE *)v6 + 112);
  *(_BYTE *)(v5 + 92) = v9;
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v16, v9 != 0 ? 32 : 16, 1, 2);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v16, *(_BYTE *)(v10 + 92) != 0 ? 16 : 32, 4, 8);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v16, v11 + 56, v11 + 8, v12 + 28);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v16, v13 + 112, v13 + 48, v13 + 112);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v16, 256, 256, 512);
  v15 = *(_QWORD *)(v14 + 1696);
  if ( v15 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct InputInfo *))(*(_QWORD *)v15 + 24LL))(v15, v7, v18);
    if ( v2 < 0 )
    {
      v3 = 224LL;
      goto LABEL_3;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct InputInfo *))(*(_QWORD *)(v14 - 16) + 24LL))(
           v14 - 16,
           v7,
           v18);
    if ( v2 < 0 )
    {
      v3 = 228LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
