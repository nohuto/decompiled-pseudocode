/*
 * XREFs of ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z @ 0x18020BC88
 * Callers:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D36C (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F2B90 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnSKUEnabled(
        LPCWSTR lpValue,
        const unsigned __int16 *a2)
{
  bool result; // al
  int v3; // [rsp+58h] [rbp+10h] BYREF
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 4;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, L"System\\CurrentControlSet\\Services\\CoreUI", lpValue, 0xFFFFu, 0LL, &v3, &v4) )
    return 0;
  result = 1;
  if ( v3 != 1 )
    return 0;
  return result;
}
