/*
 * XREFs of CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x1401B6604
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1401C4DE0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140081264 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v3; // rdi
  struct CPTPProcessor *Processor; // rax

  result = *(_QWORD *)(a1 + 1240);
  for ( i = *(_QWORD *)result; i; i = *(_QWORD *)(i + 56) )
  {
    result = *(unsigned int *)(i + 184);
    if ( (result & 0x80u) != 0LL )
    {
      v3 = *(_QWORD *)(i + 456);
      if ( *(_DWORD *)(v3 + 24) == 7 )
      {
        Processor = CPTPProcessorFactory::GetProcessor((struct DEVICEINFO *)i);
        result = CPTPProcessor::UpdateEnvironment((__int64)Processor, 1, (struct tagHID_POINTER_DEVICE_INFO *)v3);
      }
    }
  }
  return result;
}
