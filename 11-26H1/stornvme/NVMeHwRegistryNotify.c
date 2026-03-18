/*
 * XREFs of NVMeHwRegistryNotify @ 0x140013170
 * Callers:
 *     <none>
 * Callees:
 *     GetDynamicRegistrySettings @ 0x14002DC90 (GetDynamicRegistrySettings.c)
 */

__int64 __fastcall NVMeHwRegistryNotify(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 0x8008) == 0 )
    return GetDynamicRegistrySettings();
  return result;
}
