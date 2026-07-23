/*
 * XREFs of PipIommuValidateDeviceId @ 0x140B21F68
 * Callers:
 *     PipIommuRetrieveDeviceId @ 0x140B21E80 (PipIommuRetrieveDeviceId.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IidValidateDeviceId @ 0x140781B7C (IidValidateDeviceId.c)
 */

__int64 __fastcall PipIommuValidateDeviceId(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  __int64 result; // rax

  result = IidValidateDeviceId(BugCheckParameter3, a3);
  if ( (int)result < 0 )
    KeBugCheckEx(0xCAu, 0x12uLL, BugCheckParameter2, BugCheckParameter3, (int)result);
  return result;
}
