/*
 * XREFs of PiCMReturnStatusResultData @ 0x140A9FB88
 * Callers:
 *     PiCMGetDeviceStatus @ 0x140A9FA54 (PiCMGetDeviceStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMReturnStatusResultData(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        unsigned int a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  _DWORD Src[6]; // [rsp+28h] [rbp-40h] BYREF

  *a8 = 0;
  v8 = 0;
  if ( a7 >= 0x14 && a5 == 20 )
  {
    Src[0] = 20;
    Src[1] = a1;
    Src[2] = a2;
    Src[3] = a3;
    Src[4] = a4;
    if ( ((unsigned __int8)a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(a6, Src, 0x14uLL);
    *a8 = 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
