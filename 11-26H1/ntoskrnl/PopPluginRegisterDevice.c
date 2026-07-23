/*
 * XREFs of PopPluginRegisterDevice @ 0x14043C7EC
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x14043C668 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginRegisterDevice(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  unsigned int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]

  v6 = 0;
  v7 = *(_QWORD *)(BugCheckParameter3 + 96);
  v13 = 0;
  *a6 = 0LL;
  if ( v7 && *(_DWORD *)(BugCheckParameter3 + 16) >= 2u && a4 )
  {
    v10[0] = a2;
    v10[1] = a3;
    v10[2] = a4;
    v11 = 0LL;
    v12 = 0;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(3LL, v10) )
      PopFxBugCheck(0x605uLL, 3uLL, BugCheckParameter3, 0LL);
    if ( v12 )
    {
      v6 = v12;
      *a6 = v11;
    }
  }
  return v6;
}
