/*
 * XREFs of MiFormDllRegistryPath @ 0x14087B470
 * Callers:
 *     MiIssueDllInitializeCall @ 0x14087B6CC (MiIssueDllInitializeCall.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFormDllRegistryPath(__int64 a1, UNICODE_STRING *a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // bx
  int CurrentProcessorColor; // eax
  wchar_t *PoolMm; // rax
  unsigned int v9; // ebx
  wchar_t *v10; // rdi
  unsigned __int64 Length; // rsi
  const void *v12; // rdx
  unsigned __int16 v13; // cx
  unsigned int v14; // ebp
  int v15; // eax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-18h] BYREF

  Source = 0LL;
  *a2 = 0LL;
  v4 = *(_WORD *)(a1 + 88);
  v5 = v4 + 2;
  if ( (unsigned __int16)(v4 + 2) < v4 )
    return 3221225734LL;
  Source.MaximumLength = v4 + 2;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (wchar_t *)ExAllocatePoolMm(256LL, v5, 1413770573, CurrentProcessorColor | 0x80000000);
  v9 = 0;
  Source.Buffer = PoolMm;
  v10 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  v12 = *(const void **)(a1 + 96);
  Source.Length = *(_WORD *)(a1 + 88);
  Length = Source.Length;
  memmove(PoolMm, v12, Source.Length);
  v13 = *(_WORD *)&PspSiloMonitorLock.WaitBlockFill11[128] + Source.Length;
  if ( (unsigned __int16)(*(_WORD *)&PspSiloMonitorLock.WaitBlockFill11[128] + Source.Length) <= *(_WORD *)&PspSiloMonitorLock.WaitBlockFill11[128]
    || (v14 = (unsigned __int16)(v13 + 4), (unsigned __int16)v14 < v13) )
  {
    v9 = -1073741562;
  }
  else
  {
    a2->MaximumLength = v14;
    v15 = MmGetCurrentProcessorColor();
    v16 = (wchar_t *)ExAllocatePoolMm(64LL, v14, 1413770573, v15 | 0x80000000);
    a2->Buffer = v16;
    if ( v16 )
    {
      a2->Length = *(_WORD *)&PspSiloMonitorLock.WaitBlockFill11[128];
      memmove(
        v16,
        PspSiloMonitorLock.WaitBlock[2].SparePtr,
        *(unsigned __int16 *)&PspSiloMonitorLock.WaitBlockFill11[128]);
      RtlAppendUnicodeToString(a2, L"\\");
      v10[Length >> 1] = 0;
      v17 = wcschr(v10, 0x2Eu);
      if ( v17 )
      {
        LOWORD(Length) = 2 * (v17 - v10);
        Source.Length = Length;
      }
      v10[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
      RtlAppendUnicodeStringToString(a2, &Source);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  ExFreePoolWithTag(v10, 0);
  return v9;
}
