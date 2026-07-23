/*
 * XREFs of PfSnSetAltPrefetchParam @ 0x140B6E9FC
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfSnAltProfileCleanup @ 0x14077F584 (PfSnAltProfileCleanup.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnCheckScenario @ 0x1409D163C (PfSnCheckScenario.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1409D2894 (PfSnAltProfileFindByScenarioId.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x1409D2930 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PfCalculateProcessHash @ 0x1409D2980 (PfCalculateProcessHash.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1409D30B0 (PfSnCalculateScenarioNameAndHash.c)
 *     PfSnAltProfileFindByProcess @ 0x140ACAD6C (PfSnAltProfileFindByProcess.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x140ACADFC (PfSnAltProfileTreeCompareByProcess.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnSetAltPrefetchParam(ULONG_PTR BugCheckParameter1, void *Src, size_t Size, char a4)
{
  size_t v5; // r12
  __int64 v8; // rsi
  int v9; // r14d
  int v10; // ebx
  PVOID v11; // r15
  __int64 v12; // rcx
  void *Pool2; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  unsigned __int64 v17; // rax
  __int64 SparePtr; // rbx
  int v19; // r12d
  BOOLEAN v20; // r8
  __int64 v21; // rax
  __int64 Blink; // rbx
  int v23; // r12d
  BOOLEAN v24; // r8
  __int64 v25; // rax
  unsigned int v28; // [rsp+64h] [rbp-1D4h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1D0h] BYREF
  int v30; // [rsp+70h] [rbp-1C8h] BYREF
  int v31; // [rsp+74h] [rbp-1C4h] BYREF
  int v32; // [rsp+78h] [rbp-1C0h] BYREF
  int v33; // [rsp+7Ch] [rbp-1BCh] BYREF
  int v34; // [rsp+80h] [rbp-1B8h] BYREF
  _DWORD v35[3]; // [rsp+84h] [rbp-1B4h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-198h] BYREF
  wchar_t Str2[8]; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-178h]
  __int128 v40; // [rsp+D0h] [rbp-168h]
  __int128 v41; // [rsp+E0h] [rbp-158h]
  int v42; // [rsp+F0h] [rbp-148h]
  _BYTE v43[256]; // [rsp+100h] [rbp-138h] BYREF

  v5 = (unsigned int)Size;
  memset_0(Str2, 0, 0x44uLL);
  v28 = 0;
  v33 = 0;
  v30 = 0;
  v32 = 0;
  v31 = 0;
  v35[0] = 0;
  P[0] = 0LL;
  Object = 0LL;
  v8 = 0LL;
  v37 = 0LL;
  v9 = 0;
  v10 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          512,
          (__int64)PsProcessType,
          a4,
          0x73576650u,
          &Object,
          0LL,
          0LL);
  v11 = Object;
  if ( v10 >= 0 )
  {
    if ( Object != KeGetCurrentThread()->ApcState.Process )
    {
LABEL_3:
      v10 = -1073741811;
      goto LABEL_54;
    }
    if ( (_DWORD)v5 != 4 )
    {
      v10 = -1073741820;
      goto LABEL_54;
    }
    if ( a4 )
      RtlCopyFromUser(&v28, Src, v5);
    else
      RtlCopyVolatileMemory(&v28, Src, v5);
    if ( v28 > 0x10 )
      goto LABEL_3;
    v10 = PfSnCheckScenario(0, &v34);
    if ( v10 >= 0 )
    {
      v10 = PfCalculateProcessHash((__int64)v11, (unsigned __int64)P);
      if ( v10 >= 0 )
      {
        Object = (PVOID)256;
        v10 = PfSnCalculateScenarioNameAndHash(
                v12,
                Str2,
                (__int64)&v37,
                &v33,
                (__int64)&v30,
                (__int64)&v32,
                (__int64)&v31,
                &Object,
                (__int64)v43,
                v35,
                (__int64)v11,
                (unsigned __int16 *)P[0]);
        if ( v10 >= 0 )
        {
          v42 = v30;
          HIDWORD(v41) = v33 + v32 + v31;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v8 = (__int64)Pool2;
          if ( !Pool2 )
          {
            v10 = -1073741670;
            goto LABEL_54;
          }
          memset_0(Pool2, 0, 0x80uLL);
          *(_DWORD *)(v8 + 124) = v28;
          *(_QWORD *)(v8 + 48) = v11;
          *(_OWORD *)(v8 + 56) = *(_OWORD *)Str2;
          *(_OWORD *)(v8 + 72) = v39;
          *(_OWORD *)(v8 + 88) = v40;
          *(_OWORD *)(v8 + 104) = v41;
          *(_DWORD *)(v8 + 120) = v42;
          v11 = 0LL;
          v9 = 1;
          PfLockExclusiveAcquire((unsigned __int64 *)&stru_140E67200.WaitBlock[1].Thread, v14, v15, v16);
          v17 = PfSnAltProfileFindByScenarioId(Str2);
          if ( v17 )
          {
            if ( *(_QWORD *)(v8 + 48) != *(_QWORD *)(v17 + 48) )
            {
              v10 = -1073740008;
              goto LABEL_54;
            }
            *(_DWORD *)(v17 + 124) = v28;
          }
          else
          {
            Object = *(PVOID *)(v8 + 48);
            if ( PfSnAltProfileFindByProcess((__int64)Object) )
              goto LABEL_3;
            SparePtr = (__int64)stru_140E67200.WaitBlock[0].SparePtr;
            if ( (stru_140E67200.WaitBlockFill5[48] & 1) != 0 && stru_140E67200.WaitBlock[0].SparePtr )
              SparePtr = (unsigned __int64)&stru_140E67200.WaitBlock[0].SparePtr ^ (unsigned __int64)stru_140E67200.WaitBlock[0].SparePtr;
            v19 = stru_140E67200.WaitBlockFill5[48] & 1;
            v20 = 0;
            if ( SparePtr )
            {
              while ( 1 )
              {
                if ( PfSnAltProfileTreeCompareByProcess((__int64)Object, SparePtr) < 0 )
                {
                  v21 = *(_QWORD *)SparePtr;
                  if ( v19 )
                  {
                    if ( !v21 )
                      goto LABEL_36;
                    v21 ^= SparePtr;
                  }
                  if ( !v21 )
                  {
LABEL_36:
                    v20 = 0;
                    break;
                  }
                }
                else
                {
                  v21 = *(_QWORD *)(SparePtr + 8);
                  if ( v19 )
                  {
                    if ( !v21 )
                      goto LABEL_30;
                    v21 ^= SparePtr;
                  }
                  if ( !v21 )
                  {
LABEL_30:
                    v20 = 1;
                    break;
                  }
                }
                SparePtr = v21;
              }
            }
            RtlRbInsertNodeEx(
              (PRTL_RB_TREE)&stru_140E67200.WaitBlockFill11[40],
              (PRTL_BALANCED_NODE)SparePtr,
              v20,
              (PRTL_BALANCED_NODE)v8);
            Blink = (__int64)stru_140E67200.WaitBlock[1].WaitListEntry.Blink;
            if ( (stru_140E67200.WaitBlock[1].WaitType & 1) != 0 && stru_140E67200.WaitBlock[1].WaitListEntry.Blink )
              Blink = (unsigned __int64)&stru_140E67200.WaitBlock[1].WaitListEntry.Blink ^ (unsigned __int64)stru_140E67200.WaitBlock[1].WaitListEntry.Blink;
            v23 = stru_140E67200.WaitBlock[1].WaitType & 1;
            v24 = 0;
            if ( Blink )
            {
              while ( 1 )
              {
                if ( PfSnAltProfileTreeCompareByScenarioId((wchar_t *)(v8 + 56), Blink) < 0 )
                {
                  v25 = *(_QWORD *)Blink;
                  if ( v23 )
                  {
                    if ( !v25 )
                      goto LABEL_52;
                    v25 ^= Blink;
                  }
                  if ( !v25 )
                  {
LABEL_52:
                    v24 = 0;
                    break;
                  }
                }
                else
                {
                  v25 = *(_QWORD *)(Blink + 8);
                  if ( v23 )
                  {
                    if ( !v25 )
                      goto LABEL_46;
                    v25 ^= Blink;
                  }
                  if ( !v25 )
                  {
LABEL_46:
                    v24 = 1;
                    break;
                  }
                }
                Blink = v25;
              }
            }
            RtlRbInsertNodeEx(
              (PRTL_RB_TREE)&stru_140E67200.WaitBlockFill11[56],
              (PRTL_BALANCED_NODE)Blink,
              v24,
              (PRTL_BALANCED_NODE)(v8 + 24));
            PfLockExclusiveRelease((struct _KTHREAD *)&stru_140E67200.WaitBlockFill11[72]);
            v9 = 0;
            v8 = 0LL;
          }
          v10 = 0;
        }
      }
    }
  }
LABEL_54:
  if ( v9 )
    PfLockExclusiveRelease((struct _KTHREAD *)&stru_140E67200.WaitBlockFill11[72]);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v8 )
  {
    PfSnAltProfileCleanup(v8);
    ExFreePoolWithTag((PVOID)v8, 0x66506343u);
  }
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x73576650u);
  return (unsigned int)v10;
}
