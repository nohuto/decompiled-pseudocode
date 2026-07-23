/*
 * XREFs of EtwpPreserveLogger @ 0x1408346EC
 * Callers:
 *     EtwpSetSoftRestartInformation @ 0x14077ABB8 (EtwpSetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408345B0 (EtwpKsrCallback.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x14021919C (EtwpResetBufferHeader.c)
 *     EtwpFreeTraceBuffer @ 0x140482658 (EtwpFreeTraceBuffer.c)
 *     EtwpInitializeBufferHeader @ 0x1404AE3D4 (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x1404B67A4 (EtwpAllocateTraceBuffer.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1408342C0 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x140834924 (EtwpPreserveMdlList.c)
 *     EtwpAddLogHeader @ 0x140A11F48 (EtwpAddLogHeader.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveLogger(ULONG_PTR BugCheckParameter2)
{
  __m128i *v1; // rbp
  __int64 v4; // rdi
  PVOID v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // r14d
  _DWORD *Pool2; // rsi
  int v10; // edi
  _DWORD *TraceBuffer; // rax
  __int64 v12; // r13
  __int128 v13; // xmm6
  __int64 v14; // r8
  __int64 *v15; // r14
  bool v16; // zf
  PVOID *v17; // rcx
  unsigned int v18; // [rsp+80h] [rbp+8h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  PVOID *v20; // [rsp+90h] [rbp+18h]

  v1 = *(__m128i **)(BugCheckParameter2 + 1352);
  P = 0LL;
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = *(unsigned int *)(BugCheckParameter2 + 4);
  v5 = 0LL;
  v6 = v1[1];
  if ( ((v4 * (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 232) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v18 = v7 + 18;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    Pool2[2] = *(_DWORD *)(BugCheckParameter2 + 4);
    Pool2[3] = 16;
    memmove(Pool2 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    TraceBuffer = EtwpAllocateTraceBuffer(BugCheckParameter2, v4);
    v12 = (__int64)TraceBuffer;
    if ( TraceBuffer )
    {
      EtwpInitializeBufferHeader((__int16 *)BugCheckParameter2, TraceBuffer);
      EtwpResetBufferHeader(v12, 4);
      v13 = *(_OWORD *)(BugCheckParameter2 + 152);
      *(__m128i *)(BugCheckParameter2 + 152) = v6;
      EtwpAddLogHeader(BugCheckParameter2, v12);
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v12 + 48);
      *(_OWORD *)(BugCheckParameter2 + 152) = v13;
      v10 = EtwpBuildMdlForTraceBuffer(BugCheckParameter2, (char *)v12, (struct _MDL **)&P);
      if ( v10 < 0 )
        goto LABEL_18;
      ++Pool2[1];
      v15 = *(__int64 **)(BugCheckParameter2 + 80);
      v5 = P;
      v16 = v15 == (__int64 *)(BugCheckParameter2 + 80);
      v20 = (PVOID *)P;
      while ( 1 )
      {
        if ( v16 )
          v15 = 0LL;
        if ( !v15 )
          break;
        v10 = EtwpBuildMdlForTraceBuffer(BugCheckParameter2, (char *)v15[2], (struct _MDL **)&P);
        if ( v10 < 0 )
          goto LABEL_18;
        v17 = v20;
        v20 = (PVOID *)P;
        *v17 = P;
        ++Pool2[1];
        v15 = (__int64 *)*v15;
        v16 = v15 == (__int64 *)(BugCheckParameter2 + 80);
      }
      v10 = EtwpPreserveMdlList(v5, Pool2, v18, v1);
      if ( v10 < 0 )
      {
LABEL_18:
        EtwpFreeTraceBuffer(BugCheckParameter2, (char *)v12, v14);
      }
      else
      {
        v1->m128i_i64[1] = v12;
        v1[2].m128i_i8[1] = 1;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
    else
    {
      v10 = -1073741801;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
