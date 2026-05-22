/*
 * XREFs of _lambda_c6487e696fe1a4f0096835366e69d3e1_::operator() @ 0x18017CBCC
 * Callers:
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x18017F290 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall lambda_c6487e696fe1a4f0096835366e69d3e1_::operator()(__int64 a1, const WCHAR *a2, float a3, float a4)
{
  DWORD v5[4]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+84h] [rbp+Ch]

  v7 = HIDWORD(a1);
  v6 = 0;
  v5[0] = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
         a2,
         0x10u,
         0LL,
         &v6,
         v5) )
  {
    return a3;
  }
  else
  {
    return (float)v6 * a4;
  }
}
