/*
 * XREFs of ?OnInputCountChanged@CEffectBrush@@QEAAXXZ @ 0x18026E400
 * Callers:
 *     ?SetInputCount@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJI@Z @ 0x18024B5D4 (-SetInputCount@-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180217C7C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

void __fastcall CEffectBrush::OnInputCountChanged(CEffectBrush *this)
{
  unsigned int v1; // esi
  char *v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // edi
  int v7; // eax
  int EffectInstance; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 26) )
  {
    v3 = (char *)this + 168;
    do
    {
      v4 = *((_DWORD *)v3 + 6);
      v11 = 0LL;
      v5 = v4 + 1;
      if ( v4 + 1 < v4 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
      }
      else
      {
        v6 = 0;
        if ( v5 > *((_DWORD *)v3 + 5) )
        {
          v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, &v11);
          v6 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC2u, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v3 + 8LL * v4) = 0LL;
          *((_DWORD *)v3 + 6) = v5;
        }
      }
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB9,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
          (const char *)(unsigned int)v6,
          v9);
      ++v1;
    }
    while ( v1 < *((_DWORD *)this + 26) );
  }
  EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
  if ( EffectInstance < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
      (const char *)(unsigned int)EffectInstance,
      v9);
  (*(void (__fastcall **)(CEffectBrush *, _QWORD, CEffectBrush *))(*(_QWORD *)this + 80LL))(this, 0LL, this);
}
