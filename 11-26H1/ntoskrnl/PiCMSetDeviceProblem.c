/*
 * XREFs of PiCMSetDeviceProblem @ 0x140B6CA80
 * Callers:
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiCMCaptureProblemInputData @ 0x14077A8AC (PiCMCaptureProblemInputData.c)
 *     _CmValidateDeviceName @ 0x14098CC00 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHavePrivilege @ 0x14098CFD8 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x14099A4D4 (PiCMReturnBasicResultData.c)
 *     PiCMSetProblem @ 0x140B3DF98 (PiCMSetProblem.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(void *Src, unsigned int a2, void *a3, unsigned int a4, int a5, _DWORD *a6)
{
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r10d
  int v15; // r11d
  _WORD v16[2]; // [rsp+30h] [rbp-1D8h] BYREF
  int v17; // [rsp+34h] [rbp-1D4h]
  WCHAR SourceString[200]; // [rsp+38h] [rbp-1D0h] BYREF
  int v19; // [rsp+1CCh] [rbp-3Ch]

  memset_0(v16, 0, 0x1A0uLL);
  *a6 = 0;
  result = PiCMCaptureProblemInputData(Src, a2, v10, v16);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( SourceString[0] && a3 && a4 >= 8 && (unsigned int)(v17 - 1) <= 1 )
      {
        v13 = CmValidateDeviceName(v12, SourceString);
        if ( v13 >= 0 )
          v13 = PiCMSetProblem(SourceString, v15, v14);
      }
      else
      {
        v13 = -1073741811;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    return PiCMReturnBasicResultData(v13, v19, a3, a4, a6);
  }
  return result;
}
