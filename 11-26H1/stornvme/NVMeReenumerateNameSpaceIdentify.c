/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x140028618
 * Callers:
 *     NVMeReenumerateNameSpaceStart @ 0x140029204 (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf

  result = StorPortExtendedFunction(0LL, a1, 6144LL, 1701672526LL);
  v3 = (*(_BYTE *)(a1 + 21) & 2) == 0;
  ++*(_DWORD *)(a1 + 4212);
  if ( !v3 )
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
