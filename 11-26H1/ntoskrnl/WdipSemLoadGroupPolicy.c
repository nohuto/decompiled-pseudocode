/*
 * XREFs of WdipSemLoadGroupPolicy @ 0x140827110
 * Callers:
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     WdipSemCleanupGroupPolicy @ 0x1408270E0 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408271BC (WdipSemLoadLocalGroupPolicy.c)
 *     WdipSemOpenRegistryKey @ 0x140827820 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1408278B0 (WdipSemQueryValueFromRegistry.c)
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
