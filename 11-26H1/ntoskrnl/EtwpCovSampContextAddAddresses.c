/*
 * XREFs of EtwpCovSampContextAddAddresses @ 0x140A321BC
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x140A31888 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140A35F88 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpCovSampContextAddSamples @ 0x140A31980 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampProcessMapAddresses @ 0x140A32690 (EtwpCovSampProcessMapAddresses.c)
 */

__int64 __fastcall EtwpCovSampContextAddAddresses(
        struct _KTHREAD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // rcx
  int v7; // r15d
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned int i; // ebx
  int v12; // r14d
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v16; // [rsp+40h] [rbp-268h] BYREF
  unsigned __int64 *v17; // [rsp+48h] [rbp-260h]
  _BYTE v18[512]; // [rsp+50h] [rbp-258h] BYREF

  v17 = a3;
  v5 = *a3;
  v7 = (int)a3;
  v16 = 0;
  v9 = 0;
  if ( MmIsKernelAddress(v5) )
  {
    LODWORD(v10) = (_DWORD)a1 + 1264;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 1904);
    if ( !v10 )
      return v9;
  }
  for ( i = 0; i < a4; i += v12 )
  {
    v12 = 64;
    if ( a4 - i < 0x40 )
      v12 = a4 - i;
    EtwpCovSampProcessMapAddresses(v10, (_DWORD)a1 + 16, v7 + 8 * i, v12, (__int64)v18, 64, (__int64)&v16);
    v13 = v16;
    if ( v16 )
    {
      v14 = EtwpCovSampContextAddSamples(a1, (__int64)v18, v16);
      v9 += v14;
      if ( v14 != v13 )
        break;
    }
    v7 = (int)v17;
  }
  return v9;
}
