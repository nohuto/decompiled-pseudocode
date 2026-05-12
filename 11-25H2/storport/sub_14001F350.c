/*
 * XREFs of sub_14001F350 @ 0x14001F350
 * Callers:
 *     sub_14000B2CC @ 0x14000B2CC (sub_14000B2CC.c)
 *     sub_14000BF6C @ 0x14000BF6C (sub_14000BF6C.c)
 *     StorPortPauseDevice @ 0x14000F1B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x14000F620 (StorPortResumeDevice.c)
 *     StorPortGetLogicalUnit @ 0x14001F590 (StorPortGetLogicalUnit.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_140037B4C @ 0x140037B4C (sub_140037B4C.c)
 *     sub_14003C364 @ 0x14003C364 (sub_14003C364.c)
 *     StorPortDeviceBusy @ 0x14003FFF0 (StorPortDeviceBusy.c)
 *     sub_140044848 @ 0x140044848 (sub_140044848.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_140059D04 @ 0x140059D04 (sub_140059D04.c)
 *     sub_140059DF8 @ 0x140059DF8 (sub_140059DF8.c)
 *     sub_1400624CC @ 0x1400624CC (sub_1400624CC.c)
 *     sub_140065290 @ 0x140065290 (sub_140065290.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x140073B60 (StorPortDeviceReady.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_14008A858 @ 0x14008A858 (sub_14008A858.c)
 *     sub_14009FCA0 @ 0x14009FCA0 (sub_14009FCA0.c)
 *     sub_1400A8194 @ 0x1400A8194 (sub_1400A8194.c)
 *     sub_1400A9570 @ 0x1400A9570 (sub_1400A9570.c)
 *     sub_1401B259C @ 0x1401B259C (sub_1401B259C.c)
 * Callees:
 *     sub_14001B210 @ 0x14001B210 (sub_14001B210.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_14001F350(__int64 a1, int a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r14
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 *j; // rdi
  KIRQL v10; // bp
  __int64 (__fastcall *v11)(_QWORD *); // r15
  __int64 (__fastcall *v12)(__int64, unsigned __int64); // r12
  unsigned __int64 v13; // rsi
  _QWORD **v14; // rbx
  _QWORD *i; // r14
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // r14
  __int64 v19; // rsi
  unsigned int v20; // ebx
  PKINTERRUPT *v21; // rdi
  struct _KINTERRUPT *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(a1 + 856) )
    {
      return sub_14001B210(a1, a2);
    }
    else
    {
      v10 = sub_14001E1F0(a1);
      v11 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
      v12 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
      v13 = BYTE2(a2) | (unsigned __int64)((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8);
      v14 = (_QWORD **)(*(_QWORD *)(a1 + 184)
                      + 16LL
                      * ((*(unsigned int (__fastcall **)(unsigned __int64))(a1 + 208))(v13) % *(_DWORD *)(a1 + 172)));
      for ( i = *v14; i != v14; i = (_QWORD *)*i )
      {
        v16 = v11(i);
        v17 = v12(v16, v13);
        if ( !v17 )
        {
          v18 = i - 10;
          goto LABEL_13;
        }
        if ( v17 < 0 )
          break;
      }
      v18 = 0LL;
LABEL_13:
      if ( *(_BYTE *)(a1 + 4369) )
      {
        v19 = *(_QWORD *)(a1 + 4352);
        if ( *(_DWORD *)(a1 + 4336) == 2 )
        {
          v20 = *(_DWORD *)(v19 + 4) - 1;
          if ( *(_DWORD *)(v19 + 4) != 1 )
          {
            v21 = (PKINTERRUPT *)(v19 + 48LL * v20 + 24);
            do
            {
              KeReleaseInterruptSpinLock(*v21, *(_BYTE *)v19);
              v21 -= 6;
              --v20;
            }
            while ( v20 );
          }
        }
        KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v19 + 24), v10);
        return v18;
      }
      else
      {
        v22 = *(struct _KINTERRUPT **)(a1 + 848);
        if ( v22 )
          KeReleaseInterruptSpinLock(v22, v10);
        return v18;
      }
    }
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    v7 = a1 + 144;
    for ( j = *(__int64 **)(a1 + 144); j != (__int64 *)v7; j = (__int64 *)*j )
    {
      v6 = j - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)j + 10)) | ((((unsigned __int8)*((_DWORD *)j + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)j + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( j != (__int64 *)v7 )
      return v6;
    return (__int64 *)v5;
  }
}
