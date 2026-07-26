/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x14014A0E8
 * Callers:
 *     ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x1401502D0 (-ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::DeleteValue(KRegKey *this, wchar_t *a2)
{
  __int64 v2; // r8
  wchar_t *v3; // rax
  _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  ValueName = 0LL;
  if ( a2 )
  {
    v2 = 0x7FFFLL;
    v3 = a2;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    if ( !v2 )
      return -1073741811;
    ValueName.Buffer = a2;
    ValueName.Length = -2 - 2 * v2;
    ValueName.MaximumLength = -2 * v2;
  }
  return ZwDeleteValueKey(this->m_ptr, &ValueName);
}
