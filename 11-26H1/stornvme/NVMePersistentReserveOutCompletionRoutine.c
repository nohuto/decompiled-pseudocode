/*
 * XREFs of NVMePersistentReserveOutCompletionRoutine @ 0x14001EBF0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall NVMePersistentReserveOutCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  _DWORD *v6; // rbx

  result = GetSrbExtension(a2);
  v4 = result;
  v5 = (_QWORD *)(result + 4160);
  v6 = (_DWORD *)(result + 4208);
  if ( *(_QWORD *)(result + 4160) )
    result = NVMeFreeDmaBufferEx(v3, 1, 0, (unsigned int)*v6, (__int64 *)(result + 4160), *(_QWORD *)(result + 4168));
  *(_BYTE *)(v4 + 4225) |= 8u;
  *v5 = 0LL;
  *v6 = 0;
  return result;
}
