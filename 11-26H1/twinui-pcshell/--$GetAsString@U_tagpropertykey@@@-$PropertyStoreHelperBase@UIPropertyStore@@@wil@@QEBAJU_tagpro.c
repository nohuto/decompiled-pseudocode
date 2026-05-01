/*
 * XREFs of ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1805DE8AC
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB290 (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801F781C (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z @ 0x1805EAFE0 (-TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        PWSTR *a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  PROPVARIANT propvar[3]; // [rsp+40h] [rbp-38h] BYREF

  *a3 = 0LL;
  LOWORD(propvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v6, propvar);
  if ( FailIf >= 0 )
  {
    if ( wil::PropVariant::TryDetachString((wil::PropVariant *)propvar, a3) )
    {
      FailIf = 0;
    }
    else
    {
      *a3 = 0LL;
      if ( LOWORD(propvar[0]) )
        FailIf = PropVariantToStringAlloc(propvar, a3);
      else
        FailIf = -2147023728;
    }
  }
  PropVariantClear(propvar);
  return (unsigned int)FailIf;
}
