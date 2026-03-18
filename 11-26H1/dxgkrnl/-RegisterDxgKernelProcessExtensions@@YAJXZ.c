/*
 * XREFs of ?RegisterDxgKernelProcessExtensions@@YAJXZ @ 0x1401F6E30
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 RegisterDxgKernelProcessExtensions(void)
{
  __int64 result; // rax

  DxgExtensionInfo = 65555;
  DxgFunctionTable = NotifyProcessDefaultQosChangeCallback;
  *(&DxgExtensionInfo + 1) = 0x10000;
  *(&DxgExtensionInfo + 1) = &DxgFunctionTable;
  *(_QWORD *)&xmmword_1401682C8 = &DxgHostTable;
  DxgExtensionRegistration = 0LL;
  *((_QWORD *)&xmmword_1401682C8 + 1) = 0LL;
  result = ExRegisterExtension(&DxgExtensionRegistration, 65537LL, &DxgExtensionInfo);
  if ( (int)result < 0 )
  {
    DxgExtensionRegistration = 0LL;
    WdLogSingleEntry1(3LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 4560;
  }
  return result;
}
