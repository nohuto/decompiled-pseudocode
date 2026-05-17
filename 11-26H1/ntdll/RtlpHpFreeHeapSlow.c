/*
 * XREFs of RtlpHpFreeHeapSlow @ 0x180089330
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180019C00 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180017DFC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSizeHeap @ 0x18001A0F0 (RtlpHpSizeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x18001AD38 (RtlpHpSegFreeInternal.c)
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800895B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x1801212E4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpFreeHeapSlow(unsigned int *a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  char v15; // cl
  unsigned __int64 v16; // r11
  __int64 v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // eax
  void *UniqueThread; // r8
  unsigned int v22; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v22 = 0;
  v7 = 0;
  if ( (a3 & 0x20) == 0 )
    goto LABEL_28;
  if ( !a1[6] )
    goto LABEL_28;
  v8 = RtlpHpExtrasGet((__int64)a1, a2, a3, 0LL);
  if ( v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL || (*(_BYTE *)(v8 + 2) & 0xF) == 0 )
    goto LABEL_28;
  __writegsqword(0x250u, 0LL);
  v9 = RtlpCallInterceptRoutine(*(_BYTE *)(v8 + 2) & 0xF, (__int64)a1, a2, 3);
  __writegsqword(0x250u, (unsigned __int64)(a1 + 5));
  v10 = a1[5];
  if ( (v10 & 0x10) != 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( a1[56] != (_DWORD)UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 5, v10, UniqueThread);
  }
  if ( v9 >= 0 )
  {
LABEL_28:
    if ( (a3 & 0x2000) != 0 && RtlpHpSizeHeap((__int64)a1, a2, a3) == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
      return v3;
    }
    if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
      RtlpHpStackTraceRemoveStack((__int64)a1, a2);
    if ( (_WORD)a2 )
    {
      v12 = (__int64)(a1 + 80);
    }
    else
    {
      v13 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((a2 - qword_1801C78B8) >> 20));
      if ( !v13 || (_DWORD)v13 == 3 )
      {
        v7 = 3;
        LOBYTE(v3) = RtlpHpLargeFree((__int64)a1, a2) != 0;
        goto LABEL_20;
      }
      v12 = (__int64)(a1 + 80);
      if ( (_DWORD)v13 == 2 )
        v12 = (__int64)(a1 + 128);
    }
    v14 = *(_QWORD *)v12 & a2;
    if ( RtlpHpHeapGlobals ^ v12 ^ *(_QWORD *)(v14 + 0x10) ^ v14 )
    {
      RtlpLogHeapFailure(9, *(_QWORD *)(v12 + 56), a2, 0, 0LL, 0LL);
    }
    else
    {
      v15 = *(_BYTE *)(v12 + 8);
      v16 = v14 + 32 * ((unsigned __int64)(unsigned int)(a2 - v14) >> v15);
      v17 = v16 - 32LL * *(unsigned __int8 *)(v16 + 26);
      v18 = v14 + ((unsigned int)((__int64)(v17 - v14) >> 5) << v15);
      if ( *(_BYTE *)(v17 + 24) + (v18 == a2) == 11 )
      {
        v3 = RtlpHpLfhContextFree(*(_QWORD *)(v12 + 24), v18, a2);
        v7 = 2;
      }
      else
      {
        v20 = RtlpHpSegFreeInternal(v12, a2, v17, &v22);
        v7 = v22;
        v3 = v20;
      }
    }
LABEL_20:
    if ( *((char *)a1 + 20) < 0 && v3 )
      RtlpLogHeapFreeEvent((__int64)a1, a2, v7, v19);
  }
  return v3;
}
