/*
 * XREFs of KeCopyExceptionRecord @ 0x1404E5F9C
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset_0(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
