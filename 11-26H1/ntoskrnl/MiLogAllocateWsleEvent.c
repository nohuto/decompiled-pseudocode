/*
 * XREFs of MiLogAllocateWsleEvent @ 0x14050F86C
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  _KPROCESS *Process; // rdx
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int16 v9; // r9
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 *v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]

  v3 = *(_QWORD *)(a1 + 40) >> 63;
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 )
    Process = 0LL;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  MiIdentifyPfnWrapper(a1, (__int64)Process, &v11);
  if ( (_DWORD)v3 )
  {
    v7 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( a2 )
      v7 |= 2uLL;
    *((_QWORD *)&v12 + 1) = v7;
    v8 = 32;
    v9 = 642;
  }
  else
  {
    v8 = 24;
    v9 = 630;
  }
  v14 = v8;
  v13 = &v11;
  v15 = 0;
  return EtwTraceKernelEvent((int)&v13, 1, 0x28000001u, v9, 290462468);
}
