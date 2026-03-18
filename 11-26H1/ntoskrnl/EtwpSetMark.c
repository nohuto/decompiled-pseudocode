/*
 * XREFs of EtwpSetMark @ 0x140775508
 * Callers:
 *     NtTraceEvent @ 0x140411E40 (NtTraceEvent.c)
 *     EtwpLogRefSetAutoMark @ 0x14082F58C (EtwpLogRefSetAutoMark.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     MmEmptyAllWorkingSets @ 0x1406F7E2C (MmEmptyAllWorkingSets.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     MmIdentifyPhysicalMemory @ 0x140868394 (MmIdentifyPhysicalMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall EtwpSetMark(unsigned int *a1, int *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v9; // ebx
  int ULongFromUser; // eax
  char v11; // r12
  int v13; // [rsp+40h] [rbp-48h]
  _DWORD *v14; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]
  __int64 *v17; // [rsp+58h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-28h]

  v9 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        ULongFromUser = RtlReadULongFromUser(a2);
      }
      else
      {
        ULongFromUser = *a2;
      }
      v13 = ULongFromUser;
      v11 = 0;
      if ( (ULongFromUser & 1) != 0 && a4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v11 = 1;
          MmEmptyAllWorkingSets();
        }
        else
        {
          v9 = -1073741727;
        }
      }
      v14 = a2 + 1;
      v15 = a3 - 4;
      v16 = 0;
      v17 = &EtwpNull;
      v18 = 2LL;
      EtwpLogSystemEventUnsafe(
        *((_QWORD *)a1 + 170),
        (__int64)&v14,
        (__int64)KeGetCurrentThread(),
        *a1,
        2u,
        0xF22u,
        0x3100u,
        PreviousMode,
        v13);
      if ( v11 )
        MmIdentifyPhysicalMemory(*((_QWORD *)a1 + 170), *a1, 629LL, 1LL);
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
