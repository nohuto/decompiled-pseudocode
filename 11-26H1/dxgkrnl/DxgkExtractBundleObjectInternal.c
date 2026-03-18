/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1401EAE74
 * Callers:
 *     DxgkExtractBundleObject @ 0x1401EADF0 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401FC540 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, _OWORD *a4)
{
  char v6; // r12
  char v7; // r13
  int v8; // edi
  NTSTATUS v9; // eax
  __int128 *v10; // r14
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // r12
  __int64 v16; // rcx
  unsigned int v17; // eax
  struct _KPROCESS *v18; // r13
  unsigned int j; // r13d
  DWORD v20; // r9d
  int v21; // eax
  __int64 ObjectType; // rax
  void *v23; // rcx
  NTSTATUS inserted; // eax
  unsigned int i; // r15d
  HANDLE v26; // rcx
  __int64 v27; // rcx
  char v28; // [rsp+50h] [rbp-1C8h]
  char v29; // [rsp+52h] [rbp-1C6h]
  int v30; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-1B8h]
  char v32; // [rsp+68h] [rbp-1B0h]
  DWORD AccessMask; // [rsp+70h] [rbp-1A8h] BYREF
  PRKPROCESS PROCESS; // [rsp+78h] [rbp-1A0h]
  HANDLE Handle[2]; // [rsp+80h] [rbp-198h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-188h]
  __int128 v37; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-168h]
  PVOID Object; // [rsp+B8h] [rbp-160h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp-158h] BYREF
  char *v41; // [rsp+C8h] [rbp-150h]
  HANDLE *v42; // [rsp+D0h] [rbp-148h]
  __int64 v43; // [rsp+D8h] [rbp-140h]
  PVOID v44; // [rsp+E0h] [rbp-138h]
  struct _KPROCESS *v45; // [rsp+E8h] [rbp-130h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-128h] BYREF
  _DWORD v47[16]; // [rsp+120h] [rbp-F8h] BYREF
  HANDLE v48[16]; // [rsp+160h] [rbp-B8h] BYREF

  PROCESS = a3;
  v6 = a1;
  v29 = a1;
  v45 = a3;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2158);
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)Src = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v7 = 0;
  v28 = 0;
  if ( v6 == 1 )
  {
    RtlCopyFromUser(Handle, a4, 0x38uLL);
  }
  else
  {
    *(_OWORD *)Handle = *a4;
    *(_OWORD *)Src = a4[1];
    v37 = a4[2];
    v38 = *((_QWORD *)a4 + 6);
  }
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 2622;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v8 = -1073741811;
      WdLogSingleEntry3(3LL, Src[0], Src[1], -1073741811LL);
      WdLogGlobalForLineNumber = 2636;
      goto LABEL_27;
    }
    v7 = 1;
    v28 = 1;
  }
  memset(v47, 0, sizeof(v47));
  if ( !v7 && Src[0] )
  {
    if ( v6 == 1 )
      RtlCopyFromUser(v47, Src[0], 4LL * LODWORD(Handle[1]));
    else
      memmove(v47, Src[0], 4LL * LODWORD(Handle[1]));
  }
  memset(v48, 0, sizeof(v48));
  HandleInformation = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, a2, &Object, &HandleInformation);
  v8 = v9;
  v10 = (__int128 *)Object;
  v44 = Object;
  if ( v9 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 2688;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225508LL;
  }
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v9);
    WdLogGlobalForLineNumber = 2695;
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v8;
  }
  if ( !*((_BYTE *)Object + 243) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2702;
    ObfDereferenceObject(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return (unsigned int)-1073741811;
  }
  v41 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  v15 = 0;
  v16 = *((unsigned int *)v10 + 6);
  if ( v7 )
  {
    v17 = *((_DWORD *)v10 + 6);
    LODWORD(Handle[1]) = v17;
  }
  else
  {
    v17 = (unsigned int)Handle[1];
    if ( LODWORD(Handle[1]) != (_DWORD)v16 )
    {
      v8 = -1073741811;
      WdLogSingleEntry4(3LL, LODWORD(Handle[1]), *((unsigned int *)v10 + 6), Handle[0], -1073741811LL);
      WdLogGlobalForLineNumber = 2730;
      goto LABEL_74;
    }
  }
  if ( !v7 )
  {
    if ( *((_BYTE *)v10 + 241) && !*((_BYTE *)v10 + 240) )
    {
      v8 = -1073741811;
      WdLogSingleEntry2(3LL, Handle[0], -1073741811LL);
      WdLogGlobalForLineNumber = 2743;
LABEL_74:
      if ( v48[0] )
      {
        if ( v15 )
          KeStackAttachProcess(PROCESS, &ApcState);
        for ( i = 0; i < *((_DWORD *)v10 + 6); v48[i++] = 0LL )
        {
          v26 = v48[i];
          if ( !v26 )
            break;
          ObCloseHandle(v26, 1);
        }
        if ( v15 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v41, 0LL);
      ObfDereferenceObject(v10);
      goto LABEL_27;
    }
    if ( !Src[0] )
      memmove(v47, v10 + 10, 4LL * *((unsigned int *)v10 + 6));
    v18 = PROCESS;
    if ( PROCESS && v18 != (struct _KPROCESS *)PsGetCurrentProcess(v16) )
    {
      KeStackAttachProcess(v18, &ApcState);
      v15 = 1;
    }
    for ( j = 0; j < *((_DWORD *)v10 + 6); ++j )
    {
      v43 = j;
      v20 = v47[j];
      AccessMask = v20;
      v21 = *((_DWORD *)v10 + 5);
      if ( _bittest(&v21, j) )
      {
        if ( (v20 & 0xF0000000) != 0 )
        {
          ObjectType = ObGetObjectType(*((_QWORD *)v10 + j + 4));
          RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
          v20 = AccessMask;
        }
        v20 &= HandleInformation.GrantedAccess;
        AccessMask = v20;
      }
      v42 = &v48[j];
      v23 = (void *)*((_QWORD *)v10 + j + 4);
      if ( *((_BYTE *)v10 + 242) )
      {
        inserted = ObOpenObjectByPointer(v23, 0, 0LL, v20, 0LL, 0, &v48[j]);
      }
      else
      {
        ObfReferenceObject(v23);
        inserted = ObInsertObject(*((PVOID *)v10 + j + 4), 0LL, AccessMask, 0, 0LL, &v48[j]);
      }
      v8 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry3(3LL, *((_QWORD *)v10 + v43 + 4), *((unsigned __int8 *)v10 + 242), inserted);
        WdLogGlobalForLineNumber = 2833;
        break;
      }
      if ( ObIsKernelHandle(*v42) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2839;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"false == ObIsKernelHandle(hNtHandles[i])",
          2839LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    if ( v15 )
      KeUnstackDetachProcess(&ApcState);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2851;
      goto LABEL_74;
    }
    *(_WORD *)((char *)v10 + 241) = 257;
    v17 = (unsigned int)Handle[1];
    v7 = v28;
  }
  v37 = *v10;
  v38 = *((_QWORD *)v10 + 2);
  if ( v29 == 1 )
  {
    if ( v7 )
      RtlWriteULongToUser((_DWORD *)a4 + 2, v17);
    else
      RtlCopyToUser(Src[1], v48, 8LL * v17);
    RtlCopyToUser(a4 + 2, &v37, 0x18uLL);
  }
  else if ( !v7 )
  {
    memmove(Src[1], v48, 8LL * v17);
  }
  ExReleasePushLockExclusiveEx(v41, 0LL);
  ObfDereferenceObject(v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
  return 0LL;
}
