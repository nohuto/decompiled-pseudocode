/*
 * XREFs of StorEtwRaidMiniportEventProxy @ 0x14004EB50
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     StorEtwRaidMiniportEvent @ 0x140042204 (StorEtwRaidMiniportEvent.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorEtwRaidMiniportEventProxy(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // r11
  __int64 *v7; // r8
  int v8; // r9d
  int v9; // ebp
  _WORD *v10; // r14
  __int64 v11; // r15
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rax
  int v19; // eax
  _QWORD v21[8]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v22[8]; // [rsp+A0h] [rbp-88h] BYREF

  memset_0(v21, 0, sizeof(v21));
  v6 = *(_QWORD *)a3;
  v7 = (__int64 *)(a3 + 64);
  v8 = *(_DWORD *)(a3 + 16);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_WORD **)(a3 + 24);
  v11 = *(_QWORD *)(a3 + 32);
  v12 = *(_DWORD *)(a3 + 40);
  v13 = *(_DWORD *)(a3 + 48);
  v14 = *(_QWORD *)(a3 + 56);
  if ( a2 == 58 || a2 == 85 )
  {
    v15 = 2;
  }
  else if ( a2 == 59 || a2 == 86 )
  {
    v15 = 4;
  }
  else
  {
    v15 = 8;
  }
  v16 = 0LL;
  v17 = v15;
  do
  {
    v18 = *v7;
    v7 += 2;
    v21[v16++] = v18;
    v21[v16 + 7] = *(v7 - 1);
    --v17;
  }
  while ( v17 );
  v19 = StorEtwRaidMiniportEvent(a1, v6, v9, v8, v10, v11, v12, v13, v14, v15, (__int64)v21, v22);
  return RaidNtStatusToStorStatus(v19);
}
