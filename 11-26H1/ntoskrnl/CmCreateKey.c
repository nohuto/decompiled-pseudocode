/*
 * XREFs of CmCreateKey @ 0x140936900
 * Callers:
 *     CmCreateKeyCallout @ 0x1409368B0 (CmCreateKeyCallout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F8C10 (CmpCaptureUnicodeStringBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     CmpFreeParseContext @ 0x1409376D0 (CmpFreeParseContext.c)
 *     CmpAllocateParseContext @ 0x140938880 (CmpAllocateParseContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x14093FE00 (CmpDoesBufferRequireCapturing.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        unsigned int *a7,
        __int64 a8)
{
  ULONG_PTR v8; // r15
  int v9; // r13d
  struct _PRIVILEGE_SET *v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned int *v13; // rcx
  char v14; // bl
  unsigned int PreviousMode; // ebx
  _QWORD *v16; // r15
  unsigned int ULongFromUser; // edi
  __int128 v18; // xmm0
  char v19; // dl
  int v20; // edi
  int v21; // eax
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  struct _PRIVILEGE_SET *v23; // r15
  _QWORD *v24; // r15
  unsigned int v25; // edi
  __int128 v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // r15d
  _DWORD *ParseContext; // rax
  POBJECT_TYPE *v31; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v33; // eax
  __int64 v35; // rcx
  char v36; // [rsp+40h] [rbp-1C8h]
  char v37; // [rsp+43h] [rbp-1C5h]
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-1C0h]
  HANDLE Handle; // [rsp+58h] [rbp-1B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1A8h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-198h] BYREF
  int v42; // [rsp+80h] [rbp-188h]
  __int64 v43; // [rsp+88h] [rbp-180h]
  HANDLE *v44; // [rsp+90h] [rbp-178h]
  unsigned int v45; // [rsp+A0h] [rbp-168h]
  unsigned int *v46; // [rsp+B0h] [rbp-158h]
  struct _PRIVILEGE_SET *v47; // [rsp+B8h] [rbp-150h]
  __int128 v48; // [rsp+C0h] [rbp-148h]
  __int128 v49; // [rsp+D0h] [rbp-138h]
  __int128 v50; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-118h]
  __int128 v52; // [rsp+100h] [rbp-108h]
  __int128 v53; // [rsp+110h] [rbp-F8h]
  HANDLE *v54; // [rsp+120h] [rbp-E8h]
  __int64 v55; // [rsp+128h] [rbp-E0h]
  __int128 v56; // [rsp+130h] [rbp-D8h]
  __int128 v57; // [rsp+140h] [rbp-C8h]
  __int128 v58; // [rsp+150h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+160h] [rbp-A8h]
  __int128 v60; // [rsp+170h] [rbp-98h]
  __int128 v61; // [rsp+180h] [rbp-88h]
  __int128 v62; // [rsp+190h] [rbp-78h]
  _BYTE v63[32]; // [rsp+1A0h] [rbp-68h] BYREF

  v8 = a3;
  v43 = a3;
  v9 = a2;
  v44 = a1;
  v54 = a1;
  v55 = a3;
  v46 = a7;
  Handle = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  *(_OWORD *)Src = 0LL;
  v50 = 0LL;
  Privileges = 0LL;
  v10 = 0LL;
  v47 = 0LL;
  memset(v63, 0, sizeof(v63));
  v51 = 0LL;
  v37 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v63, 0x20000uLL, a3);
    v37 = 1;
  }
  v11 = 0LL;
  v42 = v9 & 0x300;
  v12 = v9 & 0xFFFFFCFF;
  v45 = v12;
  v14 = CmpAcquireShutdownRundown(a1, a2);
  v36 = v14;
  if ( v14 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( a5 )
    {
      v16 = a5 + 2;
      if ( (_BYTE)PreviousMode )
      {
        ULongFromUser = RtlReadULongFromUser(a5);
        *(_QWORD *)&v56 = ULongFromUser;
        *((_QWORD *)&v56 + 1) = RtlReadULong64FromUser(v16);
        v18 = v56;
      }
      else
      {
        v48 = 0LL;
        ULongFromUser = *a5;
        LODWORD(v48) = *a5;
        *((_QWORD *)&v48 + 1) = *v16;
        v18 = v48;
      }
      v61 = v18;
      v19 = ULongFromUser;
      v48 = v18;
      v13 = (unsigned int *)v18;
      LOWORD(v52) = v18;
      DWORD1(v52) = DWORD1(v18);
      *((_QWORD *)&v52 + 1) = *((_QWORD *)&v18 + 1);
      WORD1(v52) = v18;
      if ( !(_WORD)ULongFromUser )
      {
        *((_QWORD *)&v52 + 1) = 0LL;
        v19 = 0;
      }
      if ( (v19 & 1) != 0 )
      {
        v20 = -1073741811;
      }
      else
      {
        v50 = v52;
        v20 = 0;
      }
      if ( v20 < 0 )
      {
        v14 = v36;
        v23 = 0LL;
        goto LABEL_63;
      }
      if ( (_WORD)v50 && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, *((_QWORD *)&v50 + 1)) )
      {
        TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
        v23 = TransientPoolWithQuota;
        Privileges = TransientPoolWithQuota;
        if ( !TransientPoolWithQuota )
        {
          v20 = -1073741670;
          v14 = v36;
          goto LABEL_63;
        }
        CmpCaptureUnicodeStringBuffer((unsigned __int16 *)&v50, TransientPoolWithQuota, PreviousMode);
      }
      v8 = v43;
    }
    if ( (_BYTE)PreviousMode )
    {
      RtlWriteULong64ToUser(v44, 0LL);
      if ( v46 )
      {
        v21 = RtlReadULongFromUser(v46);
        RtlWriteULongToUser(v46, v21);
      }
      if ( (v8 & 3) != 0 )
LABEL_18:
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(&v58, (void *)v8, 0x30uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&v58, (const void *)v8, 0x30uLL);
    }
    v24 = (_QWORD *)(v59 + 8);
    if ( (_BYTE)PreviousMode )
    {
      v57 = 0LL;
      v25 = RtlReadULongFromUser((unsigned int *)v59);
      LODWORD(v57) = v25;
      *((_QWORD *)&v57 + 1) = RtlReadULong64FromUser(v24);
      v26 = v57;
    }
    else
    {
      v49 = 0LL;
      v25 = *(_DWORD *)v59;
      LODWORD(v49) = *(_DWORD *)v59;
      *((_QWORD *)&v49 + 1) = *v24;
      v26 = v49;
    }
    v62 = v26;
    v27 = v25;
    v28 = v25;
    v49 = v26;
    v13 = (unsigned int *)v26;
    LOWORD(v53) = v26;
    DWORD1(v53) = DWORD1(v26);
    *((_QWORD *)&v53 + 1) = *((_QWORD *)&v26 + 1);
    WORD1(v53) = v26;
    if ( !(_WORD)v25 )
    {
      *((_QWORD *)&v53 + 1) = 0LL;
      v28 = 0LL;
    }
    if ( (v28 & 1) != 0 )
    {
      v20 = -1073741811;
    }
    else
    {
      *(_OWORD *)Src = v53;
      v20 = 0;
    }
    if ( v20 < 0 )
    {
      v14 = v36;
      v23 = Privileges;
      goto LABEL_63;
    }
    if ( LOWORD(Src[0])
      && ((_BYTE)PreviousMode || CmpFreezeListLock.CycleTime && MmIsUserAddress((unsigned __int64)Src[1])) )
    {
      v10 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
      v47 = v10;
      if ( !v10 )
      {
        v20 = -1073741670;
        v14 = v36;
        v23 = Privileges;
        goto LABEL_63;
      }
      if ( (_BYTE)PreviousMode && ((__int64)Src[1] & 1) != 0 )
        goto LABEL_18;
      if ( (_BYTE)PreviousMode )
        RtlCopyFromUser(v10, Src[1], LOWORD(Src[0]));
      else
        RtlCopyVolatileMemory(v10, Src[1], LOWORD(Src[0]));
      Src[1] = v10;
    }
    *(_QWORD *)&v59 = Src;
    v13 = (unsigned int *)*((_QWORD *)&v58 + 1);
    Handle = (HANDLE)*((_QWORD *)&v58 + 1);
    v29 = v42;
    if ( CmpTraceRoutine )
    {
      if ( *((_QWORD *)&v58 + 1) )
      {
        Object = 0LL;
        if ( ObReferenceObjectByHandle(
               *((HANDLE *)&v58 + 1),
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &Object,
               0LL) >= 0 )
        {
          v51 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      ParseContext = (_DWORD *)CmpAllocateParseContext(v13, v28, v27);
      v11 = (__int64)ParseContext;
      Object = ParseContext;
      if ( ParseContext )
      {
        ParseContext[7] = v29;
        ParseContext[6] = a6;
        *ParseContext = 1;
        *((_QWORD *)ParseContext + 1) = *((_QWORD *)&v50 + 1);
        *((_WORD *)ParseContext + 2) = v50;
        *((_QWORD *)ParseContext + 9) = a8;
        v31 = CmKeyObjectType;
        CurrentSilo = PsGetCurrentSilo();
        v20 = ObOpenObjectByNameEx(v43, (__int64)v31, PreviousMode, 0LL, v12, v11, (__int64)CurrentSilo, &Handle);
        if ( v20 >= 0 )
        {
          if ( (_BYTE)PreviousMode )
            RtlWriteULong64ToUser(v44, (__int64)Handle);
          else
            *v44 = Handle;
          v13 = v46;
          if ( v46 )
          {
            v33 = *(_DWORD *)(v11 + 32);
            if ( (_BYTE)PreviousMode )
              RtlWriteULongToUser(v46, v33);
            else
              *v46 = v33;
          }
        }
        v14 = v36;
        v23 = Privileges;
      }
      else
      {
        v20 = -1073741670;
        v14 = v36;
        v23 = Privileges;
      }
    }
    else
    {
      v20 = -1073741811;
      v14 = v36;
      v23 = Privileges;
    }
  }
  else
  {
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, v8, 0LL);
    v20 = -1073741431;
    v23 = 0LL;
  }
LABEL_63:
  if ( v37 && CmpTraceRoutine )
  {
    v35 = v51;
    LOBYTE(v35) = 10;
    guard_dispatch_icall_no_overrides(v35, (__int64)v63);
  }
  if ( v23 )
    CmSiFreeMemory(v23);
  if ( v10 )
    CmSiFreeMemory(v10);
  if ( v11 )
    CmpFreeParseContext((PPRIVILEGE_SET)v11);
  if ( v14 )
    CmpReleaseShutdownRundown(v13);
  return (unsigned int)v20;
}
