/*
 * XREFs of EtwpFileModeCompress @ 0x1403F2148
 * Callers:
 *     EtwpFlushBuffer @ 0x140A13E4C (EtwpFlushBuffer.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlCompressBufferXpressLz @ 0x1403F22F0 (RtlCompressBufferXpressLz.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpPrepareHeader @ 0x140A12BF8 (EtwpPrepareHeader.c)
 */

__int64 __fastcall EtwpFileModeCompress(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  LARGE_INTEGER v5; // rbx
  int v6; // eax
  LARGE_INTEGER v7; // rax
  __int128 v8; // rtt
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // [rsp+40h] [rbp-9h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp+7h] BYREF
  LARGE_INTEGER *p_PerformanceFrequency; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  PerformanceFrequency.QuadPart = 0LL;
  v13 = 0;
  v4 = 0;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v6 = RtlCompressBufferXpressLz(
         0LL,
         a2 + 72,
         (unsigned int)(*(_DWORD *)(a1 + 4) - 72),
         *(_QWORD *)(a1 + 1416) + 72LL,
         *(_DWORD *)(a1 + 4) - 72,
         0,
         &v13,
         *(_QWORD *)(a1 + 1424));
  if ( v6 >= 0 )
  {
    if ( v13 >= (unsigned __int64)*(unsigned int *)(a1 + 4) - 72 )
      goto LABEL_8;
    v10 = *(_QWORD *)(a1 + 1416);
    *(_OWORD *)v10 = *(_OWORD *)a2;
    *(_OWORD *)(v10 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v10 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v10 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v10 + 64) = *(_QWORD *)(a2 + 64);
    v11 = v13;
    *(_WORD *)(v10 + 52) |= 0x40u;
    v12 = *(unsigned __int16 *)(v10 + 52);
    *(_DWORD *)v10 = v11 + 72;
    *(_DWORD *)(v10 + 44) = 3;
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)EtwpPrepareHeader(a1, v10, v12) )
LABEL_8:
      v4 = -1073741811;
  }
  else
  {
    v4 = v6;
  }
  v8 = 100000000 * (*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - v5.QuadPart);
  v7.QuadPart = v8 / PerformanceFrequency.QuadPart;
  if ( (unsigned int)dword_140E08F78 > 5 )
  {
    PerformanceFrequency = v7;
    v17 = 8LL;
    p_PerformanceFrequency = &PerformanceFrequency;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08F78,
      (unsigned __int8 *)&dword_140055F84,
      0LL,
      0LL,
      3u,
      &v15);
  }
  return v4;
}
