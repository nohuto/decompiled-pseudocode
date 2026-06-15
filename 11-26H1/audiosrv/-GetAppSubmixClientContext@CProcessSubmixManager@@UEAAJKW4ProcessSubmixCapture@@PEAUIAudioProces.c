/*
 * XREFs of ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800BBB60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800BBBD0 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    result = CProcessSubmixManager::GetAppSubmixClientContextHelper(a1, a2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15F,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v3);
  }
  return result;
}
