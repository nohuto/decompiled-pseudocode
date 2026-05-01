/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180086BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180084594 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(
        struct _RM_CPU_SET_CLIENT_CONTEXT ****a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  __int64 *v4; // rsi
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _RM_CPU_SET_ALLOCATION *v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+158h] [rbp+58h]
  unsigned int v19; // [rsp+15Ch] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+160h] [rbp+60h] BYREF
  struct _RM_CPU_SET_ALLOCATION **v21; // [rsp+180h] [rbp+80h]
  __int64 v22; // [rsp+188h] [rbp+88h]
  int *v23; // [rsp+190h] [rbp+90h]
  __int64 v24; // [rsp+198h] [rbp+98h]
  int *v25; // [rsp+1A0h] [rbp+A0h]
  __int64 v26; // [rsp+1A8h] [rbp+A8h]
  __int64 *v27; // [rsp+1B0h] [rbp+B0h]
  __int64 v28; // [rsp+1B8h] [rbp+B8h]

  v11 = 0LL;
  memset_0(&v15, 0, 0x110uLL);
  v4 = (__int64 *)((char *)a2 + 120);
  if ( *((_DWORD *)a2 + 29) )
  {
    v15 = *((_DWORD *)a2 + 29);
    v6 = *v4;
    if ( *v4 )
    {
      v18 |= 1u;
      v17 = v6;
    }
    v7 = *((_DWORD *)a2 + 35);
    v19 = v19 & 0xFFFFFFFD | ((v7 & 0x20 | 0x50) >> 4);
    if ( (v7 & 0x80u) != 0 )
      v16 |= 2u;
    RmpAcquireGlobalLock();
    v5 = RmpCpuSetManagerAcquireCpuSets(a1[5], (struct _RM_CPU_SET_REQUEST_INFORMATION *)&v15, (v7 >> 6) & 1, &v11);
    if ( v5 >= 0 )
    {
      v5 = 0;
      a1[15] = (struct _RM_CPU_SET_CLIENT_CONTEXT ***)v11;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    v5 = 255;
  }
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    v14 = *v4;
    v12 = *((_DWORD *)a2 + 29);
    v13 = *((_DWORD *)a2 + 27);
    v27 = &v14;
    v25 = &v12;
    v23 = &v13;
    v21 = &v11;
    v26 = v9;
    v24 = v9;
    v22 = v9;
    LODWORD(v11) = v5;
    v28 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v8, byte_1800D2D20, 0LL, 0LL, 6u, &v20);
  }
  return (unsigned int)v5;
}
