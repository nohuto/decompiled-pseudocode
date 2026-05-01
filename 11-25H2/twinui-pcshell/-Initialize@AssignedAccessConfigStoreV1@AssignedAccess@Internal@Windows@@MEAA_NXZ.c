/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x1800ECAA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x1800ECAE0 (_lambda_53a10622b8c115a42f3ae5bcca2992b2_--operator().c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  char v1; // bl
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v3[0] = this;
  v1 = 0;
  v3[1] = &v4;
  v4 = 0;
  if ( (int)lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator()(v3) >= 0 )
    return v4 != 0;
  return v1;
}
