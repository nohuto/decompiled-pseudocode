/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x140ABCEC0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4, __int16 a5, __int16 a6)
{
  __int64 ProcessServerSilo; // rax
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  __int128 *v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]

  v12 = *(_DWORD *)(a3 + 464);
  v11[0] = a1;
  v14 = (__int128 *)v11;
  v11[1] = a2;
  v10 = 0LL;
  v13 = a4;
  v15 = 24LL;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)&v14, 1, 0x20008000u, 610, 6297858);
  if ( a5 != a6 )
  {
    WORD4(v10) = a6;
    *(_QWORD *)&v10 = a1;
    v14 = &v10;
    v15 = 16LL;
    v9 = PsGetProcessServerSilo(a3);
    EtwTraceSiloKernelEvent(v9, (int)&v14, 1, 0x20008000u, 649, 6297858);
  }
}
