/*
 * XREFs of NvmeNamespaceIdleState @ 0x140031970
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x140031BA0 (RaidGetStorPoFxComponent.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 */

__int64 __fastcall NvmeNamespaceIdleState(struct _SLIST_ENTRY *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebp
  _SLIST_ENTRY *Next; // rdi
  __int64 result; // rax
  _DWORD *StorPoFxComponent; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  signed __int32 v12; // r11d
  _SLIST_ENTRY *v13; // rdx
  __int64 Next_low; // r9
  _SLIST_ENTRY *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 1;
  Next = a1[1].Next[8].Next;
  result = NvmeNamespaceCheckAndAcquirePoFx(a1);
  if ( (_BYTE)result )
  {
    *(_DWORD *)(*((_QWORD *)&a1[8].Next->Next + 1) + 16LL) = a3;
    StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*((_QWORD *)&a1[8].Next->Next + 1) + 8LL), a2);
    if ( StorPoFxComponent && *StorPoFxComponent == 2 )
      v6 = StorPoFxComponent[8];
    v13 = Next[10].Next;
    Next_low = LODWORD(v13[11].Next);
    if ( (Next_low & 1) != 0 )
      v6 = 1;
    if ( (*(_DWORD *)(&Next[25].Next[11].Next + 1) & 0x40000000) == 0 )
      goto LABEL_23;
    if ( (*(_DWORD *)(v11 + 32) & 2) != 0 )
    {
      if ( a3 <= v6 )
      {
        if ( LOBYTE(v13->Next) != 1 )
          goto LABEL_23;
        goto LABEL_11;
      }
      if ( LOBYTE(v13->Next) != 1 )
        goto LABEL_23;
    }
    else
    {
      if ( (Next_low & 0x20) == 0 || (*(_DWORD *)(v11 + 32) & 0x200) == 0 || LOBYTE(v13->Next) != 1 )
        goto LABEL_23;
      if ( !a3 )
      {
LABEL_11:
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 96), 1, 0) )
        {
          PoFxActivateComponent(**((_QWORD **)&Next[10].Next->Next + 1), 0LL, 0LL);
          v15 = Next[10].Next;
          if ( *(_BYTE *)(*((_QWORD *)&v15->Next + 1) + 64LL) != 1 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v15[7].Next + 1, &LockHandle);
            if ( SHIDWORD(Next[10].Next[4].Next) > 1 )
            {
              BYTE2(a1[8].Next[3].Next) |= 1u;
              LOWORD(a1[8].Next[3].Next) = a3;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[10].Next[6], a1 + 9);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              return NvmeNamespaceReleasePoFx(a1);
            }
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
        }
LABEL_23:
        PoFxCompleteIdleState(**((_QWORD **)&a1[8].Next->Next + 1), a2, v10, Next_low);
        return NvmeNamespaceReleasePoFx(a1);
      }
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 96), v12, 1) == 1 )
      PoFxIdleComponent(**((_QWORD **)&Next[10].Next->Next + 1), 0LL, 0LL);
    goto LABEL_23;
  }
  return result;
}
