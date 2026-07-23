/*
 * XREFs of EtwpCaptureRegistryData @ 0x140A377C4
 * Callers:
 *     EtwpRegTraceCallback @ 0x140A36E90 (EtwpRegTraceCallback.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureRegistryData(_QWORD *a1, const void *a2, unsigned int a3)
{
  size_t v3; // rbx
  void *v6; // rdi
  unsigned int v8; // eax
  void *Pool2; // rax

  LOWORD(v3) = a3;
  v6 = 0LL;
  if ( a3 )
  {
    v8 = 2048;
    if ( a3 <= 0x800 )
      v8 = a3;
    v3 = v8;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, a2, v3);
    else
      LOWORD(v3) = 0;
  }
  *a1 = v6;
  return (unsigned __int16)v3;
}
