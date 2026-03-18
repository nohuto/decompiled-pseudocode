/*
 * XREFs of DpiFdoCleanupDP @ 0x14006D168
 * Callers:
 *     DpiFdoInitializeDP @ 0x140086718 (DpiFdoInitializeDP.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupDP(_QWORD *a1))(_QWORD)
{
  void *v1; // rbx
  void (__fastcall *result)(_QWORD); // rax

  v1 = a1 + 707;
  result = (void (__fastcall *)(_QWORD))a1[710];
  if ( result )
  {
    result(a1[708]);
    return (void (__fastcall *)(_QWORD))memset(v1, 0, 0x48uLL);
  }
  return result;
}
