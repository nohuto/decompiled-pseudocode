/*
 * XREFs of KiGetNextClockOwner @ 0x1405F0D04
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1404529A8 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1404529F0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x140455520 (KiHeteroReduceToMaximallyPreferredByClass.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiGetNextClockOwner(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int FirstSetRightGroupAffinity; // esi
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int16 v11; // [rsp+30h] [rbp-89h] BYREF
  __int64 v12; // [rsp+38h] [rbp-81h] BYREF
  __int128 v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v15; // [rsp+54h] [rbp-65h] BYREF
  __int128 v16; // [rsp+58h] [rbp-61h] BYREF
  __int64 v17; // [rsp+68h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-49h] BYREF
  int *v19; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h]
  unsigned int *v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  __int64 *v23; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  __int16 *v25; // [rsp+C0h] [rbp+7h]
  __int64 v26; // [rsp+C8h] [rbp+Fh]
  __int128 *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]

  v1 = *(_DWORD *)(a1 + 36);
  v12 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !KiClockTimerPerCpu )
    return v1;
  FirstSetRightGroupAffinity = -1;
  v13 = 0LL;
  v5 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)&KsepShimDbLock.KernelShadowStack, v1) )
  {
    LOWORD(v6) = WORD4(v13);
    FirstSetRightGroupAffinity = v1;
    v7 = v13;
LABEL_18:
    if ( FirstSetRightGroupAffinity != -1 )
      goto LABEL_20;
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 208);
    v5 = 1;
    WORD4(v13) = *(unsigned __int8 *)(a1 + 208);
    if ( (unsigned __int16)v6 >= LOWORD(KsepShimDbLock.KernelShadowStack) )
      v8 = 0LL;
    else
      v8 = *((_QWORD *)&KsepShimDbLock.KernelShadowStackInitial + v6);
    v9 = *(_QWORD *)(a1 + 192);
    v7 = *(_QWORD *)(v9 + 128) & v8;
    if ( v7 )
    {
      *(_QWORD *)&v13 = KiHeteroReduceToMaximallyPreferredByClass(v9, v7, 4, 0);
      v7 = v13;
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((unsigned __int64 *)&v13);
      if ( FirstSetRightGroupAffinity != -1 )
        goto LABEL_20;
    }
    KeInitializeSystemSubNodeEnumerationContext(&v16, *(_WORD *)(*(_QWORD *)(a1 + 192) + 138LL));
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInSystem((__int64)&v16, &v12) )
    {
      while ( 1 )
      {
        if ( v12 != *(_QWORD *)(a1 + 192) )
        {
          ++v5;
          WORD4(v13) = *(_WORD *)(v12 + 136);
          LOWORD(v6) = WORD4(v13);
          v10 = WORD4(v13) >= LOWORD(KsepShimDbLock.KernelShadowStack)
              ? 0LL
              : *((_QWORD *)&KsepShimDbLock.KernelShadowStackInitial + WORD4(v13));
          v7 = *(_QWORD *)(v12 + 128) & v10;
          if ( v7 )
          {
            *(_QWORD *)&v13 = KiHeteroReduceToMaximallyPreferredByClass(v12, v7, 4, 0);
            v7 = v13;
            FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((unsigned __int64 *)&v13);
            if ( FirstSetRightGroupAffinity != -1 )
              goto LABEL_20;
          }
        }
        if ( (unsigned int)KeEnumerateNextSchedulerSubNodeInSystem((__int64)&v16, &v12) )
          goto LABEL_18;
      }
    }
  }
  FirstSetRightGroupAffinity = *(_DWORD *)(a1 + 36);
LABEL_20:
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v14 = KiClockTimerOwner;
    v20 = 4LL;
    v19 = &v14;
    v15 = FirstSetRightGroupAffinity;
    v21 = &v15;
    v22 = 4LL;
    v23 = &v12;
    v25 = &v11;
    v27 = &v13;
    LODWORD(v12) = v5;
    v24 = 4LL;
    v11 = v6;
    v26 = 2LL;
    *(_QWORD *)&v13 = v7;
    v28 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06F90, (unsigned __int8 *)byte_140049511, 0LL, 0LL, 7u, &v18);
  }
  return FirstSetRightGroupAffinity;
}
