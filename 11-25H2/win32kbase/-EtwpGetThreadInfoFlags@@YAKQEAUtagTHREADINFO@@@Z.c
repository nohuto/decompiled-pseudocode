/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400A5530
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1400A4BA0 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceThreadExit @ 0x1400A50EC (EtwTraceThreadExit.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1401212A8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     EtwTraceInputProcessDelay @ 0x14016D040 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x14016D900 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  __int64 v1; // r9
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx
  bool v8; // cf
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  int result; // eax

  v1 = *((_QWORD *)a1 + 170);
  v3 = ((int)v1 < 0) + 2;
  if ( (v1 & 0x100000000LL) == 0 )
    v3 = (int)v1 < 0;
  if ( (v1 & 0x200000000LL) != 0 )
    v3 |= 4u;
  v4 = v3 | 8;
  if ( !*((_DWORD *)a1 + 237) )
    v4 = v3;
  v5 = v4 | 0x10;
  if ( !*((_DWORD *)a1 + 236) )
    v5 = v4;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) < 0 )
    v5 |= 0x20u;
  v6 = v5 | 0x40;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 1) == 0 )
    v6 = v5;
  v7 = v6;
  LODWORD(v7) = v6 | 0x200;
  v8 = (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0x400) != 0;
  v9 = *((_QWORD *)a1 + 59);
  if ( !v8 )
    v7 = v6;
  v10 = (unsigned int)v7;
  LODWORD(v10) = v7 | 0x80;
  if ( !*((_QWORD *)a1 + 161) )
    v10 = (unsigned int)v7;
  v11 = v10;
  if ( v9 && *(_DWORD *)(v9 + 40) )
    v11 = v10 | 0x100;
  v14 = v11 | 0x400;
  if ( *(struct tagTHREADINFO *const *)(W32GetUserSessionState(v7, v10) + 18904) != a1 )
    v14 = v11;
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18888);
  result = v14 | 0x800;
  if ( *((_QWORD *)a1 + 59) != v15 )
    return v14;
  return result;
}
