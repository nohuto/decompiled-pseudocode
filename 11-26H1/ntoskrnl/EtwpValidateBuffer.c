/*
 * XREFs of EtwpValidateBuffer @ 0x140219164
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpValidateBuffer(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d

  result = *a2;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 != (_DWORD)result )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v3, *a2);
  return result;
}
