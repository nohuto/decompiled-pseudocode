/*
 * XREFs of RtlpHpMetadataFree @ 0x140354540
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x14063AAF4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x14063AE6C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14063D8E0 (RtlpHpLargeAllocationDestroy.c)
 *     ExpSecurePoolCreate @ 0x1406D506C (ExpSecurePoolCreate.c)
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 *     ExpPoolDestroy @ 0x14084C7D4 (ExpPoolDestroy.c)
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 *     ExpPoolHeapDestroy @ 0x14084C92C (ExpPoolHeapDestroy.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLfhContextFree @ 0x140355DF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x140628EF0 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r8
  char v10; // cl
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r11
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)BYTE1(*a2);
  v16 = 0;
  v5 = qword_140E6BF18[2 * (unsigned int)dword_140021C58[v3]];
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v15 = RtlCSparseBitmapBitmaskRead((__int64)&ExpUuidLock.CycleTime, 2 * ((a1 - ExpUuidLock.ThreadLock) >> 20));
    if ( !v15 || (v6 = v15 - 1, (_DWORD)v15 == 3) )
    {
      RtlpHpLargeFree(v5, a1);
      v2 = 3;
      goto LABEL_8;
    }
  }
  v7 = 512LL;
  if ( v6 != 1 )
    v7 = 320LL;
  v8 = v5 + v7;
  v9 = *(_QWORD *)v8 & a1;
  if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v9 + 0x10) ^ v9) == v8 )
  {
    v10 = *(_BYTE *)(v8 + 8);
    v11 = v9 + 32 * ((unsigned __int64)(unsigned int)(a1 - v9) >> v10);
    v12 = v11 - 32LL * *(unsigned __int8 *)(v11 + 26);
    v13 = v9 + ((unsigned int)((__int64)(v12 - v9) >> 5) << v10);
    if ( *(_BYTE *)(v12 + 24) + (v13 == a1) == 11 )
    {
      RtlpHpLfhContextFree(*(_QWORD *)(v8 + 24), v13, a1);
      v2 = 2;
    }
    else
    {
      RtlpHpSegFreeInternal(v8, a1, v12, &v16);
      v2 = v16;
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v8 + 56), a1, 0, 0LL, 0LL);
  }
LABEL_8:
  result = *(unsigned int *)(v5 + 20);
  if ( (result & 0x80u) != 0LL )
    return RtlpLogHeapFreeEvent(v5, a1, v2);
  return result;
}
