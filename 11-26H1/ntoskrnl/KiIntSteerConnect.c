/*
 * XREFs of KiIntSteerConnect @ 0x140431CC8
 * Callers:
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x140430D30 (KiIntSteerLogState.c)
 *     KiIntSteerGetLineInformation @ 0x1404320E4 (KiIntSteerGetLineInformation.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14043217C (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiIntSteerSetDestination @ 0x140432CA8 (KiIntSteerSetDestination.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x140432D70 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r14
  bool v6; // zf
  __int64 Pool2; // rax
  _QWORD *v10; // rdi
  KIRQL v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 *i; // rbx
  int v16; // r9d
  int v17; // r14d
  int v18; // eax
  __int16 v19; // cx
  __int64 v20; // rax
  __int16 v21; // cx
  __int64 **v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-20h] BYREF
  int v32; // [rsp+44h] [rbp-1Ch] BYREF
  int v33; // [rsp+48h] [rbp-18h] BYREF
  __int128 v34; // [rsp+50h] [rbp-10h] BYREF

  v5 = a2;
  v6 = KiIntSteerEtwHandle == 0;
  NewIrql[0] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  *a4 = 0;
  if ( v6 )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( (int)KiIntSteerGetLineInformation(a3, &v32, NewIrql) < 0 )
  {
    v27 = *(unsigned __int16 *)(a3 + 32);
    v28 = *(_QWORD *)(a3 + 24);
    if ( KiIntSteerAffinitizedInterrupts.Count <= (unsigned __int16)v27 )
    {
      if ( KiIntSteerAffinitizedInterrupts.Size <= (unsigned __int16)v27 )
        return 0LL;
      KiIntSteerAffinitizedInterrupts.Count = v27 + 1;
    }
    KiIntSteerAffinitizedInterrupts.Bitmap[v27] |= v28;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v11 = NewIrql[0];
    *(_BYTE *)(Pool2 + 56) = NewIrql[0];
    *(_QWORD *)(Pool2 + 32) = a1;
    *(_DWORD *)(Pool2 + 24) = v5;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_OWORD *)(Pool2 + 64) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 80) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 96) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 112) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 128) = *(_OWORD *)(a3 + 64);
    *(_QWORD *)(Pool2 + 144) = *(_QWORD *)(a3 + 80);
    if ( (_DWORD)v5 )
    {
      v12 = a1;
      v13 = v5;
      do
      {
        v14 = (_QWORD *)*v12++;
        v14[22] = 0LL;
        v14[24] = 0LL;
        v14[25] = 0LL;
        v14[27] = 0LL;
        v14[21] = v10;
        --v13;
      }
      while ( v13 );
    }
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList);
    if ( *(_DWORD *)a3 )
    {
LABEL_9:
      i = (__int64 *)ExAllocatePool2(0x40uLL);
      if ( i )
      {
        v17 = KiIntSteerChooseInitialTargetProcessors((_DWORD)a1, v5, a3, v16, v11, (__int64)&v34, (__int64)&v33);
        if ( v17 >= 0 )
        {
          memset_0(i, 0, 0xE0uLL);
          v18 = v32;
          i[3] = (__int64)(i + 2);
          i[2] = (__int64)(i + 2);
          *((_DWORD *)i + 8) = v18;
          *((_BYTE *)i + 132) = 0;
          i[19] = 0LL;
          v19 = *(_WORD *)(a3 + 32);
          i[17] = 0LL;
          *((_DWORD *)i + 32) = v33;
          v20 = v34;
          *((_WORD *)i + 72) = v19;
          v21 = WORD4(v34);
          i[20] = v20;
          *((_WORD *)i + 84) = v21;
          *((_WORD *)i + 92) = v21;
          i[22] = v20;
          v6 = *((_DWORD *)i + 32) == 2;
          *(_OWORD *)(i + 5) = *(_OWORD *)a3;
          *(_OWORD *)(i + 7) = *(_OWORD *)(a3 + 16);
          *(_OWORD *)(i + 9) = *(_OWORD *)(a3 + 32);
          *(_OWORD *)(i + 11) = *(_OWORD *)(a3 + 48);
          *(_OWORD *)(i + 13) = *(_OWORD *)(a3 + 64);
          i[15] = *(_QWORD *)(a3 + 80);
          if ( v6 )
            i[25] = *(_QWORD *)(*a1 + 272LL);
          v22 = (__int64 **)qword_140F14EC8;
          if ( *(__int64 **)qword_140F14EC8 != &KiIntTrackRootList )
LABEL_18:
            __fastfail(3u);
          *i = (__int64)&KiIntTrackRootList;
          i[1] = (__int64)v22;
          *v22 = i;
          ++KiIntTrackRootCount;
          qword_140F14EC8 = (__int64)i;
          KiIntSteerUpdateDeviceInterruptMask(i + 20, 0LL);
          if ( *((_DWORD *)i + 32) )
          {
            KiIntSteerSetDestination(i, i + 20);
            *a4 = 1;
            *(_WORD *)(a5 + 8) = *((_WORD *)i + 84);
            *(_QWORD *)a5 = i[20];
          }
        }
        if ( !v17 )
          goto LABEL_17;
      }
      else
      {
        v17 = -1073741670;
      }
      ExFreePoolWithTag(v10, 0x6B725449u);
LABEL_21:
      KeReleaseSpinLock(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList, NewIrql[0]);
      return (unsigned int)v17;
    }
    for ( i = (__int64 *)KiIntTrackRootList; ; i = (__int64 *)*i )
    {
      if ( i == &KiIntTrackRootList )
        goto LABEL_9;
      v26 = *((_DWORD *)i + 8);
      if ( v26 == v32 && v26 != -1 )
        break;
    }
    if ( *((_DWORD *)i + 32) != 2 )
    {
LABEL_28:
      v17 = 0;
LABEL_17:
      v10[2] = i;
      v23 = i + 2;
      v24 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v24 != v23 )
        goto LABEL_18;
      *v10 = v23;
      v10[1] = v24;
      *v24 = v10;
      v23[1] = v10;
      KiIntSteerLogState((__int64)v10, (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
      goto LABEL_21;
    }
    *(_BYTE *)(i[25] + 16) = 0;
    *((_DWORD *)i + 32) = 0;
    *((_BYTE *)i + 132) = 0;
    v29 = *(unsigned __int16 *)(a3 + 32);
    v30 = *(_QWORD *)(a3 + 24);
    if ( KiIntSteerAffinitizedInterrupts.Count <= (unsigned __int16)v29 )
    {
      if ( KiIntSteerAffinitizedInterrupts.Size <= (unsigned __int16)v29 )
        goto LABEL_28;
      KiIntSteerAffinitizedInterrupts.Count = v29 + 1;
    }
    KiIntSteerAffinitizedInterrupts.Bitmap[v29] |= v30;
    goto LABEL_28;
  }
  return 3221225626LL;
}
