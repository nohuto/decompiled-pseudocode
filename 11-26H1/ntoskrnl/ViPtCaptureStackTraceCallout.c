/*
 * XREFs of ViPtCaptureStackTraceCallout @ 0x140C4B190
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall ViPtCaptureStackTraceCallout(_DWORD *Parameter)
{
  int v2; // edi
  USHORT v3; // ax
  int v4; // r8d
  __int64 v5; // rdx
  _OWORD *v6; // rax
  PVOID *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-1B8h] BYREF
  PVOID BackTrace[50]; // [rsp+30h] [rbp-1A8h] BYREF

  memset_0(BackTrace, 0, sizeof(BackTrace));
  v2 = 0;
  BackTraceHash[0] = 0;
  v3 = RtlCaptureStackBackTrace(4u, 0x32u, BackTrace, BackTraceHash);
  v4 = v3;
  if ( v3 )
  {
    v5 = 3LL;
    v6 = Parameter + 6;
    v7 = BackTrace;
    do
    {
      v8 = *((_OWORD *)v7 + 1);
      *v6 = *(_OWORD *)v7;
      v9 = *((_OWORD *)v7 + 2);
      v6[1] = v8;
      v10 = *((_OWORD *)v7 + 3);
      v6[2] = v9;
      v11 = *((_OWORD *)v7 + 4);
      v6[3] = v10;
      v12 = *((_OWORD *)v7 + 5);
      v6[4] = v11;
      v13 = *((_OWORD *)v7 + 6);
      v6[5] = v12;
      v14 = *((_OWORD *)v7 + 7);
      v7 += 16;
      v6[6] = v13;
      v6 += 8;
      *(v6 - 1) = v14;
      --v5;
    }
    while ( v5 );
    v2 = v4;
    *v6 = *(_OWORD *)v7;
    Parameter[106] = BackTraceHash[0];
  }
  Parameter[107] = v2;
}
