/*
 * XREFs of IommuGetConfiguration @ 0x140CBAAE0
 * Callers:
 *     <none>
 * Callees:
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x14059EBE4 (IommuGetLeastMaximumSupportedAsidValue.c)
 *     IommupGetSystemContext @ 0x14059F680 (IommupGetSystemContext.c)
 */

__int64 __fastcall IommuGetConfiguration(__int64 a1, _DWORD *a2, __int64 a3, __int64 *a4)
{
  int LeastMaximumSupportedAsidValue; // eax
  _DWORD *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned int v10; // r10d
  __int64 SystemContext; // rax

  *a2 = HalpIommuCount;
  LeastMaximumSupportedAsidValue = IommuGetLeastMaximumSupportedAsidValue();
  *v6 = LeastMaximumSupportedAsidValue;
  SystemContext = IommupGetSystemContext(v10, v7, v8, v9);
  *a4 = SystemContext;
  return SystemContext == 0 ? 0xC000009A : 0;
}
