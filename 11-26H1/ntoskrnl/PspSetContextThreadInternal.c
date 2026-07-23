/*
 * XREFs of PspSetContextThreadInternal @ 0x1409E8B30
 * Callers:
 *     PspPicoSetContextThreadEx @ 0x140802590 (PspPicoSetContextThreadEx.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     NtSetContextThread @ 0x140AFA520 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140B3D210 (PsSetContextThread.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     RtlpSanitizeContextFlags @ 0x1403D6D60 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140735750 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x140A84C80 (EtwTiLogSetContextThread.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, _CONTEXT *a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r14
  int result; // eax
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // ebx
  struct _KPROCESS *v16; // rdi
  ULONG v17; // esi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  int v20; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v25[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+50h] BYREF
  PETHREAD v27; // [rsp+98h] [rbp+58h] BYREF
  char v28; // [rsp+A8h] [rbp+68h]
  _BYTE v29[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v30; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  ContextEx = 0LL;
  memset_0(v25, 0, 0x58uLL);
  memset_0(v29, 0, 0x127uLL);
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
    ContextFlags = RtlReadULongFromUser(&a2->ContextFlags);
  else
    ContextFlags = a2->ContextFlags;
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      Context = a2;
      goto LABEL_6;
    }
    v17 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v18 = ContextLength + 15LL;
      if ( v18 <= ContextLength )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset_0(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, v17, &ContextEx);
      if ( result >= 0 )
      {
        Context = (PCONTEXT)&ContextEx[-39].XState;
        result = RtlpReadExtendedContext(v20, 2, (_DWORD)ContextEx, v17, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return -1073741776;
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
              && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
                Context,
                ContextFlags,
                Timeout);
            return v15;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
