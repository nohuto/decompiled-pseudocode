/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140017AA8
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1400177B0 (VidSchiPropagatePresentHistoryToken.c)
 * Callees:
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x140017CE4 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        bool a7)
{
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // ecx
  int v15; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 && bTracingEnabled )
    McTemplateK0ppqqxdqp_EtwWriteTransfer((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3665;
    DxgkLogInternalTriageEvent(
      v12,
      262146,
      v13,
      (unsigned int)L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
      3665LL,
      0LL,
      0LL,
      0LL);
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = a3 | *((_BYTE *)SpinLock
                                                                        + *((unsigned int *)SpinLock + 2)
                                                                        + 16464) & 0xFE;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (2 * a4) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFD;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (4 * a5) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFB;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (8 * a6) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xF7;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (16 * a7) | *((_BYTE *)SpinLock
                                                                               + *((unsigned int *)SpinLock + 2)
                                                                               + 16464) & 0xEF;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x20u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x40u;
  v11 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v11;
  if ( v11 == *((_DWORD *)SpinLock + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3683;
    DxgkLogInternalTriageEvent(
      v14,
      262146,
      v15,
      (unsigned int)L"m_PresentHistoryHead != m_PresentHistoryTail",
      3683LL,
      0LL,
      0LL,
      0LL);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
