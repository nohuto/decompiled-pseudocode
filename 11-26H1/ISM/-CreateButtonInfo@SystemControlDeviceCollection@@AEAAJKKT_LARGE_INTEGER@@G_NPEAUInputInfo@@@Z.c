/*
 * XREFs of ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DB5F0
 * Callers:
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x180080AE0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180081790 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::CreateButtonInfo(
        SystemControlDeviceCollection *this,
        LONG a2,
        DWORD a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        union _LARGE_INTEGER *a7)
{
  __int64 result; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  switch ( a5 )
  {
    case 0x81u:
      v8 = 9;
      break;
    case 0x97u:
      v8 = 301;
      break;
    case 0x98u:
      v8 = 302;
      break;
    case 0x99u:
      v8 = 303;
      break;
    default:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
        (const char *)0x80004001LL);
      return 2147500033LL;
  }
  a7[8].LowPart = v8;
  BYTE4(a7[8].QuadPart) = a6;
  result = 0LL;
  a7->HighPart = a2;
  a7->LowPart = 128;
  a7[1].LowPart = a3;
  a7[2] = a4;
  BYTE1(a7[6].LowPart) = 1;
  return result;
}
