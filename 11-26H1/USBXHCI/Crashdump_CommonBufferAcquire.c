/*
 * XREFs of Crashdump_CommonBufferAcquire @ 0x140050914
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x140051A50 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x140052D10 (Crashdump_EventRing_InitializeForDump.c)
 *     Crashdump_Endpoint_Initialize @ 0x1400538D4 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x140054F44 (Crashdump_UsbDevice_Initialize.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004358 (CommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall Crashdump_CommonBufferAcquire(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  _QWORD *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v4 = (a2 + 63) & 0xFFFFFFC0;
  if ( v4 <= 0x1000 )
  {
    v7 = (_DWORD *)(a1 + 516);
    v6 = 0;
    v8 = (_DWORD *)(a1 + 520);
    if ( *(_DWORD *)(a1 + 516) )
    {
      if ( v4 <= ((4096 - (*v8 & 0xFFF)) & (unsigned int)-((*v8 & 0xFFF) != 0)) )
      {
        v10 = (__int64 *)(a1 + 496);
        goto LABEL_12;
      }
      v7 = (_DWORD *)(a1 + 516);
    }
    v9 = (_QWORD *)CommonBuffer_AcquireBuffer(*(char **)(a1 + 488), 4096LL, a1, 829451588LL);
    if ( !v9 )
      return (unsigned int)-1073741670;
    v10 = (__int64 *)(a1 + 496);
    v11 = *(_QWORD *)(a1 + 496);
    if ( *(_QWORD *)(v11 + 8) != a1 + 496 )
      __fastfail(3u);
    *v9 = v11;
    v9[1] = v10;
    *(_QWORD *)(v11 + 8) = v9;
    *v10 = (__int64)v9;
    ++*(_DWORD *)(a1 + 512);
    *v8 = 0;
LABEL_12:
    v12 = *v10;
    *(_DWORD *)(a3 + 16) = v4;
    v13 = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(a3 + 8) = v13;
    *(_QWORD *)(a3 + 8) = v13 + (unsigned int)*v8;
    v14 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)a3 = v14;
    *(_QWORD *)a3 = v14 + (unsigned int)*v8;
    *v7 += v4;
    *v8 += v4;
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: CommonBuffer: %4u (0x%04X) bytes acquired, virtual: 0x%p, logical: 0x%I64X\n",
      v4,
      v4,
      *(const void **)(a3 + 8),
      *(_QWORD *)a3);
    return v6;
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_CommonBufferAcquire: Required Size: %4u\n", v4);
  return (unsigned int)-1073741670;
}
