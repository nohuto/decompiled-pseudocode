/*
 * XREFs of ?IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@Z @ 0x18002DBC8
 * Callers:
 *     _lambda_5a51ce284699f0acc741bd28450f0086_::operator() @ 0x180027CFC (_lambda_5a51ce284699f0acc741bd28450f0086_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::IsValidProfile(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        HKEY a2)
{
  const wchar_t **v2; // rbx
  const wchar_t *v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h]
  const wchar_t *v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+48h] [rbp-8h]
  char vars0; // [rsp+50h] [rbp+0h] BYREF
  DWORD Type; // [rsp+60h] [rbp+10h] BYREF
  int v11; // [rsp+64h] [rbp+14h]
  DWORD cbData; // [rsp+70h] [rbp+20h] BYREF

  v11 = HIDWORD(this);
  v6 = 1;
  v5 = L"AppUserModelId";
  v2 = &v5;
  v8 = 4;
  v7 = L"ConfigLevel";
  Type = 0;
  cbData = 0;
  while ( v2 != (const wchar_t **)&vars0 )
  {
    if ( RegQueryValueExW(a2, *v2, 0LL, &Type, 0LL, &cbData) || Type != *((_DWORD *)v2 + 2) || !cbData )
      return 0;
    v2 += 2;
  }
  return 1;
}
