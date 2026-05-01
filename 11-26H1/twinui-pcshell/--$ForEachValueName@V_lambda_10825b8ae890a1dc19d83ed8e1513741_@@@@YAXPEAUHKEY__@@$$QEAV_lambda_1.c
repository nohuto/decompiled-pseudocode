/*
 * XREFs of ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803D9010
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803E4EC8 (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803D9BA0 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 */

LSTATUS __fastcall ForEachValueName<_lambda_10825b8ae890a1dc19d83ed8e1513741_>(HKEY hKey, __int64 a2)
{
  int v2; // ebx
  HKEY v4; // rdi
  DWORD v5; // edx
  LSTATUS result; // eax
  __int64 v7; // rdx
  DWORD cchValueName[4]; // [rsp+40h] [rbp-128h] BYREF
  WCHAR ValueName[128]; // [rsp+50h] [rbp-118h] BYREF

  v2 = 0;
  v4 = hKey;
  v5 = 0;
  while ( 1 )
  {
    cchValueName[0] = 128;
    result = RegEnumValueW(hKey, v5, ValueName, cchValueName, 0LL, 0LL, 0LL, 0LL);
    if ( result )
      break;
    _lambda_10825b8ae890a1dc19d83ed8e1513741_::operator()(a2, v7, ValueName);
    v5 = ++v2;
    hKey = v4;
  }
  return result;
}
