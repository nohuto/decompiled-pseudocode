/*
 * XREFs of KiConnectInterrupt @ 0x140431660
 * Callers:
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiInsertInterruptObjectOrdered @ 0x1404305F8 (KiInsertInterruptObjectOrdered.c)
 *     KiAcquireInterruptConnectLock @ 0x14043081C (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiConnectInterrupt(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bp
  int v3; // edx
  char v4; // r14
  unsigned int v5; // r9d
  unsigned __int8 v7; // al
  _KIDTENTRY64 *IdtBase; // rcx
  __int64 (__fastcall *v9)(); // rax
  bool v10; // zf
  char *v11; // r10
  __int64 (__fastcall *v13)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax
  __int64 v14; // r11
  __int64 v15; // r10
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = 0;
  v3 = *(unsigned __int8 *)(a1 + 92);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 96);
  v16[0] = 0;
  PreviousAffinity = 0LL;
  if ( (unsigned int)v1 > 0xFF || (unsigned __int8)v3 > 0xFu || v3 != (unsigned int)v1 >> 4 && (_BYTE)v3 )
    return 3221225711LL;
  if ( v5 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < (unsigned __int8)v3 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  KiAcquireInterruptConnectLock(v5, v16, &PreviousAffinity);
  if ( KiFredEnabled )
  {
    v10 = KiFredVectors[v1] == (_QWORD)KiInterruptLinkage;
  }
  else
  {
    IdtBase = KeGetPcr()->IdtBase;
    LOWORD(v17) = IdtBase[v1].OffsetLow;
    WORD1(v17) = IdtBase[v1].OffsetMiddle;
    HIDWORD(v17) = IdtBase[v1].OffsetHigh;
    v9 = KiIsrThunkShadow;
    if ( !KiKvaShadow )
      v9 = KxUnexpectedInterrupt0;
    v10 = v17 == (_QWORD)v9 + 8 * v1;
  }
  if ( !*(_BYTE *)(a1 + 95) && v10 )
  {
    v11 = (char *)KeGetCurrentPrcb()->InterruptObject[v1];
    if ( !v11 )
    {
      if ( !*(_BYTE *)(a1 + 93) )
      {
        *(_QWORD *)(a1 + 16) = a1 + 8;
        *(_QWORD *)(a1 + 8) = a1 + 8;
        *(_QWORD *)(a1 + 80) = KiChainedDispatch;
      }
      v4 = 1;
      *(_BYTE *)(a1 + 95) = 1;
      goto LABEL_16;
    }
    if ( (unsigned int)v1 >= 0x30 )
    {
      v2 = 1;
      if ( *(_DWORD *)(a1 + 108) == *((_DWORD *)v11 + 27) )
      {
        if ( *(_BYTE *)(a1 + 100) )
        {
          if ( v11[100] )
          {
            if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(a1 + 80) == KiInterruptDispatch )
            {
              v13 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))*((_QWORD *)v11 + 10);
              if ( v13 == KiChainedDispatch || v13 == KiInterruptDispatch )
              {
                *(_BYTE *)(a1 + 95) = 1;
                v4 = 1;
                if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v11
                     + 10) != KiChainedDispatch )
                {
                  *((_QWORD *)v11 + 2) = v11 + 8;
                  *((_QWORD *)v11 + 1) = v11 + 8;
                  *((_QWORD *)v11 + 10) = KiChainedDispatch;
                }
                KiInsertInterruptObjectOrdered((__int64)v11, a1);
                if ( !*(_BYTE *)(v15 + 93) )
                {
                  if ( *(_BYTE *)(a1 + 93) )
                  {
                    *(_QWORD *)(a1 + 80) = v14;
LABEL_16:
                    KeGetCurrentPrcb()->InterruptObject[v1] = (void *)a1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16[0]);
  __writecr8(v16[0]);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v4 )
    return v2 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
