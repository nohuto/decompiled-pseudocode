/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18026E530
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1801ACAD8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ??0CEffectPropertyChangeNotification@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x1801B613C (--0CEffectPropertyChangeNotification@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v17; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-30h] BYREF
  char v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = a1 - 152;
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 152)) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 40) + 80LL) + 56LL);
    if ( a2 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10) )
      return 0;
    v11 = *(_QWORD *)(a1 + 8);
    v19 = 0;
    v17 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, char *, unsigned int *))(*(_QWORD *)v11 + 32LL))(
            v11,
            a2,
            a3,
            a4,
            &v19,
            &v17);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x33Eu, 0LL);
      return v9;
    }
    v13 = 1;
    if ( v19 )
    {
      v15 = v17;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      v15 = v17;
      if ( v17 == v14 - 1 )
      {
LABEL_10:
        CEffectPropertyChangeNotification::CEffectPropertyChangeNotification(
          (CEffectPropertyChangeNotification *)v18,
          *(struct Windows::UI::Composition::IEffectInstance **)(a1 + 8),
          v15);
        (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v4 + 80LL))(v4, v13, v18);
        return 0;
      }
    }
    v13 = 6;
    goto LABEL_10;
  }
  v9 = -2147483634;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147483634, 0x32Fu, 0LL);
  return v9;
}
