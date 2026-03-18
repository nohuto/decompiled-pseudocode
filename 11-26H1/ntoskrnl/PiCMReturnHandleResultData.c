/*
 * XREFs of PiCMReturnHandleResultData @ 0x140A0019C
 * Callers:
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1409FF7B4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1409FFA20 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140ABE0C4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMReturnHandleResultData(int a1, __int64 a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  _DWORD Src[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  *a6 = 0;
  v6 = 0;
  if ( a5 >= 0x10 && a3 == 16 )
  {
    Src[0] = 16;
    Src[1] = a1;
    v9 = a2;
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(a4, Src, 0x10uLL);
    *a6 = 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
