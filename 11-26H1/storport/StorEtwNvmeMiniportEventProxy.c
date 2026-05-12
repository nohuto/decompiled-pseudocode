/*
 * XREFs of StorEtwNvmeMiniportEventProxy @ 0x14007A9D0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     StorEtwNvmeMiniportEvent @ 0x1400B1BA0 (StorEtwNvmeMiniportEvent.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorEtwNvmeMiniportEventProxy(int a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  int v6; // r8d
  __int64 v7; // r10
  int v8; // r9d
  int v9; // esi
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r11
  int v13; // r15d
  int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  _QWORD v18[8]; // [rsp+60h] [rbp-B8h] BYREF

  memset_0(v18, 0, sizeof(v18));
  v4 = *a2;
  v5 = a2 + 8;
  v6 = *((_DWORD *)a2 + 2);
  v7 = 0LL;
  v8 = *((_DWORD *)a2 + 4);
  v9 = *((_DWORD *)a2 + 6);
  v10 = a2[4];
  v11 = a2[5];
  v12 = 8LL;
  v13 = *((_DWORD *)a2 + 12);
  v14 = *((_DWORD *)a2 + 14);
  do
  {
    v15 = *v5;
    v5 += 2;
    v18[v7++] = v15;
    v18[v7 + 7] = *(v5 - 1);
    --v12;
  }
  while ( v12 );
  v16 = StorEtwNvmeMiniportEvent(a1, v4, v6, v8, v9, v10, v11, v13, v14);
  return RaidNtStatusToStorStatus(v16);
}
