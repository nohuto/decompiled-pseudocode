/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@@Z @ 0x180289BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x180279EF0 (-ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18028C0B0 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollScaleKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  char v2; // al
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // ecx
  int v12[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+70h] [rbp-90h]
  _DWORD v14[16]; // [rsp+80h] [rbp-80h] BYREF
  int v15; // [rsp+C0h] [rbp-40h]
  _DWORD v16[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v17; // [rsp+110h] [rbp+10h]
  _DWORD v18[16]; // [rsp+120h] [rbp+20h] BYREF
  int v19; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v2 = *((_BYTE *)this + 624);
  if ( (v2 & 4) != 0 )
    return 0LL;
  v17 = 0;
  *((_BYTE *)this + 624) = v2 | 4;
  v15 = 0;
  v13 = 0;
  v5 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, 0LL, 2LL, v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 94LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)v5);
    CExpressionValue::DestroyCurrent((CExpressionValue *)v12);
    CExpressionValue::DestroyCurrent((CExpressionValue *)v14);
    CExpressionValue::DestroyCurrent((CExpressionValue *)v16);
    return v6;
  }
  v5 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, 1LL, 0LL, v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 100LL;
    goto LABEL_8;
  }
  v5 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, 1LL, 1LL, v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 106LL;
    goto LABEL_8;
  }
  if ( v17 == 18 )
  {
    v19 = 0;
    CExpressionValue::DestroyCurrent((CExpressionValue *)v18);
    v18[0] = v16[0];
    v19 = 18;
    CKeyframeAnimation::ReplaceLastKeyframeValueConstant(this, (struct CExpressionValue *)v18, v9, v10);
    *((_BYTE *)this + 624) |= 8u;
    CExpressionValue::DestroyCurrent((CExpressionValue *)v18);
  }
  v11 = v13;
  if ( v15 )
  {
    if ( v15 == 18 )
      *((_DWORD *)this + 158) = v14[0] ^ _xmm;
    goto LABEL_16;
  }
  if ( v13 )
  {
LABEL_16:
    if ( v11 == 18 )
      *((_DWORD *)this + 159) = v12[0] ^ _xmm;
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 59) + 536LL))(
    *((_QWORD *)this + 59),
    (char *)this + 632);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v12);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v14);
  CExpressionValue::DestroyCurrent((CExpressionValue *)v16);
  return 0LL;
}
