/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1401636F0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1401382E4 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x140142294 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1401639B0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(KRegKey *this, union _NET_LUID_LH *a2)
{
  __int64 v2; // rdi
  const wchar_t *v3; // rax
  __int64 v4; // r8
  int v7; // ebp
  int v8; // ecx
  __int16 v9; // r8
  const wchar_t *v10; // rax
  ULONG64 v11; // r8
  __int16 v12; // di
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0;
  v2 = 0x7FFFLL;
  v3 = L"NetLuidIndex";
  v13 = 0LL;
  v4 = 0x7FFFLL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  v7 = -1073741811;
  v8 = -1073741811;
  if ( v4 )
  {
    v8 = 0;
    v9 = 2 * v4;
    v13.Buffer = L"NetLuidIndex";
    v13.Length = -2 - v9;
    v13.MaximumLength = -v9;
  }
  if ( v8 < 0 || (int)KRegKey::QueryValueUlong(this, &v13, &v14) < 0 || v14 != ((a2->Value >> 24) & 0xFFFFFF) )
  {
    v10 = L"NetLuidIndex";
    v11 = (a2->Value >> 24) & 0xFFFFFF;
    v13 = 0LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v2;
    }
    while ( v2 );
    if ( v2 )
    {
      v7 = 0;
      v12 = 2 * v2;
      v13.Buffer = L"NetLuidIndex";
      v13.Length = -2 - v12;
      v13.MaximumLength = -v12;
    }
    if ( v7 >= 0 )
      KRegKey::SetValueUlong(this, &v13, v11);
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}
