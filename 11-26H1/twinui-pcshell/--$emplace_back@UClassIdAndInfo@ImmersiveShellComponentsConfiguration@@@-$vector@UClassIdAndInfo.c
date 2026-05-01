/*
 * XREFs of ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@$$QEAU23@@Z @ 0x1803D92F0
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803D8F48 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803D9BA0 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU23@$$QEAU23@@Z @ 0x1803D912C (--$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassId.c)
 */

char *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::emplace_back<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Emplace_reallocate<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
             a1,
             v3,
             (__int128 *)a2);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  v4 = a1[1];
  a1[1] = v4 + 24;
  return (char *)v4;
}
