/*
 * XREFs of PpmTracePerfIdleRundown @ 0x1404D11E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PpmEventIdleStateChange @ 0x1404D12CC (PpmEventIdleStateChange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(__int64 a1)
{
  __int64 v1; // r8
  int v2; // eax
  __int64 v4; // rdx
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  _QWORD v11[2]; // [rsp+48h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 35264);
  v2 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 35272);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 80);
      v6 = *(_DWORD *)(v4 + 84);
      if ( v5 >= *(_DWORD *)(v1 + 536) )
        v5 = *(_DWORD *)(v1 + 536);
      DWORD1(v9) = v6;
      v2 = (v5 < *(_DWORD *)(v1 + 464)) + 1;
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 68);
      DWORD1(v9) = v6;
    }
    LODWORD(v9) = v2;
    v10 = *(_QWORD *)(a1 + 200);
    DWORD2(v9) = v6;
    v11[0] = &v9;
    v11[1] = 24LL;
    EtwTraceKernelEvent((int)v11, 1, 0x80008000, 4659, 5249026);
  }
  v7 = *(_QWORD *)(a1 + 34880);
  if ( v7 )
    PpmEventIdleStateChange(*(unsigned int *)(v7 + 24));
  return 0LL;
}
