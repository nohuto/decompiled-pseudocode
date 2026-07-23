/*
 * XREFs of VrpPreLoadKey @ 0x140B1D3C8
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x140469E00 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140939D04 (VrpAddNamespaceNodeToList.c)
 *     VrpUnlockJobContextExclusive @ 0x14093A7B4 (VrpUnlockJobContextExclusive.c)
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 *     VrpStripTrailingCharacters @ 0x14093AB70 (VrpStripTrailingCharacters.c)
 *     VrpLockJobContextExclusive @ 0x14093AD04 (VrpLockJobContextExclusive.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14093ADA8 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     VrpAllocateKeyContext @ 0x140A4B8E4 (VrpAllocateKeyContext.c)
 *     CmSetCallbackObjectContext @ 0x140A4C490 (CmSetCallbackObjectContext.c)
 *     VrpFreeKeyContext @ 0x140A853F8 (VrpFreeKeyContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPreLoadKey(__int64 *a1, GUID *a2)
{
  __int64 v3; // r15
  const UNICODE_STRING *v4; // rdi
  const UNICODE_STRING *v5; // rdx
  unsigned __int16 v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  int NamespaceNodePlaceholderKey; // edi
  int v14; // r15d
  PGUID v15; // r14
  const wchar_t *v17; // rax
  unsigned __int16 v18; // cx
  const UNICODE_STRING *v19; // r12
  int v20; // r10d
  unsigned __int16 Length; // si
  wchar_t *Buffer; // rcx
  PGUID v23; // r12
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 v27; // r14
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  NTSTATUS v32; // eax
  PVOID v33; // r14
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING *v35; // rdi
  NTSTATUS v36; // eax
  KPROCESSOR_MODE v37; // di
  const wchar_t *v38; // rax
  unsigned __int16 v39; // dx
  const wchar_t *v40; // rax
  unsigned __int16 v41; // dx
  KPROCESSOR_MODE AccessMode; // [rsp+70h] [rbp-238h]
  char v43; // [rsp+78h] [rbp-230h]
  int v44; // [rsp+7Ch] [rbp-22Ch] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-228h] BYREF
  PGUID Guid; // [rsp+90h] [rbp-218h]
  PVOID v47[2]; // [rsp+98h] [rbp-210h] BYREF
  PVOID v48; // [rsp+A8h] [rbp-200h] BYREF
  UNICODE_STRING String1; // [rsp+B0h] [rbp-1F8h] BYREF
  UNICODE_STRING GuidString; // [rsp+C0h] [rbp-1E8h] BYREF
  HANDLE v51; // [rsp+D8h] [rbp-1D0h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-1C8h] BYREF
  PVOID v53; // [rsp+E8h] [rbp-1C0h]
  HANDLE Handle; // [rsp+F0h] [rbp-1B8h] BYREF
  HANDLE v55; // [rsp+F8h] [rbp-1B0h] BYREF
  HANDLE v56; // [rsp+100h] [rbp-1A8h] BYREF
  HANDLE v57; // [rsp+108h] [rbp-1A0h] BYREF
  HANDLE v58; // [rsp+110h] [rbp-198h] BYREF
  UNICODE_STRING Source; // [rsp+118h] [rbp-190h] BYREF
  PVOID Object; // [rsp+128h] [rbp-180h]
  GUID *v61; // [rsp+130h] [rbp-178h]
  __int128 v62; // [rsp+138h] [rbp-170h] BYREF
  __int128 v63; // [rsp+148h] [rbp-160h]
  __int128 v64; // [rsp+158h] [rbp-150h]
  __int128 Src; // [rsp+168h] [rbp-140h] BYREF
  __int128 v66; // [rsp+178h] [rbp-130h]
  __int128 v67; // [rsp+188h] [rbp-120h]
  GUID v68; // [rsp+198h] [rbp-110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69[2]; // [rsp+1B0h] [rbp-F8h] BYREF
  int *v70; // [rsp+1D0h] [rbp-D8h]
  __int64 v71; // [rsp+1D8h] [rbp-D0h]
  const wchar_t *v72; // [rsp+1E0h] [rbp-C8h]
  int v73; // [rsp+1E8h] [rbp-C0h] BYREF
  int v74; // [rsp+1ECh] [rbp-BCh]
  _DWORD *v75; // [rsp+1F0h] [rbp-B8h]
  __int64 v76; // [rsp+1F8h] [rbp-B0h]
  const wchar_t *v77; // [rsp+200h] [rbp-A8h]
  _DWORD v78[2]; // [rsp+208h] [rbp-A0h] BYREF
  int *v79; // [rsp+210h] [rbp-98h]
  __int64 v80; // [rsp+218h] [rbp-90h]
  char v81; // [rsp+220h] [rbp-88h] BYREF

  Guid = a2;
  v48 = a1;
  v61 = a2;
  *(_OWORD *)P = 0LL;
  *(_QWORD *)&GuidString.Length = 5111808LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  *(_OWORD *)v47 = 0LL;
  Src = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  Source = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  v68 = 0LL;
  EtwActivityIdControl(3u, &v68);
  v3 = *a1;
  GuidString.Buffer = (wchar_t *)&v81;
  v43 = 0;
  v4 = *(const UNICODE_STRING **)(v3 + 72);
  v52 = 0LL;
  AccessMode = ExGetPreviousMode();
  Handle = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  Object = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v5 = *(const UNICODE_STRING **)(v3 + 8);
  if ( v4 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v4 + 1, v5, (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_27;
    v43 = 1;
  }
  else
  {
    *(UNICODE_STRING *)P = *v5;
  }
  if ( (unsigned int)dword_140E0A5C0 > 5 )
  {
    v17 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v18 = (unsigned __int16)P[0];
    }
    else
    {
      v18 = 0;
      v17 = &cchOriginalDestLength;
    }
    v70 = &v73;
    v71 = 2LL;
    v72 = v17;
    v73 = v18;
    v74 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A5C0, (unsigned __int8 *)&word_14005B79E, &v68, 0LL, 4u, v69);
  }
  v6 = 0;
  String1.Length = 0;
  v7 = 0LL;
  v8 = LOWORD(P[0]);
  if ( LOWORD(P[0]) )
  {
    v9 = 0LL;
    do
    {
      if ( *(_WORD *)((char *)P[1] + v9) != 92 )
        break;
      ++v7;
      v9 = 2 * v7;
    }
    while ( 2 * v7 < (unsigned __int64)LOWORD(P[0]) );
  }
  v10 = 2 * v7;
  String1.Buffer = (wchar_t *)((char *)P[1] + 2 * v7);
  if ( 2 * v7 < (unsigned __int64)LOWORD(P[0]) )
  {
    do
    {
      if ( *(_WORD *)((char *)P[1] + v10) == 92 )
        break;
      v6 += 2;
      ++v7;
      v10 = 2 * v7;
    }
    while ( 2 * v7 < (unsigned __int64)LOWORD(P[0]) );
    String1.Length = v6;
  }
  while ( 2 * v7 < (unsigned __int64)LOWORD(P[0]) && *((_WORD *)P[1] + v7) == 92 )
    ++v7;
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_66:
    NamespaceNodePlaceholderKey = -1073741790;
LABEL_73:
    v14 = 0;
    goto LABEL_56;
  }
  v11 = 0;
  String1.Length = 0;
  while ( 2 * v7 < v8 && *((_WORD *)P[1] + v7) == 92 )
    ++v7;
  v12 = 2 * v7;
  String1.Buffer = (wchar_t *)((char *)P[1] + 2 * v7);
  if ( 2 * v7 < v8 )
  {
    do
    {
      if ( *(_WORD *)((char *)P[1] + v12) == 92 )
        break;
      v11 += 2;
      ++v7;
      v12 = 2 * v7;
    }
    while ( 2 * v7 < v8 );
    String1.Length = v11;
  }
  while ( 2 * v7 < v8 && *((_WORD *)P[1] + v7) == 92 )
    ++v7;
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
LABEL_27:
    v14 = 0;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v3 + 24) & 0x10) != 0 )
  {
    NamespaceNodePlaceholderKey = 0;
    v14 = 0;
    goto LABEL_29;
  }
  v19 = &VrpMachineString;
  if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
  {
    v19 = &VrpUserString;
    if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
      goto LABEL_66;
  }
  Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v7);
  Source.Length = LOWORD(P[0]) - 2 * v7;
  Source.MaximumLength = Source.Length;
  VrpStripTrailingCharacters(&Source.Length);
  v20 = 0;
  Length = Source.Length;
  Buffer = Source.Buffer;
  while ( 2LL * v20 < (unsigned __int64)Source.Length )
  {
    if ( *Buffer == 92 )
      goto LABEL_66;
    ++v20;
    ++Buffer;
  }
  NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(Guid, &GuidString, 0);
  if ( NamespaceNodePlaceholderKey < 0 )
    goto LABEL_27;
  ++GuidString.Buffer;
  GuidString.Length -= 4;
  GuidString.MaximumLength -= 4;
  WORD1(v47[0]) = GuidString.Length + 40 + v19->Length + Length;
  v47[1] = (PVOID)ExAllocatePool2(0x100uLL);
  if ( !v47[1] )
  {
    NamespaceNodePlaceholderKey = -1073741670;
    goto LABEL_73;
  }
  RtlAppendUnicodeStringToString((PUNICODE_STRING)v47, &VrpRootHivePath);
  RtlAppendUnicodeToString((PUNICODE_STRING)v47, L"\\Silo_");
  RtlAppendUnicodeStringToString((PUNICODE_STRING)v47, &GuidString);
  RtlAppendUnicodeToString((PUNICODE_STRING)v47, L"_");
  RtlAppendUnicodeStringToString((PUNICODE_STRING)v47, v19);
  RtlAppendUnicodeToString((PUNICODE_STRING)v47, L"_");
  RtlAppendUnicodeStringToString((PUNICODE_STRING)v47, &Source);
  v23 = Guid;
  VrpLockJobContextExclusive((__int64)Guid, v24, v25, v26);
  v44 = 1;
  NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                  (__int64)v23,
                                  (const void **)P,
                                  0LL,
                                  (const void **)v47,
                                  0x80000000,
                                  -1,
                                  &v52);
  if ( NamespaceNodePlaceholderKey < 0 )
  {
    v14 = 1;
  }
  else
  {
    v27 = v52;
    NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((__int64)v23, v52);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_116;
    NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v27);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_116;
    LODWORD(v62) = 48;
    *((_QWORD *)&v62 + 1) = 0LL;
    DWORD2(v63) = 576;
    *(_QWORD *)&v63 = *(_QWORD *)(v3 + 16);
    v64 = 0LL;
    LODWORD(Src) = 48;
    *((_QWORD *)&Src + 1) = 0LL;
    DWORD2(v66) = 576;
    *(_QWORD *)&v66 = v47;
    v67 = 0LL;
    v28 = *(void **)(v3 + 32);
    if ( v28 )
    {
      NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                      v28,
                                      0x200u,
                                      0LL,
                                      0,
                                      (POBJECT_TYPE)CmKeyObjectType,
                                      0,
                                      &Handle);
      if ( NamespaceNodePlaceholderKey < 0 )
        goto LABEL_116;
    }
    if ( (v29 = *(void **)(v3 + 40)) != 0LL
      && (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                          v29,
                                          0x200u,
                                          0LL,
                                          2u,
                                          (POBJECT_TYPE)ExEventObjectType,
                                          0,
                                          &v55),
          NamespaceNodePlaceholderKey < 0)
      || (v30 = (void *)*((_QWORD *)v48 + 1)) != 0LL
      && (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                          v30,
                                          0x200u,
                                          0LL,
                                          0,
                                          (POBJECT_TYPE)CmKeyObjectType,
                                          0,
                                          &v56),
          NamespaceNodePlaceholderKey < 0)
      || *(_QWORD *)(v3 + 80) == 2LL
      && (v31 = *(void **)(v3 + 88)) != 0LL
      && (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                          v31,
                                          0x200u,
                                          0LL,
                                          0,
                                          (POBJECT_TYPE)SeTokenObjectType,
                                          0,
                                          &v57),
          NamespaceNodePlaceholderKey < 0)
      || (NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                          &Src,
                                          &v62,
                                          *(_DWORD *)(v3 + 24),
                                          0LL,
                                          (__int64)Handle,
                                          v55,
                                          *(_DWORD *)(v3 + 48),
                                          (HANDLE *)((unsigned __int64)&v58 & -(__int64)(*(_QWORD *)(v3 + 56) != 0LL)),
                                          0,
                                          (__int64)v56,
                                          *((_BYTE *)v48 + 16),
                                          v57,
                                          0),
          NamespaceNodePlaceholderKey < 0) )
    {
LABEL_116:
      v14 = 1;
    }
    else
    {
      if ( *(_QWORD *)(v3 + 56) )
      {
        if ( v58
          && (v48 = 0LL,
              v32 = ObReferenceObjectByHandle(v58, *(_DWORD *)(v3 + 48), (POBJECT_TYPE)CmKeyObjectType, 0, &v48, 0LL),
              v33 = v48,
              Object = v48,
              v32 >= 0)
          && (KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(v23), v35 = KeyContext, (v53 = KeyContext) != 0LL)
          && (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
        {
          *(_DWORD *)(&v35[2].MaximumLength + 1) = 0x20000000;
          v36 = CmSetCallbackObjectContext(v33, (PLARGE_INTEGER)&gLoadedDiffHivesLock.InitialStack, v35, 0LL);
          v37 = AccessMode;
          if ( v36 >= 0 )
          {
            v53 = 0LL;
            ObOpenObjectByPointer(
              v33,
              AccessMode != 0 ? 64 : 576,
              0LL,
              *(_DWORD *)(v3 + 48),
              (POBJECT_TYPE)CmKeyObjectType,
              AccessMode,
              &v51);
          }
        }
        else
        {
          v37 = AccessMode;
        }
        if ( v37 )
          RtlWriteULong64ToUser(*(_QWORD **)(v3 + 56), (__int64)v51);
        else
          **(_QWORD **)(v3 + 56) = v51;
        v14 = 1;
      }
      else
      {
        v14 = 1;
      }
      NamespaceNodePlaceholderKey = -1073740541;
      if ( (unsigned int)dword_140E0A5C0 > 5 )
      {
        v38 = (const wchar_t *)P[1];
        if ( P[1] )
        {
          v39 = (unsigned __int16)P[0];
        }
        else
        {
          v39 = 0;
          v38 = &cchOriginalDestLength;
        }
        v70 = &v73;
        v71 = 2LL;
        v72 = v38;
        v73 = v39;
        v74 = 0;
        v40 = (const wchar_t *)v47[1];
        if ( v47[1] )
        {
          v41 = (unsigned __int16)v47[0];
        }
        else
        {
          v41 = 0;
          v40 = &cchOriginalDestLength;
        }
        v75 = v78;
        v76 = 2LL;
        v77 = v40;
        v78[0] = v41;
        v78[1] = 0;
        v44 = -1073740541;
        v79 = &v44;
        v80 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E0A5C0,
          (unsigned __int8 *)&word_14005B986,
          &v68,
          0LL,
          7u,
          v69);
      }
    }
  }
LABEL_28:
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
    goto LABEL_29;
LABEL_56:
  if ( !v52 )
  {
LABEL_29:
    v15 = Guid;
    goto LABEL_30;
  }
  v15 = Guid;
  VrpDestroyNamespaceNode((size_t *)&Guid->Data1, v52);
LABEL_30:
  if ( v14 )
    VrpUnlockJobContextExclusive((__int64)v15);
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && (unsigned int)dword_140E0A5C0 > 2 )
  {
    v44 = NamespaceNodePlaceholderKey;
    v70 = &v44;
    v71 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A5C0, (unsigned __int8 *)&word_14005BABE, &v68, 0LL, 3u, v69);
  }
  if ( v53 )
    VrpFreeKeyContext((PVOID *)v53);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v55 )
    ObCloseHandle(v55, 0);
  if ( v56 )
    ObCloseHandle(v56, 0);
  if ( v57 )
    ObCloseHandle(v57, 0);
  if ( v58 )
    ObCloseHandle(v58, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v43 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( v47[1] )
    ExFreePoolWithTag(v47[1], 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
