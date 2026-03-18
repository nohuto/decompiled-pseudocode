/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400DD4A0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1400DB7E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1400DC180 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceThreadExit @ 0x1400DC6AC (EtwTraceThreadExit.c)
 *     EtwTraceMessageCheckDelay @ 0x1400DCB00 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14015F6F4 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  unsigned __int64 v2; // rcx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  bool v8; // cf
  __int64 v9; // rax
  int v10; // edx
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edi
  __int64 v16; // rdx
  int result; // eax

  v2 = *((_QWORD *)a1 + 170);
  v3 = (v2 >> 31) & 1 | 2;
  if ( (v2 & 0x100000000LL) == 0 )
    v3 = (v2 >> 31) & 1;
  if ( (v2 & 0x200000000LL) != 0 )
    v3 |= 4u;
  v4 = v3 | 8;
  if ( !*((_DWORD *)a1 + 234) )
    v4 = v3;
  v5 = v4 | 0x10;
  if ( !*((_DWORD *)a1 + 233) )
    v5 = v4;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) < 0 )
    v5 |= 0x20u;
  v6 = v5 | 0x40;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 1) == 0 )
    v6 = v5;
  v7 = v6 | 0x200;
  v8 = (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 0x400) != 0;
  v9 = *((_QWORD *)a1 + 58);
  if ( !v8 )
    v7 = v6;
  v10 = v7 | 0x80;
  if ( !*((_QWORD *)a1 + 161) )
    v10 = v7;
  v11 = v10;
  if ( v9 && *(_DWORD *)(v9 + 40) )
    v11 = v10 | 0x100;
  v15 = v11 | 0x400;
  if ( *(struct tagTHREADINFO *const *)(W32GetUserSessionState(v7, v10, v5) + 18944) != a1 )
    v15 = v11;
  v16 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 18928);
  result = v15 | 0x800;
  if ( *((_QWORD *)a1 + 58) != v16 )
    return v15;
  return result;
}
