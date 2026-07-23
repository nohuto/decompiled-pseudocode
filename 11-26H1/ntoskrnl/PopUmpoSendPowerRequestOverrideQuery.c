/*
 * XREFs of PopUmpoSendPowerRequestOverrideQuery @ 0x1404262F8
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407CC6C4 (PopPowerRequestOverrideInitialize.c)
 * Callees:
 *     PoStoreRequester @ 0x1404263B8 (PoStoreRequester.c)
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideQuery(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 Pool2; // rax
  __int64 v7; // r9
  _DWORD *v8; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  LOBYTE(a4) = 1;
  PoStoreRequester(*(_QWORD *)(a1 + 96), 0LL, &v11, a4);
  v5 = v11;
  Pool2 = ExAllocatePool2(0x100uLL);
  v8 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    LOBYTE(v7) = 1;
    v9 = PoStoreRequester(*(_QWORD *)(a1 + 96), Pool2 + 16, &v11, v7);
    if ( v9 >= 0 )
    {
      *v8 = 8;
      v8[2] = *(_DWORD *)(a1 + 36);
      v9 = PopUmpoSendPowerMessage(v8, v5 + 16);
    }
    ExFreePoolWithTag(v8, 0x6F706D55u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
