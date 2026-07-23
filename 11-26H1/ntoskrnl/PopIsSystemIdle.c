/*
 * XREFs of PopIsSystemIdle @ 0x1409F76FC
 * Callers:
 *     PopSystemIdleWorker @ 0x1409F7600 (PopSystemIdleWorker.c)
 * Callees:
 *     PopAssessSystemIdleEvent @ 0x1409F77C8 (PopAssessSystemIdleEvent.c)
 *     PopDiagTraceSystemIdleAssessment @ 0x1409F7B98 (PopDiagTraceSystemIdleAssessment.c)
 */

bool __fastcall PopIsSystemIdle(__int64 a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v11; // r8
  unsigned __int128 v12; // rax
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v14 = 0LL;
  v5 = -1LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned int)PopAssessSystemIdleEvent(a1, a2, &v14) )
      v4 |= 1 << i;
    if ( v5 >= v14 )
      v5 = v14;
    a1 += 56LL;
  }
  *a3 = v5;
  LOBYTE(v11) = v4 == 0;
  v12 = MEMORY[0xFFFFF78000000008] * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  *(_DWORD *)(a4 + 8) = a2;
  *(_QWORD *)a4 = *((_QWORD *)&v12 + 1) >> 23;
  *(_DWORD *)(a4 + 12) = v4;
  *(_BYTE *)(a4 + 16) = v4 == 0;
  PopDiagTraceSystemIdleAssessment(a2, v4, v11);
  return v4 == 0;
}
