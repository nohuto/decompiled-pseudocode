/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180106844
 * Callers:
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800705CC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x1801067B0 (-GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z.c)
 *     ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180301CE0 (-GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x18030D1D0 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180517E64 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 a1,
        _QWORD *a2)
{
  _WORD *v3; // r14
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebx
  _WORD *v9; // rax
  _WORD *v10; // rcx
  _WORD *v11; // rdx

  *a2 = 0LL;
  v3 = *(_WORD **)a1;
  if ( !*(_QWORD *)a1 )
    return (unsigned int)-2147023728;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == -1LL )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
  }
  v5 = -1LL;
  do
    ++v5;
  while ( v3[v5] );
  if ( v4 == -1LL )
  {
    v4 = v5;
  }
  else if ( v4 < v5 )
  {
    v5 = v4;
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v3[v5] );
  }
  v6 = v4 + 1;
  if ( v4 + 1 >= v4 && is_mul_ok(v6, 2uLL) )
  {
    v9 = CoTaskMemAlloc(2 * v6);
    v10 = v9;
    if ( !v9 )
      return (unsigned int)-2147024882;
    *v9 = 0;
    if ( v6 )
    {
      if ( v6 <= 0x7FFFFFFF )
      {
        v7 = 0;
        if ( v5 <= 0x7FFFFFFE )
        {
          v11 = v9;
          do
          {
            if ( !v5 )
              break;
            if ( !*v3 )
              break;
            *v11++ = *v3++;
            --v5;
            --v6;
          }
          while ( v6 );
          v9 = v11 - 1;
          if ( v6 )
            v9 = v11;
        }
        *v9 = 0;
        goto LABEL_26;
      }
      *v9 = 0;
    }
    v7 = 0;
LABEL_26:
    *a2 = v10;
    return v7;
  }
  return (unsigned int)-2147024362;
}
