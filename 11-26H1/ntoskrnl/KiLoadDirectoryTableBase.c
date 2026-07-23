/*
 * XREFs of KiLoadDirectoryTableBase @ 0x140248F60
 * Callers:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140307D60 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     HvcallpNoHypervisorPresent @ 0x1404DF730 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiLoadDirectoryTableBase(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  char v6; // si
  __int64 v7; // r8
  int v8; // edi
  bool i; // zf
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]

  v2 = a2;
  if ( KiKvaShadow )
  {
    v3 = a2 | 0x8000000000000000uLL;
    if ( (a2 & 2) == 0 )
      v3 = a2;
    __writegsqword(0xB000u, v3);
    KiSetAddressPolicy(*(unsigned __int8 *)(a1 + 352), a2);
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) == 0 )
  {
    __writecr3(v2);
    goto LABEL_7;
  }
  v12[1] = 65537LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (BYTE4(xmmword_140FC0C10) & 0x10) == 0 )
  {
    v6 = 0;
    goto LABEL_26;
  }
  v7 = qword_140FC9C80;
  v6 = 1;
  v8 = 0;
  LODWORD(v12[0]) = 0;
  if ( qword_140FC9C80 )
  {
    a2 = *(unsigned int *)(qword_140FC9C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a1, a2); !i; i = !_BitScanForward((unsigned int *)&a1, a2) )
    {
      a2 = ((_DWORD)a2 - 1) & (unsigned int)a2;
      v10 = qword_140FC9C80 + 32 * a1 + 4556;
      if ( v10 && (*(_DWORD *)(v10 + 20) & 0x10) != 0 )
        v8 |= 1 << *(_BYTE *)(qword_140FC9C80 + 2 * a1 + 4505);
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_20;
  }
  else
  {
    LOBYTE(v8) = 30;
  }
  *(_QWORD *)&v13 = EtwpGetPerfCounter(a1, a2, qword_140FC9C80);
LABEL_20:
  if ( (v8 & 4) != 0 )
    *((LARGE_INTEGER *)&v13 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v13 + 1) = 0LL;
  if ( (v8 & 8) != 0 )
  {
    v11 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v11) << 32;
    *(_QWORD *)&v14 = v11;
  }
  else
  {
    *(_QWORD *)&v14 = 0LL;
  }
  if ( (v8 & 0x10) != 0 )
    *((_QWORD *)&v14 + 1) = EtwpGetHostPerfCounter(a1, a2, v7);
  else
    *((_QWORD *)&v14 + 1) = 0LL;
LABEL_26:
  result = HvcallCodeVa();
  if ( v6 )
  {
    v12[0] = 0x100000001LL;
    result = EtwTraceTimedEvent(3954, -1610612720, (unsigned int)v12, 8, 5246466, (__int64)&v13);
  }
LABEL_7:
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v5 = __readcr4();
    if ( (v5 & 0x20080) != 0 )
    {
      result = v5 ^ 0x80;
      __writecr4(v5 ^ 0x80);
      __writecr4(v5);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  return result;
}
