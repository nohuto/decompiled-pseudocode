/*
 * XREFs of ObpCaptureObjectName @ 0x1408F8C70
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureObjectName(char a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned int v7; // r14d
  bool v8; // si
  __int128 v9; // xmm0
  unsigned int v10; // r15d
  _DWORD *Pool2; // rdi
  void *Srcb[2]; // [rsp+30h] [rbp-88h]
  _GENERAL_LOOKASIDE *Src; // [rsp+30h] [rbp-88h]
  _GENERAL_LOOKASIDE *Srca; // [rsp+30h] [rbp-88h]
  __int128 v16; // [rsp+60h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+D0h] [rbp+18h]

  v7 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)a3 = 0;
  v8 = 0;
  if ( a1 )
    v8 = KeGetCurrentThread()->PreviousMode != 0;
  if ( v8 )
  {
    Srcb[0] = (void *)(unsigned int)RtlReadULongFromUser(a2);
    Srcb[1] = (void *)RtlReadULong64FromUser(a2 + 2);
    v9 = *(_OWORD *)Srcb;
  }
  else
  {
    *(_QWORD *)&v16 = *a2;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)a2 + 1);
    v9 = v16;
  }
  if ( v8 )
  {
    if ( !(_WORD)v9 )
      return v7;
    if ( (BYTE8(v9) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( (_WORD)v9 )
  {
    if ( (v9 & 1) != 0 || (unsigned __int16)v9 == 65534 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      v10 = (unsigned __int16)v9 + 2;
      if ( v10 < (unsigned __int16)v9 )
      {
        Pool2 = 0LL;
      }
      else
      {
        if ( a4 && v10 <= 0xF8 )
        {
          LOWORD(v10) = 248;
          CurrentPrcb = KeGetCurrentPrcb();
          Src = CurrentPrcb->PPLookasideList[5].P;
          ++Src->TotalAllocates;
          Pool2 = RtlpInterlockedPopEntrySList(&Src->ListHead);
          if ( !Pool2 )
          {
            ++Src->AllocateMisses;
            Srca = CurrentPrcb->PPLookasideList[5].L;
            ++Srca->TotalAllocates;
            Pool2 = RtlpInterlockedPopEntrySList(&Srca->ListHead);
            if ( !Pool2 )
            {
              ++Srca->AllocateMisses;
              Pool2 = (_DWORD *)guard_dispatch_icall_no_overrides((unsigned int)Srca->Type, Srca->Size);
            }
          }
          if ( Pool2 )
            *Pool2 = CurrentPrcb->Number;
        }
        else
        {
          Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        }
        *(_WORD *)a3 = v9;
        *(_WORD *)(a3 + 2) = v10;
        *(_QWORD *)(a3 + 8) = Pool2;
      }
      if ( Pool2 )
      {
        if ( v8 )
          RtlCopyFromUser(Pool2, *((void **)&v9 + 1), (unsigned __int16)v9);
        else
          RtlCopyVolatileMemory(Pool2, *((const void **)&v9 + 1), (unsigned __int16)v9);
        *((_WORD *)Pool2 + ((unsigned __int64)(unsigned __int16)v9 >> 1)) = 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v7;
}
