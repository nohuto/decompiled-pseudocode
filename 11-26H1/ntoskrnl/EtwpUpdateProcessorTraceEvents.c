/*
 * XREFs of EtwpUpdateProcessorTraceEvents @ 0x140836714
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

__int64 __fastcall EtwpUpdateProcessorTraceEvents(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v8; // rax
  __int64 i; // rbx
  int v10; // ecx
  signed __int32 v12[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( a3 - 1 > 3 )
    return 3221225485LL;
  v8 = *(_QWORD **)(a1 + 1080);
  if ( !v8 || !*v8 )
    return 3221225485LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v12[8] = i;
    if ( (unsigned int)i >= a3 )
      break;
    if ( a4 )
      LOWORD(v10) = RtlReadULongFromUser((unsigned int *)(a2 + 4 * i));
    else
      v10 = *(_DWORD *)(a2 + 4 * i);
    *(_WORD *)(*(_QWORD *)(a1 + 1080) + 2 * i + 28) = v10;
  }
  _InterlockedOr(v12, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 1080) + 24LL) = a3;
  return 0LL;
}
