/*
 * XREFs of PspSetContextThreadInternal @ 0x1409EC360
 * Callers:
 *     PspPicoSetContextThreadEx @ 0x1407FCB60 (PspPicoSetContextThreadEx.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
 *     sub_1409EBC70 @ 0x1409EBC70 (sub_1409EBC70.c)
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 *     NtSetContextThread @ 0x140AF7E80 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140B3AF90 (PsSetContextThread.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     RtlpSanitizeContextFlags @ 0x1403D3D90 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D5E20 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D6A40 (RtlGetExtendedContextLength.c)
 *     KeInitializeApc @ 0x140457520 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140730B80 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlpReadExtendedContext @ 0x1409EE360 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x140A7EE10 (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // ebx
  struct _KPROCESS *v16; // rdi
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  int v20; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-20h]
  unsigned int ULongFromUser; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+44h] [rbp+4h] BYREF
  __int64 v24; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v25[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+50h] BYREF
  PETHREAD v27; // [rsp+98h] [rbp+58h] BYREF
  char v28; // [rsp+A8h] [rbp+68h]
  _BYTE v29[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v30; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *p_ULongFromUser; // [rsp+C8h] [rbp+88h]

  v24 = 0LL;
  memset_0(v25, 0, 0x58uLL);
  memset_0(v29, 0, 0x127uLL);
  v23 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser((unsigned int *)(a2 + 48));
  else
    ULongFromUser = *(_DWORD *)(a2 + 48);
  result = RtlpSanitizeContextFlags(&ULongFromUser, a3);
  if ( (int)result >= 0 )
  {
    if ( !a3 )
    {
      p_ULongFromUser = (unsigned int *)a2;
      goto LABEL_6;
    }
    v17 = ULongFromUser;
    result = RtlGetExtendedContextLength(ULongFromUser, (__int64)&v23);
    if ( (int)result >= 0 )
    {
      v18 = v23 + 15LL;
      if ( v18 <= v23 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      p_ULongFromUser = &ULongFromUser;
      memset_0(&ULongFromUser, 0, v23);
      result = RtlInitializeExtendedContext((__int64)p_ULongFromUser, v17, (__int64)&v24);
      if ( (int)result >= 0 )
      {
        p_ULongFromUser = (unsigned int *)(v24 - 1232);
        result = RtlpReadExtendedContext(v20, 2, v24, v17, a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
          {
            return (unsigned int)-1073741776;
          }
          else
          {
            v11 = v29[0] & 0xFB;
            v29[0] &= ~4u;
            if ( a4 )
            {
              if ( (a5 & 2) == 0 )
              {
                v16 = IoThreadToProcess(CurrentThread);
                if ( IoThreadToProcess(Thread) == v16 )
                  v11 |= 0x14u;
              }
            }
            v28 = a4;
            if ( Thread == CurrentThread )
            {
              v26 = 1LL;
              v27 = Thread;
              v29[0] = v11 & 0xFC | (2 * (a5 & 1));
              --CurrentThread->SpecialApcDisable;
              Timeout = (PLARGE_INTEGER)&v27;
              PspGetSetContextSpecialApc((__int64)v25, 0LL, 0LL, &v26);
              v14 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v14
                && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v13, v12);
              }
              goto LABEL_14;
            }
            v29[0] = v11 & 0xFD | (2 * (a5 & 1)) | 1;
            KeInitializeEvent(&Event, NotificationEvent, 0);
            KeInitializeApc((__int64)v25, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
            if ( (unsigned __int8)KeInsertQueueApc((__int64)v25, 1LL, (__int64)Thread, 2) )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_14:
              v15 = v30;
              if ( v30 >= 0 && a3 == 1 && a4 == 1 )
                EtwTiLogSetContextThread(
                  (unsigned __int8)KeGetCurrentThread()->PreviousMode,
                  Thread,
                  p_ULongFromUser,
                  ULongFromUser,
                  Timeout);
              return v15;
            }
            return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return result;
}
