/*
 * XREFs of UsbhD3ColdSupportInterfaceGetD3ColdCapability @ 0x140078A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhD3ColdSupportInterfaceGetD3ColdCapability(__int64 a1, _BYTE *a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = *(__int64 (__fastcall **)(_QWORD))(a1 + 3024);
  if ( v2 )
    return v2(*(_QWORD *)(a1 + 2984));
  *a2 = 0;
  return 0LL;
}
