/*
 * XREFs of PspGetContextThreadInternal @ 0x1409E8E80
 * Callers:
 *     PspPicoGetContextThreadEx @ 0x140802560 (PspPicoGetContextThreadEx.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     PsGetContextThread @ 0x1409E8340 (PsGetContextThread.c)
 *     NtGetContextThread @ 0x1409E8390 (NtGetContextThread.c)
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     PsGetUserContextThread @ 0x1409E8648 (PsGetUserContextThread.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
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
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140735750 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlpWriteExtendedContext @ 0x1409E9164 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  int result; // eax
  PCONTEXT_EX v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  ULONG v15; // r12d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v25[3]; // [rsp+90h] [rbp+50h] BYREF
  char v26; // [rsp+A8h] [rbp+68h]
  _BYTE v27[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v28; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  ULONG *p_ContextFlags; // [rsp+C8h] [rbp+88h]
  _OWORD v31[2]; // [rsp+1D0h] [rbp+190h] BYREF

  ContextEx = 0LL;
  memset_0(v24, 0, 0x58uLL);
  memset_0(v27, 0, 0x127uLL);
  ContextLength = 0;
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
    ContextFlags = RtlReadULongFromUser((unsigned int *)(a2 + 48));
  else
    ContextFlags = *(_DWORD *)(a2 + 48);
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result < 0 )
    return result;
  if ( a3 )
  {
    v15 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result < 0 )
      return result;
    v16 = ContextLength + 15LL;
    if ( v16 <= ContextLength )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
    v18 = alloca(v17);
    v19 = alloca(v17);
    p_ContextFlags = &ContextFlags;
    result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v15, &ContextEx);
    if ( result < 0 )
      return result;
    v11 = ContextEx;
    p_ContextFlags = (ULONG *)&ContextEx[-39].XState;
    result = RtlpReadExtendedContext(v20, 3, (_DWORD)ContextEx, v15, a2, (__int64)v31);
    if ( result < 0 )
      return result;
  }
  else
  {
    p_ContextFlags = (ULONG *)a2;
    v11 = (PCONTEXT_EX)(a2 + 1232);
  }
  if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return -1073741776;
  v26 = a4;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
  {
    v25[0] = 0LL;
    v25[1] = a1;
    v27[0] = v27[0] & 0xFC | (2 * (a5 & 1));
    --CurrentThread->SpecialApcDisable;
    PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, v25);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
  }
  else
  {
    v27[0] = v27[0] & 0xFD | (2 * (a5 & 1)) | 1;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    KeInitializeApc((__int64)v24, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
    if ( !(unsigned __int8)KeInsertQueueApc((__int64)v24, 0LL, a1, 2) )
      return -1073741823;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  result = v28;
  if ( v28 >= 0 && p_ContextFlags != (ULONG *)a2 )
    return RtlpWriteExtendedContext(v28, (int)a2 + 1232, (unsigned int)v31, p_ContextFlags[12], (__int64)v11);
  return result;
}
