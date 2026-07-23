/*
 * XREFs of EtwpSetMark @ 0x140778508
 * Callers:
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     EtwpLogRefSetAutoMark @ 0x1408357CC (EtwpLogRefSetAutoMark.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     MmEmptyAllWorkingSets @ 0x1406FCAF8 (MmEmptyAllWorkingSets.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall EtwpSetMark(unsigned int *a1, int *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v9; // ebx
  int v10; // eax
  char v11; // r12
  _DWORD *v13; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]
  __int64 *v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v9 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        LOBYTE(v10) = RtlReadULongFromUser(a2);
      }
      else
      {
        v10 = *a2;
      }
      v11 = 0;
      if ( (v10 & 1) != 0 && a4 )
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
      v13 = a2 + 1;
      v14 = a3 - 4;
      v15 = 0;
      v16 = &EtwpNull;
      v17 = 2LL;
      EtwpLogSystemEventUnsafe(
        *((_QWORD *)a1 + 170),
        (__int64)&v13,
        (__int64)KeGetCurrentThread(),
        *a1,
        2u,
        0xF22u,
        0x3100u,
        PreviousMode);
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
