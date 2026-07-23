/*
 * XREFs of PoCreatePowerLimitRequest @ 0x1407CD340
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     PopAssociatePowerLimitRequest @ 0x1407CD8A0 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoCreatePowerLimitRequest(_QWORD *a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  _QWORD *v5; // rcx
  int v7; // ebx
  _QWORD *Pool2; // rdi
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v7 = PoCaptureReasonContext(a4, 0LL, a3, 1, 0LL, (PVOID *)&v10);
    if ( v7 >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        Pool2[3] = v10;
        v7 = PopAssociatePowerLimitRequest(Pool2, a2);
        if ( v7 < 0 )
        {
          PopFreePowerLimitRequest(Pool2);
        }
        else
        {
          *a1 = Pool2;
          return 0;
        }
        return (unsigned int)v7;
      }
      v7 = -1073741670;
    }
    v5 = v10;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v5 )
    PoDestroyReasonContext(v5);
  return (unsigned int)v7;
}
