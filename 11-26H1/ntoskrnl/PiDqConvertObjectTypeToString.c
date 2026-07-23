/*
 * XREFs of PiDqConvertObjectTypeToString @ 0x140B3696C
 * Callers:
 *     PiDqTraceQueryCreate @ 0x140950F84 (PiDqTraceQueryCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqConvertObjectTypeToString(int a1, const wchar_t **a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  const wchar_t *v6; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v2 = 0;
  *a2 = 0LL;
  if ( a1 > 6 )
  {
    v9 = a1 - 7;
    if ( !v9 )
    {
      v6 = L"DeviceInstallerClass";
      goto LABEL_8;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v6 = L"DeviceInterfaceDisplay";
      goto LABEL_8;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v6 = L"DeviceContainerDisplay";
      goto LABEL_8;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v6 = L"AEPService";
      goto LABEL_8;
    }
    if ( v12 == 1 )
    {
      v6 = L"DevicePanel";
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  if ( a1 == 6 )
  {
    v6 = L"AEPContainer";
    goto LABEL_8;
  }
  if ( !a1 )
  {
    v6 = L"Unknown";
    goto LABEL_8;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v6 = L"DeviceInterface";
    goto LABEL_8;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = L"DeviceContainer";
    goto LABEL_8;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( !v8 )
    {
      v6 = L"DeviceInterfaceClass";
      goto LABEL_8;
    }
    if ( v8 == 1 )
    {
      v6 = L"AEP";
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  v6 = L"Device";
LABEL_8:
  *a2 = v6;
  return v2;
}
