/*
 * XREFs of FsFilterAllocateCompletionStack @ 0x14045B538
 * Callers:
 *     FsFilterCtrlInit @ 0x14045B4A0 (FsFilterCtrlInit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsFilterAllocateCompletionStack(__int64 a1, char a2)
{
  _QWORD *AutoBoostThreadState; // rdi
  $AA7B8230874764A53E1F7A8CE5E032EC *p_IptSaveArea; // rsi
  __int64 Pool2; // rbp
  __int64 result; // rax

  AutoBoostThreadState = 0LL;
  p_IptSaveArea = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
    goto LABEL_2;
  if ( !a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 4) != 250 )
    {
      if ( *(unsigned __int8 *)(a1 + 4) == 251 )
        goto LABEL_11;
      if ( *(unsigned __int8 *)(a1 + 4) != 252 )
      {
        if ( *(unsigned __int8 *)(a1 + 4) == 253 )
          goto LABEL_11;
        if ( *(unsigned __int8 *)(a1 + 4) != 254 )
        {
          if ( *(unsigned __int8 *)(a1 + 4) != 255 )
          {
LABEL_13:
            KeWaitForSingleObject(p_IptSaveArea, Executive, 0, 0, 0LL);
            Pool2 = (__int64)(AutoBoostThreadState + 1);
            *AutoBoostThreadState = KeGetCurrentThread();
            memset_0(AutoBoostThreadState + 1, 0, 0x3C8uLL);
            *(_DWORD *)(a1 + 64) |= 2u;
LABEL_2:
            *(_DWORD *)(a1 + 64) |= 1u;
            result = 0LL;
            *(_QWORD *)(a1 + 80) = Pool2;
            return result;
          }
LABEL_11:
          AutoBoostThreadState = VslpReservedTransferLock.AutoBoostThreadState;
          p_IptSaveArea = ($AA7B8230874764A53E1F7A8CE5E032EC *)&VslpReservedTransferLock.IptSaveArea;
          goto LABEL_13;
        }
      }
    }
    AutoBoostThreadState = &VslpReservedTransferLock.SystemAffinityTokenListHead.Next->Next;
    p_IptSaveArea = &VslpReservedTransferLock.1144;
    goto LABEL_13;
  }
  return 3221225626LL;
}
