/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180038378
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180038C1C (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180087058 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x18008F4B4 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKM@Z @ 0x1800A119C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKM@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x1800A1214 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18003859C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180038718 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::function_void___cdecl(void)_::operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_ @ 0x1800A1014 (std--function_void___cdecl(void)_--operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(__int64 a1, const RECT *a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // r13d
  const RECT *v7; // r8
  bool v9; // r15
  __int64 v10; // rax
  bool v11; // al
  char v12; // r12
  char v13; // r14
  char v14; // di
  _DWORD *v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  int started; // eax
  __int64 v19; // rcx
  _OWORD v21[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]

  v5 = 0;
  v7 = a2;
  v9 = (a4 & 0x10) != 0 && *(_BYTE *)(a1 + 480);
  v10 = *(_QWORD *)(a1 + 488);
  v11 = v10 && !*(_BYTE *)(v10 + 72);
  if ( (a4 & 2) != 0 )
  {
    v12 = 1;
    goto LABEL_9;
  }
  v12 = 0;
  if ( (a4 & 1) != 0 )
  {
LABEL_9:
    v13 = 1;
    goto LABEL_10;
  }
  v13 = 0;
LABEL_10:
  v14 = (a4 & 8) != 0;
  if ( v11 && !v9 && v13 == *(_BYTE *)(a1 + 481) && v12 == *(_BYTE *)(a1 + 482) && v14 == *(_BYTE *)(a1 + 480) )
  {
    if ( EqualRect(a2, (const RECT *)(a1 + 464)) )
      goto LABEL_16;
    v7 = a2;
  }
  v15 = (_DWORD *)(a1 + 240);
  v21[0] = *v7;
  if ( (a4 & 4) != 0 )
  {
    LODWORD(v21[0]) += *v15;
    DWORD1(v21[0]) += *(_DWORD *)(a1 + 244);
    DWORD2(v21[0]) += *(_DWORD *)(a1 + 248);
    HIDWORD(v21[0]) += *(_DWORD *)(a1 + 252);
  }
  v16 = *(_OWORD *)(a5 + 16);
  v21[1] = *(_OWORD *)a5;
  v17 = *(_QWORD *)(a5 + 32);
  v21[2] = v16;
  v22 = v17;
  started = CAcrylicSheet::StartRectAnimation(a1, v15, v21);
  v5 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x28Fu, 0LL);
    return v5;
  }
  *(_BYTE *)(a1 + 481) = v13;
  *(_BYTE *)(a1 + 482) = v12;
  *(_BYTE *)(a1 + 480) = v14;
LABEL_16:
  v19 = a1 + 352;
  if ( (a4 & 0x20) != 0 )
    std::function_void___cdecl_void__::operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_(v19);
  else
    std::_Func_class<void,>::_Tidy(v19);
  return v5;
}
