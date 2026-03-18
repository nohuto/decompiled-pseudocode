/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x14005F308
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x14005EE90 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?AdjustScaleFactorForOverride@DpiInternal@@YAKKHUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x14005F234 (-AdjustScaleFactorForOverride@DpiInternal@@YAKKHUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1400640A4 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
 */

__int64 __fastcall DpiInternal::SatisfyMinResolutionBarForScaleIdx(
        DpiInternal *this,
        int a2,
        __int64 a3,
        struct tagSIZE a4,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a5)
{
  int v5; // eax
  struct tagSIZE v6; // r10
  int v8; // r11d
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // edi
  unsigned int v12; // esi
  _DWORD *v13; // r11
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v17; // [rsp+40h] [rbp+18h]
  __int64 v18; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a4;
  if ( (int)a3 >= SHIDWORD(a3) )
  {
    v8 = HIDWORD(a3);
  }
  else
  {
    v8 = a3;
    v5 = HIDWORD(a3);
  }
  v9 = a2 + (_DWORD)this;
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v9 <= v10 )
      v10 = v9;
    if ( v10 > 0 )
    {
      v11 = 100 * v5;
      v12 = 100 * v8;
      v13 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 16LL) + 4LL * v10);
      do
      {
        LODWORD(v17) = v11 / *v13;
        HIDWORD(v17) = v12 / *v13;
        v18 = v17;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))DpiInternal::operator>=)(&v18, v6) )
          break;
        --v10;
        v13 = (_DWORD *)(v15 - 4);
      }
      while ( v14 - 1 > 0 );
    }
  }
  else
  {
    v10 = 0;
  }
  if ( !(_DWORD)a5
    && !a2
    && v10 > 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 24LL) + 4LL * v10) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 24LL)
                                                                                + 4LL * v10
                                                                                - 4) )
  {
    --v10;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&v6 + 16LL) + 4LL * v10);
}
