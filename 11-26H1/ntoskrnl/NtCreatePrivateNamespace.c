/*
 * XREFs of NtCreatePrivateNamespace @ 0x140A96480
 * Callers:
 *     DifNtCreatePrivateNamespaceWrapper @ 0x1406727A0 (DifNtCreatePrivateNamespaceWrapper.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408E87A8 (ObpCaptureBoundaryDescriptor.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A967F0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRegisterPrivateNamespace @ 0x140A96994 (ObpRegisterPrivateNamespace.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreatePrivateNamespace(_QWORD *a1, unsigned int a2, __int64 a3, _OWORD *a4)
{
  char PreviousMode; // r15
  __int64 result; // rax
  char *v10; // rsi
  int v11; // ebx
  unsigned __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rcx
  int v18; // esi
  int inserted; // r14d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KLOCK_ENTRIES *v22; // r9
  void *v23; // rdx
  AutoBoost *v24; // r13
  signed __int64 Flink; // rax
  signed __int64 v26; // rdx
  struct _LIST_ENTRY *v27; // rtt
  __int64 ULong64FromUser; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-78h]
  PVOID P; // [rsp+60h] [rbp-38h] BYREF
  __int64 v33; // [rsp+68h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-28h] BYREF

  Object[0] = 0LL;
  v33 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  result = ObpCaptureBoundaryDescriptor(a4, (__int64 *)&P);
  if ( (int)result >= 0 )
  {
    v10 = (char *)P;
    v11 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v11 >= 0 )
    {
      v12 = (unsigned int)(*((_DWORD *)v10 + 6) + 392);
      if ( v12 < *((_QWORD *)v10 + 3) )
      {
        v11 = -1073741811;
      }
      else
      {
        v13 = ObCreateObjectEx(
                PreviousMode,
                ObpDirectoryObjectType,
                a3,
                PreviousMode,
                v31,
                *((_DWORD *)v10 + 6) + 392,
                0,
                0,
                Object,
                0LL);
        if ( v13 >= 0 )
        {
          v14 = Object[0];
          memset_0(Object[0], 0, (unsigned int)v12);
          v15 = ((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 8) = v15;
          *(_QWORD *)v15 = v15;
          v16 = *((_QWORD *)v10 + 3);
          *(_QWORD *)(v15 + 24) = v16;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = v10[40];
          memmove((void *)(v15 + 48), v10 + 48, v16);
          ExFreePoolWithTag(v10, 0x534E624Fu);
          v14[37] = 0LL;
          *((_DWORD *)v14 + 85) = -1;
          *((_DWORD *)v14 + 84) = 1;
          if ( (*((_BYTE *)v14 - 22) & 2) != 0 )
            v17 = (__int64)v14 - ObpInfoMaskToOffset[*((_BYTE *)v14 - 22) & 3] - 48;
          else
            v17 = 0LL;
          if ( v17 )
          {
            v18 = -1073741773;
          }
          else
          {
            v18 = ObpRegisterPrivateNamespace(((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v18 >= 0 )
            {
              PsReferenceSiloContext(v14);
              inserted = ObInsertObjectEx((char *)v14, 0LL, a2, 0, 0, 0LL, &v33);
              LODWORD(P) = inserted;
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v24 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL, 0LL, v22);
              if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
                ExfAcquirePushLockExclusiveEx(
                  (unsigned __int64 *)&CurrentServerSiloGlobals[45],
                  v24,
                  (__int64)&CurrentServerSiloGlobals[45]);
              if ( v24 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v24, v23);
                else
                  *((_BYTE *)v24 + 10) = 1;
              }
              if ( inserted < 0 || (v14[42] & 2) != 0 )
              {
                v29 = *(_QWORD *)v15;
                v30 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v30 != v15 )
                  __fastfail(3u);
                *v30 = v29;
                *(_QWORD *)(v29 + 8) = v30;
                --LODWORD(CurrentServerSiloGlobals[45].Blink);
                ObfDereferenceObject(v14);
              }
              else
              {
                *(_QWORD *)(v15 + 16) = v14;
                v14[40] = v15;
              }
              _m_prefetchw(&CurrentServerSiloGlobals[45]);
              Flink = (signed __int64)CurrentServerSiloGlobals[45].Flink;
              v26 = Flink - 16;
              if ( (Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v26 = 0LL;
              if ( (Flink & 2) != 0
                || (v27 = CurrentServerSiloGlobals[45].Flink,
                    v27 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)&CurrentServerSiloGlobals[45],
                                                   v26,
                                                   Flink)) )
              {
                ExfReleasePushLock(&CurrentServerSiloGlobals[45].Flink);
              }
              KeAbPostRelease((unsigned __int64)&CurrentServerSiloGlobals[45]);
              KeLeaveCriticalRegion();
              if ( inserted >= 0 )
              {
                if ( PreviousMode )
                  RtlWriteULong64ToUser(a1, v33);
                else
                  *a1 = v33;
              }
              return (unsigned int)inserted;
            }
          }
          ObfDereferenceObject(v14);
          return (unsigned int)v18;
        }
        v11 = v13;
      }
    }
    ExFreePoolWithTag(v10, 0x534E624Fu);
    return (unsigned int)v11;
  }
  return result;
}
