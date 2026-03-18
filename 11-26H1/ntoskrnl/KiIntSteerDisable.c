/*
 * XREFs of KiIntSteerDisable @ 0x140423AAC
 * Callers:
 *     KeDisconnectInterrupt @ 0x140423CA0 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x140423C40 (KiIntSteerLogState.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char *v9; // rdi
  _QWORD *v10; // rax
  void *v11; // rcx
  void **v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 Prcb; // rax

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( v4 )
  {
    KiIntSteerLogState(*(_QWORD *)(*a1 + 168), PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
    v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( a2 )
    {
      v6 = a2;
      do
      {
        v7 = *v2;
        _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
        *(_QWORD *)(v7 + 168) = 0LL;
        ++v2;
        --v6;
      }
      while ( v6 );
    }
    v8 = *v4;
    v9 = (char *)v4[2];
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v10 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v10 == v4 )
      {
        *v10 = v8;
        *(_QWORD *)(v8 + 8) = v10;
        ExFreePoolWithTag(v4, 0x6B725449u);
        if ( *((char **)v9 + 2) != v9 + 16 )
        {
LABEL_16:
          KeReleaseSpinLock(&KiIntTrackSpinlock, v5);
          return 0LL;
        }
        --LODWORD(KsepShimDbLock.ExtendedFeatureDisableMask);
        v11 = *(void **)v9;
        if ( *(char **)(*(_QWORD *)v9 + 8LL) == v9 )
        {
          v12 = (void **)*((_QWORD *)v9 + 1);
          if ( *v12 == v9 )
          {
            *v12 = v11;
            *((_QWORD *)v11 + 1) = v12;
            LOWORD(v13) = *((_WORD *)v9 + 84);
            v14 = *((_QWORD *)v9 + 20);
LABEL_11:
            v15 = (unsigned __int16)v13 + 1;
            while ( 1 )
            {
              if ( v14 )
              {
                _BitScanForward64(&v16, v14);
                v14 &= ~(1LL << v16);
                Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                 + 64 * (unsigned __int16)v13
                                 + (unsigned int)(unsigned __int8)v16));
                if ( (*(_DWORD *)(Prcb + 11672))-- == 1 )
                  _interlockedbittestandset64(
                    (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 112LL),
                    *(unsigned __int8 *)(Prcb + 209));
                goto LABEL_11;
              }
              v13 = (unsigned __int16)(v13 + 1);
              if ( (unsigned int)v13 >= v15 )
                break;
              v14 = *(_QWORD *)(8 * v13 + 8);
            }
            ExFreePoolWithTag(v9, 0x6B725449u);
            goto LABEL_16;
          }
        }
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
