/*
 * XREFs of HalpRegisterDeviceInUse @ 0x140C189D4
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x140C187C0 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     HalpMmAllocateMemory @ 0x1405801F4 (HalpMmAllocateMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     HalpFindDevice @ 0x140C18214 (HalpFindDevice.c)
 */

__int64 __fastcall HalpRegisterDeviceInUse(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v4; // ebp
  ULONG_PTR v5; // rsi
  _QWORD *Memory; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r8
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  _QWORD *WaitStatus; // rax

  v1 = *(_DWORD *)(a1 + 220);
  if ( v1 != 3 )
  {
    if ( v1 > 1 )
      return 3221225485LL;
    if ( !HalpFindDevice(a1) )
    {
      v4 = *(_DWORD *)(a1 + 232) + 2;
      v5 = (unsigned int)(*(_DWORD *)(a1 + 232) + 298);
      if ( HalpMmLoaderBlock )
        Memory = (_QWORD *)HalpMmAllocateMemory((unsigned int)(*(_DWORD *)(a1 + 232) + 298));
      else
        Memory = (_QWORD *)ExAllocatePool2(256LL, v5, 0x646C6148u);
      v7 = Memory;
      if ( !Memory )
        return 3221225626LL;
      memset_0(Memory, 0, v5);
      v8 = 2LL;
      v7[2] = v7 + 3;
      v9 = v7 + 3;
      v10 = (_OWORD *)a1;
      do
      {
        *v9 = *v10;
        v9[1] = v10[1];
        v9[2] = v10[2];
        v9[3] = v10[3];
        v9[4] = v10[4];
        v9[5] = v10[5];
        v9[6] = v10[6];
        v9 += 8;
        v11 = v10[7];
        v10 += 8;
        *(v9 - 1) = v11;
        --v8;
      }
      while ( v8 );
      *v9 = *v10;
      if ( *(_DWORD *)(a1 + 220) == 1 && *(_QWORD *)(a1 + 224) )
      {
        v7[31] = v7 + 37;
        wcscpy_s(*(wchar_t **)(v7[2] + 224LL), (unsigned __int64)v4 >> 1, *(const wchar_t **)(a1 + 224));
      }
      WaitStatus = (_QWORD *)IommuInterfaceStateChangeCallbackPushLock.WaitStatus;
      if ( *(struct _KTHREAD **)IommuInterfaceStateChangeCallbackPushLock.WaitStatus != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40] )
        __fastfail(3u);
      *v7 = &IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40];
      v7[1] = WaitStatus;
      *WaitStatus = v7;
      ++*(_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[32];
      IommuInterfaceStateChangeCallbackPushLock.WaitStatus = (volatile __int64)v7;
    }
  }
  return 0LL;
}
