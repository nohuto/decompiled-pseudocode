/*
 * XREFs of PopUmpoSendPowerRequestCreate @ 0x140ADE014
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestNotificationsBegin @ 0x1407C9544 (PopPowerRequestNotificationsBegin.c)
 * Callees:
 *     PoStoreDiagnosticContext @ 0x1404372B0 (PoStoreDiagnosticContext.c)
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopUmpoSendPowerRequestCreate(int a1)
{
  unsigned __int64 i; // rcx
  unsigned __int64 v3; // rsi
  __int64 Pool2; // rax
  _DWORD *v5; // rbx
  unsigned __int64 j; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  for ( i = stru_140F12D20.QuantumTarget; (unsigned __int64 *)i != &stru_140F12D20.QuantumTarget; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 36) == a1 )
    {
      if ( (unsigned int)PoStoreDiagnosticContext(*(_QWORD *)(i + 96), 0LL, &v7) == -1073741789 )
      {
        v3 = v7;
        Pool2 = ExAllocatePool2(0x100uLL);
        v5 = (_DWORD *)Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 15;
          *(_DWORD *)(Pool2 + 8) = a1;
          for ( j = stru_140F12D20.QuantumTarget; (unsigned __int64 *)j != &stru_140F12D20.QuantumTarget; j = *(_QWORD *)j )
          {
            if ( *(_DWORD *)(j + 36) == a1 )
            {
              if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(j + 96), (unsigned __int64 *)(Pool2 + 16), &v7) >= 0 )
                PopUmpoSendPowerMessage(v5, v3 + 16, 0, 0LL);
              break;
            }
          }
          ExFreePoolWithTag(v5, 0x6F706D55u);
        }
      }
      return;
    }
  }
}
