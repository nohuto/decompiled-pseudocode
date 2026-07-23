/*
 * XREFs of EtwpTraceIoInit @ 0x1402189B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceIoInit(__int64 a1)
{
  _BYTE *v1; // rax
  __int16 v3; // di
  __int64 v4; // rsi
  __int64 ThreadServerSilo; // rax
  int v6; // ecx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_BYTE **)(a1 + 184);
  v9 = 0;
  if ( *v1 == 3 )
  {
    v3 = 268;
  }
  else
  {
    v3 = 271;
    if ( *v1 != 9 )
      v3 = 269;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(*(_QWORD *)(a1 + 152));
    v7 = a1;
    v6 = *(_DWORD *)(v4 + 1296);
  }
  else
  {
    ThreadServerSilo = 0LL;
    v7 = a1;
    v6 = -1;
  }
  v8 = v6;
  v10[0] = &v7;
  v10[1] = 12LL;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)v10, 1, 0x400u, v3, 23075075);
}
