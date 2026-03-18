/*
 * XREFs of HalpKdEnumerateDebuggingDevices @ 0x140C12590
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x140C127C0 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     wcsncpy_s @ 0x14053CCA0 (wcsncpy_s.c)
 *     HalpMmAllocateMemory @ 0x14057DCD4 (HalpMmAllocateMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     HalpDeviceEquals @ 0x140C123C4 (HalpDeviceEquals.c)
 */

__int64 __fastcall HalpKdEnumerateDebuggingDevices(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  struct _LIST_ENTRY v7; // xmm1
  unsigned int Blink; // eax
  void *Memory; // rax
  int v10; // ecx
  __int64 v11; // rcx
  size_t v12; // rdi
  void *Pool2; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 19) )
    return 0LL;
  if ( HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink
    && BYTE3(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[1].Flink)
    && HalpDeviceEquals(a1, a2) )
  {
    Flink = HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink;
    v5 = 2LL;
    v6 = (_OWORD *)a2;
    do
    {
      *v6 = *Flink;
      v6[1] = Flink[1];
      v6[2] = Flink[2];
      v6[3] = Flink[3];
      v6[4] = Flink[4];
      v6[5] = Flink[5];
      v6[6] = Flink[6];
      v6 += 8;
      v7 = Flink[7];
      Flink += 8;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
    *v6 = *Flink;
    Blink = (unsigned int)HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Blink;
    if ( Blink && HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Flink )
    {
      if ( HalpMmLoaderBlock )
        Memory = (void *)HalpMmAllocateMemory(Blink);
      else
        Memory = (void *)ExAllocatePool2(
                           256LL,
                           LODWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Blink),
                           0x646C6148u);
      *(_QWORD *)(a2 + 208) = Memory;
      if ( !Memory )
        return 3221225473LL;
      memmove(
        Memory,
        HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Flink,
        LODWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Blink));
    }
    v10 = (int)HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[14].Blink;
    if ( !v10 || !HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[14].Flink )
      goto LABEL_24;
    v11 = (unsigned int)(v10 + 2);
    v12 = (unsigned int)v11;
    if ( HalpMmLoaderBlock )
      Pool2 = (void *)HalpMmAllocateMemory(v11);
    else
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v11, 0x646C6148u);
    *(_QWORD *)(a2 + 224) = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v12);
      wcsncpy_s(
        *(wchar_t **)(a2 + 224),
        v12 >> 1,
        (const wchar_t *)HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[14].Flink,
        (unsigned __int64)LODWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[14].Blink) >> 1);
LABEL_24:
      *(_WORD *)(a2 + 18) = 256;
      return 0LL;
    }
  }
  return 3221225473LL;
}
