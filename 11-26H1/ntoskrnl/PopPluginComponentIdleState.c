/*
 * XREFs of PopPluginComponentIdleState @ 0x140473350
 * Callers:
 *     PoFxCompleteIdleState @ 0x1404732B0 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPlNotifyDeviceFState @ 0x1403B7D3C (PopPlNotifyDeviceFState.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PopPluginComponentIdleState(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v4; // r15
  __int64 v7; // rsi
  char v8; // bl
  __int64 v9; // rbp
  unsigned int *v10; // r14
  __int64 v11; // r13
  int v12; // r12d
  char v13; // al
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+38h] [rbp-40h]
  unsigned int v23; // [rsp+3Ch] [rbp-3Ch]
  __int16 v24; // [rsp+40h] [rbp-38h]
  int v25; // [rsp+42h] [rbp-36h]
  __int16 v26; // [rsp+46h] [rbp-32h]

  v4 = a2;
  if ( a4 )
    memset_0(a4, 0, 0x40uLL);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  v9 = v7 + 208 * v4;
  v10 = (unsigned int *)(v9 + 368);
  if ( !*(_BYTE *)(v7 + 124) )
    goto LABEL_11;
  v11 = *(_QWORD *)(v7 + 32);
  v12 = *(_DWORD *)(v9 + 200);
  v25 = 0;
  v26 = 0;
  v21 = *(_QWORD *)(v11 + 72);
  v23 = *v10;
  v24 = 1;
  v22 = v12;
  v13 = guard_dispatch_icall_no_overrides(19LL, &v21);
  v14 = HIBYTE(v24);
  if ( !v13 )
    v14 = 1;
  HIBYTE(v24) = v14;
  if ( v14 )
    goto LABEL_11;
  v15 = *(_QWORD *)(v11 + 48);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 80);
    if ( v16 )
    {
      v17 = 3LL
          * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 896), 1u) % *(_DWORD *)(v16 + 880));
      v18 = *(_QWORD *)(v16 + 888);
      *(_QWORD *)(v18 + 8 * v17) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v18 + 8 * v17 + 8) = 18;
      *(_BYTE *)(v18 + 8 * v17 + 9) = v12;
      *(_WORD *)(v18 + 8 * v17 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v18 + 8 * v17 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v18 + 8 * v17 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v18 + 8 * v17 + 16) = 0LL;
      v14 = HIBYTE(v24);
    }
  }
  if ( v14 )
  {
LABEL_11:
    v8 = PopPepProcessEvent(v7, (volatile LONG *)(v9 + 192), 1u, 6u, v20, (__int64)a4);
    PopPlNotifyDeviceFState(*(_QWORD *)(v7 + 32), v4, *(_DWORD *)(v9 + 372), *v10, 1);
    if ( v8 && !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return v8;
}
