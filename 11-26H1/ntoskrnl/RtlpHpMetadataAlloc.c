/*
 * XREFs of RtlpHpMetadataAlloc @ 0x1403542D4
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x14063AAF4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapAllocate @ 0x14063B058 (RtlpHpHeapAllocate.c)
 *     ExpSecurePoolCreate @ 0x1406D506C (ExpSecurePoolCreate.c)
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 *     RtlpLogHeapAllocateEvent @ 0x140530058 (RtlpLogHeapAllocateEvent.c)
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, __int128 *a4)
{
  __int128 v4; // xmm0
  __int64 v5; // rbx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // r14d
  __int64 HeapInternal; // rax
  int v15; // edi
  __int64 v16; // rcx
  _QWORD Parameter[5]; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a4;
  v5 = 0LL;
  Parameter[0] = *(_QWORD *)a4;
  BYTE3(Parameter[0]) = 0;
  Parameter[1] = 0LL;
  v9 = (unsigned int)dword_140021C58[BYTE1(v4)];
  BYTE1(Parameter[0]) = dword_140021C58[BYTE1(Parameter[0])];
  v10 = 2 * v9;
  if ( !qword_140E6BF18[v10]
    && RtlRunOnceExecuteOnce(
         (PRTL_RUN_ONCE)((char *)&unk_140E6BF20 + v10 * 8),
         RtlpHpMetadataHeapCreate,
         Parameter,
         0LL) < 0 )
  {
    return v5;
  }
  v11 = qword_140E6BF18[v10];
  v12 = 3;
  v18 = 3;
  if ( !a3 )
  {
    HeapInternal = RtlpHpAllocateHeapInternal(v11, a1, a1, 0, (__int64)&v18);
    v12 = v18;
LABEL_4:
    v5 = HeapInternal;
    goto LABEL_5;
  }
  v15 = a3 - 1;
  if ( !v15 )
  {
    v16 = v11 + 512;
    if ( a1 <= *(unsigned int *)(v11 + 336) )
      v16 = v11 + 320;
    HeapInternal = RtlpHpSegAlloc(v16, a1, a1, a2, a2 < a1 ? 0x2000000 : 0);
    goto LABEL_4;
  }
  if ( v15 == 1 )
  {
    HeapInternal = (__int64)RtlpHpVsContextAllocate((unsigned __int16 *)(v11 + 704), (unsigned int)a2, a2, 0);
    goto LABEL_4;
  }
LABEL_5:
  if ( (*(_DWORD *)(v11 + 20) & 0x80u) != 0 )
    RtlpLogHeapAllocateEvent(v11, v5, a1, v12);
  return v5;
}
