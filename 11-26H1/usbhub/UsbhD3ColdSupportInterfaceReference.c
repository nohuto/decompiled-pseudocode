/*
 * XREFs of UsbhD3ColdSupportInterfaceReference @ 0x14005CA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UsbhD3ColdSupportInterfaceReference(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 2992);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 2984));
  return result;
}
