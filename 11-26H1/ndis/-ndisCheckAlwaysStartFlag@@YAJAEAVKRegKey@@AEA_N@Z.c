/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140137420
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1401639B0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall ndisCheckAlwaysStartFlag(KRegKey *this, bool *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r8
  const wchar_t *v6; // rax
  int v7; // ecx
  __int16 v8; // r8
  int v9; // eax
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v12 = 0;
  v11 = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"AlwaysStartDevice";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = -1073741811;
  if ( v5 )
  {
    v7 = 0;
    v8 = 2 * v5;
    v11.Buffer = L"AlwaysStartDevice";
    v11.Length = -2 - v8;
    v11.MaximumLength = -v8;
  }
  if ( v7 >= 0 )
  {
    v9 = KRegKey::QueryValueUlong(this, &v11, &v12);
    v3 = v12;
    v7 = v9;
  }
  if ( v7 == -1073741772 )
  {
    *a2 = 0;
    return 0LL;
  }
  else if ( v7 )
  {
    return (unsigned int)v7;
  }
  else
  {
    *a2 = v3 != 0;
    return 0LL;
  }
}
