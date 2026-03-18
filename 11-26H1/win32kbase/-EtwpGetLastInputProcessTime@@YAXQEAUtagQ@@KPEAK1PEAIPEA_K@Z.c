/*
 * XREFs of ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x140116E5C
 * Callers:
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14015F6F4 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpGetLastInputProcessTime(
        struct tagQ *const a1,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  if ( !a1 )
  {
    *a3 = 0;
LABEL_7:
    *a4 = 0;
    return;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  *a3 = a2 - *((_DWORD *)a1 + 114);
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_7;
  *a4 = a2 - *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL);
  if ( a5 )
    *a5 = *(_DWORD *)(*((_QWORD *)a1 + 3) + 24LL);
  if ( a6 )
    *a6 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL);
}
