/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x140252764
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     HvlpAffinityToVirtualAffinity @ 0x140252BA0 (HvlpAffinityToVirtualAffinity.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1407370C0 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  int v4; // r9d
  unsigned int v5; // r9d
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-9h] BYREF
  __int64 v14; // [rsp+38h] [rbp-1h]
  __int128 v15; // [rsp+40h] [rbp+7h] BYREF
  __int128 v16; // [rsp+50h] [rbp+17h]
  _QWORD v17[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v18; // [rsp+70h] [rbp+37h]

  LOBYTE(a3) = -(char)a3;
  v14 = 2LL;
  v3 = a1;
  v4 = ((_BYTE)a3 == 0 ? 4 : 0) | 2;
  if ( a1 )
    v4 = (_BYTE)a3 == 0 ? 4 : 0;
  if ( a2 )
  {
    v18 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(a2 + 8));
  }
  else
  {
    v5 = v4 | 1;
    v18 = 0LL;
  }
  v17[1] = v5;
  v17[0] = v3;
  LODWORD(v14) = 65538;
  v15 = 0LL;
  v16 = 0LL;
  if ( (BYTE4(xmmword_140FC0C10) & 0x10) == 0 )
  {
    v6 = 0;
    goto LABEL_15;
  }
  v8 = qword_140FC9C80;
  v10 = 0;
  LODWORD(v13) = 0;
  v6 = 1;
  if ( qword_140FC9C80 )
  {
    a3 = *(unsigned int *)(qword_140FC9C80 + 4520);
    while ( _BitScanForward((unsigned int *)&a1, a3) )
    {
      a3 = ((_DWORD)a3 - 1) & (unsigned int)a3;
      v12 = qword_140FC9C80 + 32LL * (unsigned int)a1 + 4556;
      if ( v12 && (*(_DWORD *)(v12 + 20) & 0x10) != 0 )
        v10 |= 1 << *(_BYTE *)(qword_140FC9C80 + 2 * a1 + 4505);
    }
    if ( (v10 & 2) == 0 )
      goto LABEL_9;
  }
  else
  {
    LOBYTE(v10) = 30;
  }
  *(_QWORD *)&v15 = EtwpGetPerfCounter(a1, qword_140FC9C80, a3);
LABEL_9:
  if ( (v10 & 4) != 0 )
    *((LARGE_INTEGER *)&v15 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v15 + 1) = 0LL;
  if ( (v10 & 8) != 0 )
  {
    v7 = __rdtsc();
    v8 = (unsigned __int64)HIDWORD(v7) << 32;
    *(_QWORD *)&v16 = v7;
  }
  else
  {
    *(_QWORD *)&v16 = 0LL;
  }
  if ( (v10 & 0x10) != 0 )
    *((_QWORD *)&v16 + 1) = EtwpGetHostPerfCounter(a1, v8, a3);
  else
    *((_QWORD *)&v16 + 1) = 0LL;
LABEL_15:
  result = HvcallpExtendedFastHypercall(v14, v17, 24LL);
  if ( v6 )
  {
    v13 = 0x100000002LL;
    return EtwTraceTimedEvent(3954, -1610612720, (unsigned int)&v13, 8, 5246466, (__int64)&v15);
  }
  return result;
}
