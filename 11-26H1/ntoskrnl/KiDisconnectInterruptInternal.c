/*
 * XREFs of KiDisconnectInterruptInternal @ 0x140423FBC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     KiProcessPendingDisconnect @ 0x1402C3D3C (KiProcessPendingDisconnect.c)
 *     KiDisconnectInterruptCommon @ 0x140423DC4 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     HalDisableInterrupt @ 0x1404240E0 (HalDisableInterrupt.c)
 */

__int64 __fastcall KiDisconnectInterruptInternal(__int64 a1, __int64 a2)
{
  char v4; // cl
  __int64 result; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // r8

  v4 = 0;
  result = 3221225711LL;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(unsigned int *)(a1 + 88);
    v7 = KeGetCurrentPrcb()->InterruptObject[v6];
    if ( !*((_BYTE *)v7 + 93) )
    {
      v11 = (_QWORD *)v7[1];
      if ( !v11 || v11 == v7 + 1 )
        v4 = 1;
    }
    if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v7[10] != KiChainedDispatch
      || v4 )
    {
      HalDisableInterrupt(a2);
      KeGetCurrentPrcb()->InterruptObject[v6] = 0LL;
      result = 0LL;
    }
    else
    {
      if ( (_QWORD *)a1 == v7 )
      {
        v7 = (_QWORD *)(v7[1] - 8LL);
        v7[10] = KiChainedDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = v7;
      }
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v8 + 8) != a1 + 8 || *v9 != a1 + 8 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = v7[1] - 8LL;
      if ( v7 == (_QWORD *)v10 )
      {
        if ( *(_BYTE *)(v10 + 93) )
        {
          *(_QWORD *)(v10 + 80) = KiInterruptDispatch;
          KeGetCurrentPrcb()->InterruptObject[v6] = (void *)v10;
        }
      }
      result = 296LL;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return result;
}
