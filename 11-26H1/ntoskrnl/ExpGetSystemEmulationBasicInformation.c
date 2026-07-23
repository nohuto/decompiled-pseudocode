/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x1404B64F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(void *a1, char a2)
{
  __int64 v4; // r8
  __int64 Blink_high; // r11
  __int64 AffinityPrimaryGroup; // rcx
  unsigned __int64 v7; // rdx
  int v8; // r8d
  int v9; // ecx
  int v10; // ecx
  _DWORD Src[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  unsigned __int64 v15; // [rsp+60h] [rbp-28h]
  char v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+69h] [rbp-1Fh]
  __int16 v18; // [rsp+6Dh] [rbp-1Bh]
  char v19; // [rsp+6Fh] [rbp-19h]

  Src[7] = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v4 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
  Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
  AffinityPrimaryGroup = KeGetCurrentThread()->AffinityPrimaryGroup;
  Src[0] = 0;
  Src[1] = KeMaximumIncrement;
  Src[2] = 4096;
  Src[6] = 0x10000;
  if ( (unsigned __int16)AffinityPrimaryGroup >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
    v7 = 0LL;
  else
    v7 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 8 * AffinityPrimaryGroup + 4);
  v15 = (unsigned int)v7 | HIDWORD(v7);
  v16 = __popcnt(v15);
  v13 = 0x10000LL;
  v14 = v4 - 1;
  v8 = -1;
  v9 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22288LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22288LL);
  Src[3] = v9;
  v10 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22272LL) <= 0xFFFFFFFFuLL )
    v10 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22272LL);
  Src[4] = v10;
  if ( *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22280LL) <= 0xFFFFFFFFuLL )
    v8 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) + 22280LL);
  Src[5] = v8;
  if ( a2 )
    RtlCopyToUser(a1, Src, 0x40uLL);
  else
    RtlCopyVolatileMemory(a1, Src, 0x40uLL);
  return 0LL;
}
