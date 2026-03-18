/*
 * XREFs of WdipSemLoadGroupPolicy @ 0x140820F00
 * Callers:
 *     WdipSemCleanStart @ 0x14081F4F0 (WdipSemCleanStart.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     WdipSemCleanupGroupPolicy @ 0x140820ED0 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140820FAC (WdipSemLoadLocalGroupPolicy.c)
 *     WdipSemOpenRegistryKey @ 0x140821610 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1408216A0 (WdipSemQueryValueFromRegistry.c)
 */

__int64 WdipSemLoadGroupPolicy()
{
  int LocalGroupPolicy; // ebx
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h]

  Handle = 0LL;
  LODWORD(v3) = 4;
  v2 = 0;
  if ( (int)WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\WDI") < 0 )
    goto LABEL_2;
  LocalGroupPolicy = WdipSemQueryValueFromRegistry(Handle, &v2, (__int64)&v3);
  if ( LocalGroupPolicy >= 0 )
  {
    if ( !v2 )
      LocalGroupPolicy = -1073741823;
  }
  else
  {
    LocalGroupPolicy = WdipSemLoadLocalGroupPolicy(Handle);
    if ( LocalGroupPolicy < 0 )
    {
      WdipSemCleanupGroupPolicy();
LABEL_2:
      LocalGroupPolicy = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)LocalGroupPolicy;
}
