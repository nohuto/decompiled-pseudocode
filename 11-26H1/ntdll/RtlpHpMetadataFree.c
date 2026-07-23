/*
 * XREFs of RtlpHpMetadataFree @ 0x18007F268
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpFreeHeapMetadata @ 0x18007EFA0 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x18007F21C (RtlpFlsHeapFree.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A0CF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800E0740 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800E387C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpTagRunOnceInit @ 0x180101B10 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801156A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014F284 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014F4D0 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014F6F8 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014F8A0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157E60 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180002EDC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

NTSTATUS __fastcall RtlpHpMetadataFree(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // r8
  char v11; // cl
  unsigned __int64 v12; // r11
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  NTSTATUS result; // eax
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)BYTE1(*a2);
  v16 = 0;
  v5 = qword_1801CA198[2 * (unsigned int)dword_18017B028[v3]];
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v7 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a1 - qword_1801C6908) >> 20));
    if ( !v7 || (v6 = v7 - 1, (_DWORD)v7 == 3) )
    {
      result = RtlpHpLargeFree(v5, a1);
      v2 = 3;
      goto LABEL_10;
    }
  }
  v8 = 512LL;
  if ( v6 != 1 )
    v8 = 320LL;
  v9 = v5 + v8;
  v10 = *(_QWORD *)v9 & a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v10 + 0x10) ^ v10) == v9 )
  {
    v11 = *(_BYTE *)(v9 + 8);
    v12 = v10 + 32 * ((unsigned __int64)(unsigned int)(a1 - v10) >> v11);
    v13 = v12 - 32LL * *(unsigned __int8 *)(v12 + 26);
    v14 = v10 + ((unsigned int)((v13 - v10) >> 5) << v11);
    if ( *(_BYTE *)(v13 + 24) + (v14 == a1) == 11 )
    {
      result = RtlpHpLfhContextFree(*(_QWORD *)(v9 + 24), v14, a1);
      v2 = 2;
    }
    else
    {
      result = RtlpHpSegFreeInternal(v9, a1, v13, &v16);
      v2 = v16;
    }
  }
  else
  {
    result = RtlpLogHeapFailure(9, *(_QWORD *)(v9 + 56), a1, 0, 0LL, 0LL);
  }
LABEL_10:
  if ( *(char *)(v5 + 20) < 0 )
    return RtlpLogHeapFreeEvent(v5, a1, v2);
  return result;
}
