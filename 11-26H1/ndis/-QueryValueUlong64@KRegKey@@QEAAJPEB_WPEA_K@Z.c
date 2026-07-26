/*
 * XREFs of ?QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z @ 0x140137160
 * Callers:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140163860 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ?QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z @ 0x1401371E4 (-QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUlong64(KRegKey *this, wchar_t *a2, unsigned __int64 *a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  int v6; // ecx
  __int16 v7; // r9
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueUlong64(this, &v9, a3);
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
    return KRegKey::QueryValueUlong64(this, &v9, a3);
}
