/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x1407C448C
 * Callers:
 *     NtAlpcQueryInformation @ 0x140A7D210 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     AlpcpGetPortNameInformation @ 0x140773BC0 (AlpcpGetPortNameInformation.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140AEDC60 (AlpcpReferenceMessageByWaitingThread.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        void **a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  void *ULong64FromUser; // rax
  NTSTATUS result; // eax
  __int16 *v8; // r14
  _QWORD *v9; // r12
  int PortNameInformation; // edi
  ULONG_PTR v11; // r13
  struct _KLOCK_ENTRIES *v12; // r9
  _QWORD *v13; // rax
  __int64 *v14; // r12
  LegacyAutoBoost *v15; // rcx
  signed __int64 *p_Lock; // r10
  __int64 v17; // r12
  __int64 *v18; // rcx
  __int64 v19; // rcx
  signed __int64 *v20; // r13
  signed __int64 *v21; // rcx
  struct _KLOCK_ENTRIES *v22; // r9
  _BYTE *v23; // rdx
  char v24; // r8
  void *v25; // rcx
  signed __int64 *v26; // rcx
  unsigned int v27; // r13d
  __int16 *v28; // rax
  __int16 v29; // cx
  __int16 v30; // ax
  __int16 *v31; // rcx
  size_t v32; // r8
  void *v33; // rdx
  void *v34; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-90h] BYREF
  PVOID Object; // [rsp+40h] [rbp-88h] BYREF
  PVOID v38; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *v39; // [rsp+58h] [rbp-70h]
  void *v40; // [rsp+60h] [rbp-68h]
  __int16 *v41; // [rsp+68h] [rbp-60h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-50h]
  void *v43; // [rsp+80h] [rbp-48h]
  char v44; // [rsp+D0h] [rbp+8h]

  BugCheckParameter2 = 0LL;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
    ULong64FromUser = (void *)RtlReadULong64FromUser(a2);
  else
    ULong64FromUser = *a2;
  v43 = ULong64FromUser;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ULong64FromUser, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = 0LL;
    v41 = 0LL;
    v36 = 0;
    v44 = 0;
    v40 = 0LL;
    v9 = Object;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread(Object, &BugCheckParameter2);
    if ( PortNameInformation == -1073741275 )
    {
      v11 = 0LL;
      PortNameInformation = 0;
      goto LABEL_56;
    }
    if ( PortNameInformation < 0 )
    {
      ObfDereferenceObject(v9);
      return PortNameInformation;
    }
    v11 = BugCheckParameter2;
    AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
    --*(_WORD *)(v11 - 30);
    if ( v11 != v9[183] || (v13 = *(_QWORD **)(v11 + 24), (v38 = v13) == 0LL) )
    {
LABEL_56:
      if ( v11 )
        AlpcpUnlockMessage(v11);
      ObfDereferenceObject(v9);
      v27 = 32;
      if ( v8 )
      {
        v27 = (unsigned __int16)v8[1] + 32;
      }
      else if ( PortNameInformation == -1073741820 )
      {
        v27 = v36 + 16;
      }
      if ( a3 < v27 )
        PortNameInformation = -1073741820;
      if ( PortNameInformation >= 0 )
      {
        if ( AccessMode )
          RtlWriteUCharToUser(a2, v44);
        else
          *(_BYTE *)a2 = v44;
        if ( AccessMode )
          RtlWriteULong64ToUser(a2 + 1, (__int64)v40);
        else
          a2[1] = v40;
        v28 = (__int16 *)(a2 + 2);
        if ( v8 )
        {
          v29 = *v8;
          if ( AccessMode )
            RtlWriteUShortToUser((_WORD *)a2 + 8, v29);
          else
            *v28 = v29;
          v30 = v8[1];
          v31 = (__int16 *)a2 + 9;
          if ( AccessMode )
            RtlWriteUShortToUser(v31, v30);
          else
            *v31 = v30;
          if ( AccessMode )
            RtlWriteULong64ToUser(a2 + 3, (__int64)(a2 + 4));
          else
            a2[3] = a2 + 4;
          v32 = (unsigned __int16)v8[1];
          v33 = (void *)*((_QWORD *)v8 + 1);
          v34 = a2 + 4;
          if ( AccessMode )
            RtlCopyToUser(v34, v33, v32);
          else
            RtlCopyVolatileMemory(v34, v33, v32);
        }
        else
        {
          if ( AccessMode )
            RtlWriteUShortToUser((_WORD *)a2 + 8, 0);
          else
            *v28 = 0;
          if ( AccessMode )
            RtlWriteUShortToUser((_WORD *)a2 + 9, 0);
          else
            *((_WORD *)a2 + 9) = 0;
          if ( AccessMode )
            RtlWriteULong64ToUser(a2 + 3, 0LL);
          else
            a2[3] = 0LL;
        }
      }
      if ( a4 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      {
        if ( AccessMode )
          RtlWriteULongToUser(a4, v27);
        else
          *a4 = v27;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return PortNameInformation;
    }
    v14 = (__int64 *)v13[2];
    v42 = v14;
    if ( !v14 )
    {
LABEL_55:
      v9 = Object;
      goto LABEL_56;
    }
    v39 = (struct _KTHREAD *)(v14 - 2);
    v15 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v14 - 2), 0LL, 0LL, v12);
    BugCheckParameter2 = (ULONG_PTR)v15;
    p_Lock = (signed __int64 *)&v39->Header.Lock;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v39->Header.Lock, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(p_Lock, 0, v15, (struct _KTHREAD *)p_Lock);
      v15 = (LegacyAutoBoost *)BugCheckParameter2;
    }
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, (void *)1);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    AlpcpUnlockMessage(v11);
    BugCheckParameter2 = 0LL;
    v17 = *v14;
    if ( !v17 )
      goto LABEL_28;
    v17 &= -(__int64)(ObReferenceObjectSafe(v17) != 0);
    if ( !v17 )
      goto LABEL_28;
    v18 = v42;
    if ( (((*((_DWORD *)v38 + 104) & 6) - 2) & 0xFFFFFFFD) != 0 )
      v18 = v42 + 2;
    v19 = *v18;
    v20 = (signed __int64 *)v19;
    if ( v19 )
    {
      if ( v19 != v17 && !ObReferenceObjectSafe(v19) )
LABEL_28:
        v20 = 0LL;
    }
    v21 = (signed __int64 *)&v39->Header.Lock;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v39->Header.Lock, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v21);
      v21 = (signed __int64 *)&v39->Header.Lock;
    }
    KeAbPostRelease((unsigned __int64)v21);
    if ( v20 )
    {
      if ( !v17 )
      {
LABEL_51:
        if ( v20 && v20 != (signed __int64 *)v17 )
          ObfDereferenceObject(v20);
        v11 = BugCheckParameter2;
        goto LABEL_55;
      }
      v23 = (_BYTE *)KeAbPreAcquire((__int64)(v20 + 44), 0LL, 0LL, v22);
      v38 = v23;
      if ( _InterlockedCompareExchange64(v20 + 44, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v20 + 44, 0, (LegacyAutoBoost *)v23, (struct _KTHREAD *)(v20 + 44));
        v23 = v38;
      }
      v24 = 1;
      if ( v23 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire((AutoBoost *)v23, v23);
        else
          v23[10] = 1;
      }
      v25 = 0LL;
      if ( ((unsigned __int8)v20[3] & (unsigned __int8)v24) == 0 )
        v25 = (void *)v20[3];
      v38 = v25;
      if ( v25 )
        ObfReferenceObjectWithTag(v25, 0x63706C41u);
      v26 = v20 + 44;
      if ( _InterlockedCompareExchange64(v20 + 44, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v26);
        v26 = v20 + 44;
      }
      KeAbPostRelease((unsigned __int64)v26);
      if ( v38 )
      {
        v40 = (void *)*((_QWORD *)v38 + 58);
        ObfDereferenceObjectWithTag(v38, 0x63706C41u);
        if ( a3 > 0x10 )
          v36 = a3 - 16;
        PortNameInformation = AlpcpGetPortNameInformation(v17, &v41, &v36);
        v44 = PortNameInformation >= 0;
        v8 = v41;
      }
    }
    if ( v17 )
      ObfDereferenceObject((PVOID)v17);
    goto LABEL_51;
  }
  return result;
}
