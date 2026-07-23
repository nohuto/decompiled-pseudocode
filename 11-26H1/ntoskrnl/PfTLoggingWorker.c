/*
 * XREFs of PfTLoggingWorker @ 0x1409F1030
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 *     PfTGenerateTrace @ 0x1409F2150 (PfTGenerateTrace.c)
 */

LONG __fastcall PfTLoggingWorker(__int64 a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // eax
  int v4; // ebx
  LONG result; // eax
  int v6; // ebx
  int v7; // ebx
  unsigned int v8; // ebx
  char v9; // si
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // si
  int v14; // eax
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object[5]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+88h] [rbp-80h] BYREF

  v16 = a1;
  Timeout.QuadPart = -3000000000LL;
  Interval.QuadPart = -300000LL;
  KeSetBasePriorityThread(KeGetCurrentThread(), -1);
  Object[0] = (PVOID)(a1 + 264);
  Object[1] = (PVOID)(a1 + 200);
  Object[2] = (PVOID)(a1 + 176);
  Object[3] = (PVOID)(a1 + 736);
  v2 = v16;
  *(_QWORD *)(v16 + 256) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      v4 = v3;
      if ( v3 == 258 )
        break;
      if ( v3 < 4 )
        goto LABEL_4;
    }
    v4 = 3;
LABEL_4:
    result = KeResetEvent((PRKEVENT)Object[v4]);
    if ( !v4 )
      return result;
    if ( *(_DWORD *)(v2 + 600) >= *(_DWORD *)(v2 + 604) )
    {
      if ( v4 == 1 )
        goto LABEL_16;
    }
    else
    {
      v6 = v4 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            v8 = 0;
            while ( 1 )
            {
              v9 = PfpFlushBuffers(v2);
              if ( !v9 && (unsigned int)PfTGenerateTrace(v2) == -1073741670 )
                break;
              ++v8;
              if ( v9 || v8 >= 0x3E8 )
                goto LABEL_12;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_12:
            if ( MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v2 + 256) - MEMORY[0xFFFFF780000003B0] > 0xB2D05E00uLL )
              PfTGenerateTrace(v2);
          }
        }
        else
        {
          v10 = (unsigned __int8)PfpFlushBuffers(v2);
          v11 = PfTGenerateTrace(v2);
          if ( !(_BYTE)v10 )
          {
            if ( v11 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            PfpFlushBuffers(v2);
          }
        }
      }
      else
      {
        v12 = 0;
        do
        {
          v13 = PfpFlushBuffers(v2);
          if ( (!v13 || *(_DWORD *)(v2 + 248)) && (unsigned int)PfTGenerateTrace(v2) == -1073741670 )
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v14 = 1000;
          }
          else
          {
            v14 = 1;
          }
          v12 += v14;
        }
        while ( !v13 && v12 < 0x2710 );
LABEL_16:
        KeSetEvent((PRKEVENT)(v2 + 224), 0, 0);
      }
    }
  }
}
