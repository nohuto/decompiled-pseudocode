/*
 * XREFs of RtlpHpQueryVA @ 0x140352540
 * Callers:
 *     ExFreeHeapPages @ 0x1403483D8 (ExFreeHeapPages.c)
 *     RtlpHpSegMgrRelease @ 0x140350500 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403527A0 (RtlCSparseBitmapFindBitSetCapped.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, char **a3, int *a4)
{
  int v5; // ebp
  unsigned __int64 v6; // rbx
  char *v8; // rcx
  __int64 v9; // rax
  char *v10; // rdx
  __int64 result; // rax
  int v12; // ecx

  v5 = a1;
  v6 = (a1 - (unsigned __int64)ExpUuidLock.ApcState.ApcListHead[0].Flink) >> 20;
  if ( RtlCSparseBitmapFindBitSetCapped(
         &ExpUuidLock.ApcStateFill[24],
         8 * (v6 << ExpUuidLock.ApcStateFill[16]),
         8 * (1LL << ExpUuidLock.ApcStateFill[16])) == -1
    || (v8 = (char *)ExpUuidLock.ApcState.Process + (v6 << ExpUuidLock.ApcStateFill[16])) == 0LL )
  {
    RtlpLogHeapFailure(22, v5, 0, 0, 0LL, 0LL);
    v12 = 0;
    v10 = 0LL;
    result = 0LL;
  }
  else
  {
    if ( (*v8 & 4) != 0 )
      v9 = *((_QWORD *)v8 + 3);
    else
      v9 = *((unsigned __int16 *)v8 + 12);
    v10 = v8 + 8;
    result = v9 << 20;
    v12 = 16;
  }
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v12;
  return result;
}
