/*
 * XREFs of PiUEventHandleRegistration @ 0x1409A80E0
 * Callers:
 *     PiUEventHandleIoctl @ 0x1409A7840 (PiUEventHandleIoctl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x1404AE434 (PiUEventHashStringIntoBucket.c)
 *     PiUEventHashGuidIntoBucket @ 0x1404C2B68 (PiUEventHashGuidIntoBucket.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1409A7178 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409A8564 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409A8FAC (PiUEventFreeClientRegistrationContext.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1409AA1E0 (PiDmLookupObject.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char **inited; // rsi
  __int64 v8; // rcx
  _WORD *v9; // rax
  signed int Object; // edi
  int v11; // eax
  int v12; // ecx
  void **v13; // rbx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int8 *v18; // r15
  int v19; // ecx
  unsigned int v20; // eax
  char *v21; // rdx
  char **v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  bool v25; // zf
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // eax
  char *v29; // rcx
  char **v30; // rax
  _WORD *v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // eax
  char *v35; // rcx
  char **v36; // rax
  char *v37; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v39; // [rsp+68h] [rbp+10h] BYREF

  v39 = 0LL;
  v37 = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    Object = -1073741811;
LABEL_58:
    inited = 0LL;
    goto LABEL_59;
  }
  inited = (char **)PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    Object = -1073741670;
    goto LABEL_58;
  }
  inited[6] = (char *)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v8 = 260LL;
  v9 = (_WORD *)a2;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  Object = v8 == 0 ? 0xC000000D : 0;
  if ( !v8 )
    goto LABEL_39;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_39;
  v11 = *(_DWORD *)(a2 + 528);
  if ( v11 >= 4 )
    goto LABEL_39;
  v12 = *(_DWORD *)(a2 + 524);
  if ( (v12 & 0xFFFFFFFC) != 0 || (v12 & 1) != 0 && v11 )
    goto LABEL_39;
  if ( (v12 & 2) != 0 )
  {
    if ( v11 == 3 )
      goto LABEL_66;
    if ( v11 != 2 )
      goto LABEL_39;
    goto LABEL_60;
  }
  if ( v11 == 1 )
  {
    v24 = *(_QWORD *)(a2 + 536);
    if ( !v24 )
      goto LABEL_39;
    v25 = v24 == -1;
    goto LABEL_38;
  }
  if ( v11 == 2 )
  {
LABEL_60:
    v32 = (_WORD *)(a2 + 536);
    if ( a2 == -536 )
      goto LABEL_39;
    v33 = 200LL;
    do
    {
      if ( !*v32 )
        break;
      ++v32;
      --v33;
    }
    while ( v33 );
    Object = v33 == 0 ? 0xC000000D : 0;
    v25 = v33 == 0;
LABEL_38:
    if ( v25 )
      goto LABEL_39;
    goto LABEL_17;
  }
  if ( v11 != 3 )
  {
LABEL_17:
    v13 = (void **)(a2 + 536);
    goto LABEL_18;
  }
LABEL_66:
  v13 = (void **)(a2 + 536);
  Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, pcchLength);
  if ( Object < 0 )
    goto LABEL_39;
LABEL_18:
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v14 = *(_DWORD *)(a2 + 528);
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v13, &v39, &v37) >= 0 )
      {
        Object = 0;
        v16 = *(_QWORD *)(v39 + 8);
        PiDmObjectManagerAcquireSharedLock(&PiDmDeviceManager);
        v17 = PiDmLookupObject(&PiDmDeviceManager, v16);
        inited[3] = (char *)v17;
        if ( v17 )
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        else
          Object = -1073741772;
        PiDmObjectManagerReleaseLock(&PiDmDeviceManager);
        if ( Object < 0 )
          goto LABEL_57;
        inited[4] = v37;
        *((_BYTE *)inited + 40) = 0;
LABEL_25:
        v18 = (unsigned __int8 *)(a2 + 536);
        goto LABEL_28;
      }
LABEL_39:
      Object = -1073741811;
LABEL_57:
      PiUEventFreeClientRegistrationContext(inited);
      goto LABEL_58;
    }
    v26 = v15 - 1;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_39;
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        v13 = (void **)(a2 + 536);
        Object = PiDmGetObject(1, (unsigned __int16 *)(a2 + 536), inited + 3);
        if ( Object < 0 )
          goto LABEL_57;
      }
      v18 = (unsigned __int8 *)v13;
    }
    else
    {
      v18 = (unsigned __int8 *)v13;
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        Object = PiDmGetObject(1, (unsigned __int16 *)v13, inited + 3);
        if ( Object < 0 )
          goto LABEL_57;
        goto LABEL_25;
      }
    }
  }
  else
  {
    v18 = (unsigned __int8 *)v13;
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)(inited + 3) = *(_OWORD *)v13;
  }
LABEL_28:
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v19 = *(_DWORD *)(a2 + 528);
  if ( !v19 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v20 = 13;
    else
      v20 = PiUEventHashGuidIntoBucket(v18);
    v21 = (char *)&PiUEventDevInterfaceClientList + 16 * v20;
    v22 = (char **)*((_QWORD *)v21 + 1);
    if ( *v22 != v21 )
      goto LABEL_32;
    ++PiUEventDevInterfaceClientCount;
    goto LABEL_55;
  }
  v23 = v19 - 1;
  if ( !v23 )
  {
    v21 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*((wchar_t **)inited[3] + 2));
    v22 = (char **)*((_QWORD *)v21 + 1);
    if ( *v22 != v21 )
      goto LABEL_32;
    ++PiUEventDevHandleClientCount;
LABEL_55:
    *inited = v21;
    inited[1] = (char *)v22;
    *v22 = (char *)inited;
    *((_QWORD *)v21 + 1) = inited;
    goto LABEL_56;
  }
  v27 = v23 - 1;
  if ( !v27 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v28 = 13;
    else
      v28 = PiUEventHashStringIntoBucket((wchar_t *)v18);
    v29 = (char *)&PiUEventDevInstanceClientList + 16 * v28;
    v30 = (char **)*((_QWORD *)v29 + 1);
    if ( *v30 == v29 )
    {
      ++PiUEventDevInstanceClientCount;
      *inited = v29;
      inited[1] = (char *)v30;
      *v30 = (char *)inited;
      *((_QWORD *)v29 + 1) = inited;
      goto LABEL_56;
    }
LABEL_32:
    __fastfail(3u);
  }
  if ( v27 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v34 = 13;
    else
      v34 = PiUEventHashStringIntoBucket((wchar_t *)(a2 + 536));
    v35 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v34;
    v36 = (char **)*((_QWORD *)v35 + 1);
    if ( *v36 != v35 )
      goto LABEL_32;
    ++PiUEventDevInstancePropertyClientCount;
    *inited = v35;
    inited[1] = (char *)v36;
    *v36 = (char *)inited;
    *((_QWORD *)v35 + 1) = inited;
  }
  else
  {
    Object = -1073741811;
  }
LABEL_56:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( Object < 0 )
    goto LABEL_57;
LABEL_59:
  *(_QWORD *)(a1 + 32) = inited;
  return (unsigned int)Object;
}
