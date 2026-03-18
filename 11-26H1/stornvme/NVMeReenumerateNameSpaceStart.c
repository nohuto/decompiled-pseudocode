/*
 * XREFs of NVMeReenumerateNameSpaceStart @ 0x140029204
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1400264B0 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x140029670 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 * Callees:
 *     NVMeReenumerateNameSpaceIdentify @ 0x140028618 (NVMeReenumerateNameSpaceIdentify.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceStart(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1560) + 516LL) )
    return NVMeReenumerateNameSpaceIdentify(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
  {
    v3 = *(void **)(a1 + 8 * i + 1672);
    if ( v3 )
      memset(v3, 0, 0x1A8uLL);
  }
  *(_DWORD *)(a1 + 212) = 0;
  result = StorPortNotification(7LL, a1, 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
