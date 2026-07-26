/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140138260
 * Callers:
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140150340 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016D6E0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1401382E4 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, unsigned int a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  int v6; // ecx
  __int16 v7; // r9
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( !a2 )
    return KRegKey::SetValueUlong(this, &v9, a3);
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = -1073741811;
  if ( v4 )
  {
    v6 = 0;
    v7 = 2 * v4;
    v9.Buffer = a2;
    v9.Length = -2 - v7;
    v9.MaximumLength = -v7;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  else
    return KRegKey::SetValueUlong(this, &v9, a3);
}
