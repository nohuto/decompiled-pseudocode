/*
 * XREFs of PspReleaseReferenceToSession @ 0x140B01E0C
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PsSessionObjectDelete @ 0x140804C20 (PsSessionObjectDelete.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspFreeSessionId @ 0x140804C60 (PspFreeSessionId.c)
 *     PspUnlinkSessionId @ 0x140804EB4 (PspUnlinkSessionId.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspReleaseReferenceToSession(__int64 P)
{
  unsigned int v2; // edi
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(P + 12), 0xFFFFFFFF) == 1 )
  {
    PspUnlinkSessionId(P);
    v2 = *(_DWORD *)(P + 8);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
    {
      v6 = 0;
      v3[0] = &v4;
      v5 = v2;
      v4 = P;
      v3[1] = 12LL;
      EtwTraceKernelEvent((int)v3, 1, 0x20400000u, 590, 5249026);
    }
    PspFreeSessionId(v2);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
