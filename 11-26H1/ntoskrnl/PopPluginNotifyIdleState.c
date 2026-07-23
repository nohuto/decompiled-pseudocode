/*
 * XREFs of PopPluginNotifyIdleState @ 0x1403BD0A4
 * Callers:
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403BCE50 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginNotifyIdleState(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  char v5; // di
  char v7; // al
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+2Ch] [rbp-1Ch]
  char v17; // [rsp+30h] [rbp-18h]
  char v18; // [rsp+31h] [rbp-17h]
  int v19; // [rsp+32h] [rbp-16h]
  __int16 v20; // [rsp+36h] [rbp-12h]

  v4 = *(_QWORD *)(a1 + 72);
  v19 = 0;
  v5 = a2;
  v20 = 0;
  v14 = v4;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = 0;
  v7 = guard_dispatch_icall_no_overrides(19LL, &v14, a3);
  v8 = v18;
  if ( !v7 )
    v8 = 1;
  v18 = v8;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 80);
      if ( v10 )
      {
        v11 = 3LL
            * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 896), 1u) % *(_DWORD *)(v10 + 880));
        v12 = *(_QWORD *)(v10 + 888);
        *(_QWORD *)(v12 + 8 * v11) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v12 + 8 * v11 + 8) = 18;
        *(_BYTE *)(v12 + 8 * v11 + 9) = v5;
        *(_WORD *)(v12 + 8 * v11 + 10) = KeGetCurrentPrcb()->Number;
        *(_WORD *)(v12 + 8 * v11 + 12) = KeGetCurrentThread()[1].CycleTime;
        *(_WORD *)(v12 + 8 * v11 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_QWORD *)(v12 + 8 * v11 + 16) = 0LL;
        return v18;
      }
    }
  }
  return v8;
}
