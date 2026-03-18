/*
 * XREFs of SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404ACDE0
 * Callers:
 *     PspIumVerifyParentSd @ 0x1407FD3D0 (PspIumVerifyParentSd.c)
 *     IoCreateDeviceSecure @ 0x140AF8350 (IoCreateDeviceSecure.c)
 *     IopUpdateSecureDeviceClassState @ 0x140AF8840 (IopUpdateSecureDeviceClassState.c)
 *     CmFcInitSystem2 @ 0x140CEDB4C (CmFcInitSystem2.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A61674 (LocalConvertStringSDToSD_Rev1.c)
 */

__int64 __fastcall SeConvertStringSecurityDescriptorToSecurityDescriptor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 || !a3 )
  {
    LOWORD(result) = 87;
    return (unsigned __int16)result | 0xC0070000;
  }
  if ( a2 != 1 )
  {
    LOWORD(result) = 1305;
    return (unsigned __int16)result | 0xC0070000;
  }
  result = LocalConvertStringSDToSD_Rev1(a1, 1, a3, a1, a3, a4);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
