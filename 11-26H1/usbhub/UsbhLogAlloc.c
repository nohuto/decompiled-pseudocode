/*
 * XREFs of UsbhLogAlloc @ 0x140054B04
 * Callers:
 *     UsbhAddDevice @ 0x14004F580 (UsbhAddDevice.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

char *__fastcall UsbhLogAlloc(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  char *result; // rax

  v4 = (unsigned int)(a3 << 12);
  v5 = FdoExt(a1) + 1322;
  memset(v5, 0, (unsigned int)v4);
  *(_QWORD *)(a2 + 8) = v5;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = ((unsigned int)v4 >> 5) - 1;
  result = (char *)v5 + (v4 & 0xFFFFFFFFFFFFFFE0uLL) - 32;
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
