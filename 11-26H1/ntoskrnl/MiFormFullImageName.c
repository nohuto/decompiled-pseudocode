/*
 * XREFs of MiFormFullImageName @ 0x14087B608
 * Callers:
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlAppendStringToString @ 0x140B22640 (RtlAppendStringToString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFormFullImageName(unsigned __int16 *a1, const STRING *a2, STRING *a3)
{
  unsigned __int16 v4; // r9
  unsigned int v6; // ebx
  int CurrentProcessorColor; // eax
  char *PoolMm; // rax
  NTSTATUS appended; // eax
  char *Buffer; // rcx

  v4 = a2->Length + 2 + *a1;
  v6 = v4;
  a3->MaximumLength = v4;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (char *)ExAllocatePoolMm(256LL, v6, 1413770573, CurrentProcessorColor | 0x80000000);
  a3->Buffer = PoolMm;
  if ( !PoolMm )
    return 0LL;
  a3->Length = *a1;
  memmove(PoolMm, *((const void **)a1 + 1), *a1);
  appended = RtlAppendStringToString(a3, a2);
  Buffer = a3->Buffer;
  if ( appended < 0 )
  {
    ExFreePoolWithTag(Buffer, 0);
    return 0LL;
  }
  *(_WORD *)&Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
  return 1LL;
}
