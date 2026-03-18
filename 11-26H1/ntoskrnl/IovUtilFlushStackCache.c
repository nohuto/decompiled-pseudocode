/*
 * XREFs of IovUtilFlushStackCache @ 0x140C30E90
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x140C20C18 (IovAttachDeviceToDeviceStack.c)
 *     VfIoDetachDevice @ 0x140C307F0 (VfIoDetachDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovUtilFlushStackCache(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  do
  {
    result = *(_QWORD *)(a1 + 312);
    v2 = a1;
    a1 = *(_QWORD *)(result + 48);
  }
  while ( a1 );
  while ( v2 )
  {
    result = *(_QWORD *)(v2 + 312);
    *(_DWORD *)(result + 32) &= 0x3FFFFFFFu;
    v2 = *(_QWORD *)(v2 + 24);
  }
  return result;
}
