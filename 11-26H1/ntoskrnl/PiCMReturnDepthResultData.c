/*
 * XREFs of PiCMReturnDepthResultData @ 0x14077C0A4
 * Callers:
 *     PiCMGetDeviceDepth @ 0x14094D0A0 (PiCMGetDeviceDepth.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMReturnDepthResultData(int a1, int a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  _DWORD Src[4]; // [rsp+28h] [rbp-20h] BYREF

  *a6 = 0;
  v6 = 0;
  if ( a5 >= 0xC && a3 == 12 )
  {
    Src[0] = 12;
    Src[1] = a1;
    Src[2] = a2;
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(a4, Src, 0xCuLL);
    *a6 = 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
