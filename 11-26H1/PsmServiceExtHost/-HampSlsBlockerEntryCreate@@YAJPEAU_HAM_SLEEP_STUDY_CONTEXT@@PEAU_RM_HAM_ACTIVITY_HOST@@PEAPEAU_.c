/*
 * XREFs of ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180063DEC
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003E494 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180063FF0 (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x1800641C0 (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800665C4 (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampSlsBlockerEntryCreate(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  char *Heap; // rax
  char *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _HAM_SLEEP_STUDY_CONTEXT *v11; // rcx
  struct _HAM_SLEEP_STUDY_CONTEXT *v13; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v15; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v16; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v17; // [rsp+70h] [rbp-90h] BYREF
  GUID v18; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Source[256]; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+290h] [rbp+190h]

  memset_0(Source, 0, 0x204uLL);
  v13 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  Heap = (char *)HampAllocateHeap(0x68uLL);
  v7 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x68uLL);
    RmpAcquireGlobalLock();
    v9 = *((_QWORD *)a2 + 73);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)v7 + 3) = v9;
    RmpReleaseGlobalLock();
    v7[32] = 5;
    RtlStringCchPrintfExW(Source, 0x100uLL, &v15, 0LL, 0, L"%s", (char *)a2 + 24);
    v20 = wcsnlen(Source, 0x100uLL) + 1;
    RtlInitUnicodeString(&DestinationString, Source);
    if ( (unsigned int)HampSlsCreateGuid(&v17) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = *((_QWORD *)a1 + 1);
      v18 = GUID_SLEEPSTUDY_BLOCKER_PLM_PHASE;
      v16 = v17;
      v8 = SleepstudyHelperCreateBlockerFromGuid(v10, &v18, &v16, &DestinationString, 3, &v13);
      if ( v8 >= 0 )
      {
        v8 = SleepstudyHelperBuildBlocker(v13, v7 + 56);
        if ( v8 >= 0 )
        {
          *(struct _GUID *)(v7 + 40) = v16;
          *a3 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v7;
          v7 = 0LL;
          v13 = 0LL;
          v8 = 0;
        }
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  v11 = v13;
  if ( v13 )
    SleepstudyHelperDestroyBlockerBuilder();
  if ( v7 )
    HampSlsBlockerEntryDestroy(v11, (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v7);
  return (unsigned int)v8;
}
