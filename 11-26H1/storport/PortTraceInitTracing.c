/*
 * XREFs of PortTraceInitTracing @ 0x1401304F0
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x14008DA68 (RaidHandleTraceNotifyType.c)
 * Callees:
 *     PortTraceErrorRegisterDriver @ 0x1401B2058 (PortTraceErrorRegisterDriver.c)
 */

void __fastcall PortTraceInitTracing(__int64 a1)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  _QWORD *Pool2; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v1 = *(_QWORD **)a1;
  if ( **(_DWORD **)a1 == 56 )
  {
    v3 = v1[5] == 0LL;
    v1[6] = 0LL;
    if ( v3 )
    {
      *(_DWORD *)(a1 + 8) = 0;
    }
    else
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 160LL, 1666477136LL);
      v5 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 160;
        v6 = v1[5];
        Pool2[1] = v6;
        Pool2[2] = *(_QWORD *)(v6 + 104);
        *(_QWORD *)(v6 + 104) = v1[4];
        PortTraceErrorRegisterDriver(Pool2);
        v1[6] = v5;
        *(_DWORD *)(a1 + 8) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 8) = -1073741670;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741811;
  }
}
