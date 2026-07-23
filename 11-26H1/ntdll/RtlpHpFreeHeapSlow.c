/*
 * XREFs of RtlpHpFreeHeapSlow @ 0x180080730
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180004CE0 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x180002EDC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800809B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpFreeHeapSlow(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  int v7; // r14d
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
  unsigned int v19; // eax
  void *UniqueThread; // r8
  int v21; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v21 = 0;
  v7 = 0;
  if ( (a3 & 0x20) == 0 )
    goto LABEL_28;
  if ( !*(_DWORD *)(a1 + 24) )
    goto LABEL_28;
  v8 = RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, a2, a3, 0LL);
  if ( v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL || (*(_BYTE *)(v8 + 2) & 0xF) == 0 )
    goto LABEL_28;
  __writegsqword(0x250u, 0LL);
  v9 = RtlpCallInterceptRoutine(*(_BYTE *)(v8 + 2) & 0xF, a1, a2, 3u, v8 + 16);
  __writegsqword(0x250u, a1 + 20);
  v10 = *(unsigned int *)(a1 + 20);
  if ( (v10 & 0x10) != 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( *(_DWORD *)(a1 + 224) != (_DWORD)UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v10, UniqueThread);
  }
  if ( v9 >= 0 )
  {
LABEL_28:
    if ( (a3 & 0x2000) != 0 && RtlpHpSizeHeap(a1, a2, a3) == -1 )
    {
      RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
      return v3;
    }
    if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
      RtlpHpStackTraceRemoveStack(a1, a2);
    if ( (_WORD)a2 )
    {
      v12 = a1 + 320;
    }
    else
    {
      v13 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801C6908) >> 20));
      if ( !v13 || (_DWORD)v13 == 3 )
      {
        v7 = 3;
        LOBYTE(v3) = RtlpHpLargeFree(a1, (char *)a2) != 0;
        goto LABEL_20;
      }
      v12 = a1 + 320;
      if ( (_DWORD)v13 == 2 )
        v12 = a1 + 512;
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
        v19 = RtlpHpSegFreeInternal(v12, a2, v17, &v21);
        v7 = v21;
        v3 = v19;
      }
    }
LABEL_20:
    if ( *(char *)(a1 + 20) < 0 && v3 )
      RtlpLogHeapFreeEvent(a1, a2, v7);
  }
  return v3;
}
