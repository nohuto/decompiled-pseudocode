/*
 * XREFs of RtlCopyToUser @ 0x1403D30E8
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1401A35A0 (NtUserChangeWindowMessageFilterEx.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x14034A020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140270914 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
