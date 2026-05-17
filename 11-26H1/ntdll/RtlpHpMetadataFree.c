/*
 * XREFs of RtlpHpMetadataFree @ 0x180087EE8
 * Callers:
 *     RtlpFreeHeapMetadata @ 0x180087C20 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x180087E9C (RtlpFlsHeapFree.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18008D4B8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18008ED18 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1BC4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpTagRunOnceInit @ 0x1801023C0 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115EC4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014F3D4 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014F620 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014F848 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014F9F0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157F90 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180017DFC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegFreeInternal @ 0x18001AD38 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
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
  __int64 result; // rax
  __int64 v16; // r9
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)BYTE1(*a2);
  v17 = 0;
  v5 = qword_1801CB148[2 * (unsigned int)dword_18017C068[v3]];
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v7 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((unsigned __int64)(a1 - qword_1801C78B8) >> 20));
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
      result = RtlpHpSegFreeInternal(v9, a1, v13, &v17);
      v2 = v17;
    }
  }
  else
  {
    result = RtlpLogHeapFailure(9, *(_QWORD *)(v9 + 56), a1, 0, 0LL, 0LL);
  }
LABEL_10:
  if ( *(char *)(v5 + 20) < 0 )
    return RtlpLogHeapFreeEvent(v5, a1, v2, v16);
  return result;
}
