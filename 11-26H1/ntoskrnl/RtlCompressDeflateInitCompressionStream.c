/*
 * XREFs of RtlCompressDeflateInitCompressionStream @ 0x140629534
 * Callers:
 *     RtlCompressBufferDeflateInternal @ 0x140627B78 (RtlCompressBufferDeflateInternal.c)
 * Callees:
 *     AlignWorkspace @ 0x140629518 (AlignWorkspace.c)
 *     deflateReset @ 0x14062AC3C (deflateReset.c)
 */

__int64 __fastcall RtlCompressDeflateInitCompressionStream(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r11d
  bool v18; // zf
  int v19; // r8d
  int v20; // edx
  unsigned __int64 v22; // [rsp+48h] [rbp+28h] BYREF

  a1[5] = a4;
  a1[6] = HalSystemVectorDispatchEntry;
  a1[7] = xHalTimerWatchdogStop;
  v22 = a4 + 6000;
  AlignWorkspace(&v22);
  *(_QWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = 42;
  *(_DWORD *)(v4 + 44) = v6 == 1;
  *(_DWORD *)(v4 + 152) = 15;
  *(_DWORD *)(v4 + 156) = 0x7FFF;
  *(_DWORD *)(v4 + 204) = 0x7FFF;
  v7 = v22;
  *(_QWORD *)(v4 + 160) = v22;
  *(_DWORD *)(v4 + 200) = 15;
  *(_DWORD *)(v4 + 148) = 0x8000;
  *(_DWORD *)(v4 + 196) = 0x8000;
  v22 = v7 + 0x10000;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_DWORD *)(v4 + 208) = 5;
  AlignWorkspace(&v22);
  v8 = v22;
  *(_QWORD *)(v9 + 176) = v22;
  v22 = v10 + v8;
  AlignWorkspace(&v22);
  v11 = v22;
  *(_QWORD *)(v12 + 184) = v22;
  v22 = v13 + v11;
  AlignWorkspace(&v22);
  v15 = v22;
  *(_QWORD *)(v16 + 16) = v22;
  v18 = HIDWORD(RtlpBootStatHandleLock.StackLimit) == v17;
  *(_DWORD *)(v16 + 5988) = v17;
  *(_DWORD *)(v16 + 5952) = 0x4000;
  *(_DWORD *)(v16 + 24) = v19;
  *(_QWORD *)(v16 + 5944) = v15 + 0x4000;
  *(_DWORD *)(v16 + 5960) = 49149;
  *(_DWORD *)(v16 + 252) = v20;
  *(_DWORD *)(v16 + 256) = v17;
  *(_BYTE *)(v16 + 60) = 8;
  if ( !v18 )
    *(_DWORD *)(*(_QWORD *)(v14 + 40) + 5992LL) = 1;
  return deflateReset(v14);
}
