/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x1800F1BF0
 * Callers:
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180057FFC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x1800F1B60 (-GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z.c)
 *     ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180306330 (-GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x180311380 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1804F671C (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  _WORD *v10; // rax
  _WORD *v11; // rdx
  unsigned __int64 v12; // rbx
  _WORD *v13; // rcx
  __int64 v14; // rsi
  __int16 v15; // ax

  *a2 = 0LL;
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    v5 = -1LL;
    if ( v4 == -1LL )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(v3 + 2 * v4) );
    }
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v3 + 2 * v6) );
    if ( v4 == -1LL )
    {
      v4 = v6;
      v5 = v6;
    }
    else if ( v4 < v6 )
    {
      v5 = v4;
    }
    else
    {
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
    }
    v7 = v4 + 1;
    if ( v4 + 1 >= v4 && is_mul_ok(v7, 2uLL) )
    {
      v10 = CoTaskMemAlloc(2 * v7);
      v11 = v10;
      if ( v10 )
      {
        *v10 = 0;
        if ( v7 )
        {
          if ( v7 <= 0x7FFFFFFF && v5 <= 0x7FFFFFFE )
          {
            v12 = v5 - v7;
            v13 = v10;
            v14 = v3 - (_QWORD)v10;
            do
            {
              if ( !(v12 + v7) )
                break;
              v15 = *(_WORD *)((char *)v13 + v14);
              if ( !v15 )
                break;
              *v13++ = v15;
              --v7;
            }
            while ( v7 );
            v10 = v13 - 1;
            if ( v7 )
              v10 = v13;
          }
          *v10 = 0;
        }
        v8 = 0;
        *a2 = v11;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v8;
}
