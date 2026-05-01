/*
 * XREFs of ?TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z @ 0x1805C7228
 * Callers:
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802B0A18 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1805BADA4 (--$GetAsString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::PropVariant::TryDetachString(wil::PropVariant *this, unsigned __int16 **a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0LL;
  if ( *(_WORD *)this == 31 )
  {
    if ( *((_QWORD *)this + 1) )
    {
      *a2 = (unsigned __int16 *)*((_QWORD *)this + 1);
      result = 1LL;
      *(_OWORD *)this = 0LL;
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  return result;
}
