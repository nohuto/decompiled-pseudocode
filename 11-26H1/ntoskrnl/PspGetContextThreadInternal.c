/*
 * XREFs of PspGetContextThreadInternal @ 0x1409EC6B0
 * Callers:
 *     PspPicoGetContextThreadEx @ 0x1407FCB30 (PspPicoGetContextThreadEx.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
 *     PsGetContextThread @ 0x1409EBB70 (PsGetContextThread.c)
 *     NtGetContextThread @ 0x1409EBBC0 (NtGetContextThread.c)
 *     sub_1409EBC70 @ 0x1409EBC70 (sub_1409EBC70.c)
 *     PsGetUserContextThread @ 0x1409EBE78 (PsGetUserContextThread.c)
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
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
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140730B80 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlpWriteExtendedContext @ 0x1409EC994 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409EE360 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // r12d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // ecx
  unsigned int ULongFromUser; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp+4h] BYREF
  __int64 v23; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v25[3]; // [rsp+90h] [rbp+50h] BYREF
  char v26; // [rsp+A8h] [rbp+68h]
  _BYTE v27[3]; // [rsp+A9h] [rbp+69h] BYREF
  int v28; // [rsp+ACh] [rbp+6Ch]
  struct _KEVENT Event; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *p_ULongFromUser; // [rsp+C8h] [rbp+88h]
  _OWORD v31[2]; // [rsp+1D0h] [rbp+190h] BYREF

  v23 = 0LL;
  memset_0(v24, 0, 0x58uLL);
  memset_0(v27, 0, 0x127uLL);
  v22 = 0;
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser((unsigned int *)(a2 + 48));
  else
    ULongFromUser = *(_DWORD *)(a2 + 48);
  result = RtlpSanitizeContextFlags(&ULongFromUser, a3);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    v15 = ULongFromUser;
    result = RtlGetExtendedContextLength(ULongFromUser, (__int64)&v22);
    if ( (int)result < 0 )
      return result;
    v16 = v22 + 15LL;
    if ( v16 <= v22 )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
    v18 = alloca(v17);
    v19 = alloca(v17);
    p_ULongFromUser = &ULongFromUser;
    result = RtlInitializeExtendedContext((__int64)&ULongFromUser, v15, (__int64)&v23);
    if ( (int)result < 0 )
      return result;
    v11 = v23;
    p_ULongFromUser = (unsigned int *)(v23 - 1232);
    result = RtlpReadExtendedContext(v20, 3, v23, v15, a2, (__int64)v31);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    p_ULongFromUser = (unsigned int *)a2;
    v11 = a2 + 1232;
  }
  if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225520LL;
  v26 = a4;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
  {
    v25[0] = 0LL;
    v25[1] = a1;
    v27[0] = v27[0] & 0xFC | (2 * (a5 & 1));
    --CurrentThread->SpecialApcDisable;
    PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, v25);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
  }
  else
  {
    v27[0] = v27[0] & 0xFD | (2 * (a5 & 1)) | 1;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    KeInitializeApc((__int64)v24, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
    if ( !(unsigned __int8)KeInsertQueueApc((__int64)v24, 0LL, a1, 2) )
      return 3221225473LL;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  result = (unsigned int)v28;
  if ( v28 >= 0 && p_ULongFromUser != (unsigned int *)a2 )
    return RtlpWriteExtendedContext(v28, (int)a2 + 1232, (unsigned int)v31, p_ULongFromUser[12], v11);
  return result;
}
