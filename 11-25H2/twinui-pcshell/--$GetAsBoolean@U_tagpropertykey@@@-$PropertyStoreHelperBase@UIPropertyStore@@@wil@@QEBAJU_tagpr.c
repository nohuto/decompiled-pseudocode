/*
 * XREFs of ??$GetAsBoolean@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x180566D6C
 * Callers:
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x180567614 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _lambda_a4f7c7eeeddd540844b15b912167922b_::operator() @ 0x180569618 (_lambda_a4f7c7eeeddd540844b15b912167922b_--operator().c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180203508 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ?GetAsBoolean@PropVariant@wil@@QEBAJPEA_N@Z @ 0x18056774C (-GetAsBoolean@PropVariant@wil@@QEBAJPEA_N@Z.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetAsBoolean<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        bool *a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  PROPVARIANT pvar[5]; // [rsp+40h] [rbp-28h] BYREF

  *a3 = 0;
  LOWORD(pvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v6, pvar);
  if ( FailIf >= 0 )
    FailIf = wil::PropVariant::GetAsBoolean((wil::PropVariant *)pvar, a3);
  PropVariantClear(pvar);
  return (unsigned int)FailIf;
}
