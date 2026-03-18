/*
 * XREFs of UsbhDeleteUxdPortKey @ 0x14005F6B4
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x140022594 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     UsbhDeleteUxdPortSettings @ 0x14005F704 (UsbhDeleteUxdPortSettings.c)
 *     UsbhOpenUxdPortHandle @ 0x14005FD7C (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhDeleteUxdPortKey(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = UsbhOpenUxdPortHandle(a1, &Handle);
  if ( (int)result >= 0 )
  {
    v5 = UsbhDeleteUxdPortSettings(v4, Handle, a2);
    ZwClose(Handle);
    return v5;
  }
  return result;
}
