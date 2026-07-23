/*
 * XREFs of ObCreateObjectTypeEx @ 0x140A67030
 * Callers:
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     AlpcpInitSystem @ 0x1407C3E88 (AlpcpInitSystem.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x1407F29C8 (TtmiInitQueues.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x140832FF0 (EtwpInitializePrivateSessionDemuxObject.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1408622BC (CmpInitializeLightWeightTransactionType.c)
 *     VRegSetup @ 0x1408AB680 (VRegSetup.c)
 *     IoCreateObjectTypes @ 0x140CC0930 (IoCreateObjectTypes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpInitObjectTypeSD @ 0x1407C6FF4 (ObpInitObjectTypeSD.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     RtlUnicodeToMultiByteSize @ 0x14097CA40 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF1C8 (ObpLockDirectoryExclusive.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 *     ObpInsertDirectoryEntry @ 0x140A8F820 (ObpInsertDirectoryEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(PCUNICODE_STRING SourceString, _DWORD *Src, void *a3, __int16 *a4, _QWORD *a5)
{
  char v5; // bl
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned int Length; // ecx
  char v11; // al
  int v12; // eax
  wchar_t *Buffer; // rdx
  unsigned int v14; // ecx
  __int16 v16; // ax
  unsigned int v18; // edi
  _BYTE *v19; // rbx
  UNICODE_STRING v20; // xmm6
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int inited; // esi
  char *v29; // rax
  _QWORD *v30; // rbx
  bool v31; // zf
  int v32; // r15d
  ULONG v33; // r8d
  wchar_t *v34; // rdx
  char v35; // r13
  void *Pool2; // rax
  char *v37; // r8
  unsigned int v38; // ecx
  unsigned int MaximumLength; // r9d
  char *v40; // rdx
  size_t v41; // r13
  __int64 v42; // r8
  struct _KLOCK_ENTRIES *v43; // r9
  __int64 v44; // rdx
  int v45; // ecx
  __int16 *v46; // rcx
  char *v47; // rax
  __int64 v48; // rdx
  char **v49; // r8
  __int64 v50; // rdx
  unsigned int v51; // eax
  unsigned __int8 v52; // al
  __int64 v53; // rsi
  size_t DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-A0h]
  char *v57[4]; // [rsp+70h] [rbp-98h] BYREF
  __int16 *v58; // [rsp+90h] [rbp-78h]
  _STRING v59; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v62; // [rsp+C8h] [rbp-40h]
  __int128 v63; // [rsp+D8h] [rbp-30h]
  __int64 v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  _BYTE v66[16]; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v67; // [rsp+108h] [rbp+0h]
  char v68; // [rsp+120h] [rbp+18h]
  __int128 v69; // [rsp+138h] [rbp+30h]
  __int128 v70; // [rsp+148h] [rbp+40h]
  __int128 v71; // [rsp+158h] [rbp+50h]
  __int128 v72; // [rsp+168h] [rbp+60h]
  __int128 v73; // [rsp+178h] [rbp+70h]
  __int128 v74; // [rsp+188h] [rbp+80h]
  __int128 v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A8h] [rbp+A0h]
  int v77; // [rsp+1B8h] [rbp+B0h]

  v5 = (char)a4;
  v58 = a4;
  v60 = a5;
  memset_0(v66, 0, 0xE0uLL);
  memset(v57, 0, sizeof(v57));
  v64 = 0LL;
  v65 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  DestinationString_8 = 0LL;
  if ( !SourceString
    || (Length = SourceString->Length, !(_WORD)Length)
    || (Length & 1) != 0
    || !Src
    || (Src[2] & 0xFFFEE00D) != 0
    || *(_WORD *)Src < 0x78u
    || *((_BYTE *)Src + 3) >= 8u
    || (v11 = *((_BYTE *)Src + 2), (v11 & 0x10) != 0) && !*((_QWORD *)Src + 7) && !*((_QWORD *)Src + 8)
    || (v11 & 4) == 0 && (v12 = Src[9]) != 0 && v12 != 512 && (v5 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  Buffer = SourceString->Buffer;
  LODWORD(v56) = Src[9];
  v14 = Length >> 1;
  while ( v14-- )
  {
    v16 = *Buffer++;
    if ( v16 == 92 )
      return 3221225523LL;
  }
  if ( ObpTypeDirectoryObject )
  {
    ObpLockDirectoryExclusive((__int64)&v57[1], (__int64)ObpTypeDirectoryObject, 4LL, v9);
    if ( ObpLookupDirectoryEntry(&SourceString->Length, 64, (__int64)&v57[1]) )
    {
      v18 = -1073741771;
LABEL_24:
      ObpReleaseLookupContext((__int64)&v57[1]);
      return v18;
    }
  }
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !DestinationString_8.Buffer )
  {
    v18 = -1073741670;
    goto LABEL_24;
  }
  DestinationString_8.MaximumLength = SourceString->MaximumLength;
  RtlCopyUnicodeString(&DestinationString_8, SourceString);
  v19 = *(_BYTE **)&ObpStackTraceLock.PriorityFloorSummary;
  v20 = DestinationString_8;
  if ( !*(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary )
  {
    v21 = *(_OWORD *)Src;
    v68 = 2;
    v19 = v66;
    v22 = *((_OWORD *)Src + 1);
    v77 = 1416258127;
    v69 = v21;
    v23 = *((_OWORD *)Src + 2);
    v70 = v22;
    v24 = *((_OWORD *)Src + 3);
    v71 = v23;
    v25 = *((_OWORD *)Src + 4);
    v72 = v24;
    v26 = *((_OWORD *)Src + 5);
    v73 = v25;
    v27 = *((_OWORD *)Src + 6);
    v74 = v26;
    *(_QWORD *)&v26 = *((_QWORD *)Src + 14);
    v75 = v27;
    v76 = v26;
    v67 = DestinationString_8;
  }
  memset_0(&v61, 0, 0x40uLL);
  LODWORD(v61) = 16;
  *(_QWORD *)((char *)&v62 + 4) = *((_QWORD *)v19 + 13);
  HIDWORD(v62) = 2048;
  inited = ObpAllocateObject(&v61, 0, (__int64)v19, (__int128 *)&DestinationString_8, 224, v57, 0LL);
  if ( inited < 0 )
  {
    ObpReleaseLookupContext((__int64)&v57[1]);
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
    return (unsigned int)inited;
  }
  v29 = v57[0];
  *((_QWORD *)v57[0] + 4) = 0LL;
  v30 = v29 + 48;
  v31 = (_DWORD)InitializationPhase == 0;
  *((UNICODE_STRING *)v29 + 4) = v20;
  if ( !v31 )
  {
    inited = ObpInitObjectTypeSD((__int64)(v29 + 48), a3);
    if ( inited < 0 )
    {
      ObpReleaseLookupContext((__int64)&v57[1]);
      ObfDereferenceObject(v30);
      return (unsigned int)inited;
    }
  }
  *(_OWORD *)((char *)v30 + 44) = 0LL;
  *((_DWORD *)v30 + 15) = 0;
  v32 = 3;
  if ( *(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary )
  {
    v33 = SourceString->Length;
    v34 = SourceString->Buffer;
    v35 = 1;
    LODWORD(DestinationString) = 0;
    RtlUnicodeToMultiByteSize((PULONG)&DestinationString, v34, v33);
    DestinationString = (unsigned __int16)(((DestinationString + 3) & 0xFFFC) + 1);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)&DestinationString_8.Length = Pool2;
    if ( !Pool2 )
      goto LABEL_45;
    memset_0(Pool2, 0, DestinationString);
    *(_QWORD *)&v59.Length = 0LL;
    v59.MaximumLength = DestinationString;
    v59.Buffer = *(char **)&DestinationString_8.Length;
    if ( RtlUnicodeStringToAnsiString(&v59, SourceString, 0) >= 0 )
    {
      v37 = v59.Buffer;
      v38 = SourceString->Length >> 1;
      if ( v38 < 4 )
      {
        MaximumLength = v59.MaximumLength;
        v40 = &v59.Buffer[v38];
        do
        {
          if ( v38 < MaximumLength )
            *v40 = 32;
          ++v38;
          ++v40;
        }
        while ( v38 < 4 );
      }
      v35 = 0;
      *((_DWORD *)v30 + 48) = *(_DWORD *)v37;
    }
    ExFreePoolWithTag(*(PVOID *)&DestinationString_8.Length, 0);
    if ( v35 )
    {
LABEL_45:
      if ( SourceString->Length < 4u )
        *((_DWORD *)v30 + 48) = 1063936591;
      else
        *((_DWORD *)v30 + 48) = *(_DWORD *)SourceString->Buffer;
    }
  }
  else
  {
    *(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary = v30;
    *((_DWORD *)v30 + 11) = 1;
    *((_DWORD *)v30 + 48) = 1416258127;
  }
  v41 = 120LL;
  memset_0(v30 + 8, 0, 0x78uLL);
  if ( *(_WORD *)Src <= 0x78u )
    v41 = *(unsigned __int16 *)Src;
  memmove(v30 + 8, Src, v41);
  if ( *(_WORD *)Src >= 0x80u )
  {
    *((_DWORD *)v30 + 54) = Src[30];
    *((_DWORD *)v30 + 55) = Src[31];
  }
  v44 = (unsigned int)v56;
  *((_DWORD *)v30 + 25) = v56;
  if ( (NtGlobalFlag & 0x4000) != 0 )
    *((_BYTE *)v30 + 66) |= 0x20u;
  v45 = (*((_BYTE *)Src + 2) & 0x10) != 0 ? 104 : 88;
  if ( (v44 & 1) != 0 )
    *((_DWORD *)v30 + 26) += v45;
  else
    *((_DWORD *)v30 + 27) += v45;
  if ( !*((_QWORD *)Src + 11) )
    v30[19] = SeDefaultObjectMethod;
  v30[23] = 0LL;
  v30[1] = v30;
  *v30 = v30;
  v30[26] = v30 + 25;
  v30[25] = v30 + 25;
  if ( (*((_BYTE *)v30 + 66) & 4) != 0 )
  {
    *((_DWORD *)v30 + 23) |= 0x100000u;
    v46 = &ObpDefaultObject;
  }
  else
  {
    v46 = v58;
  }
  v30[4] = v46;
  ObpLockObjectTypeExclusive(*(__int64 *)&ObpStackTraceLock.PriorityFloorSummary, v44, v42, v43);
  v47 = v57[0] - 32;
  if ( (v57[0][26] & 1) == 0 )
    v47 = 0LL;
  v48 = *(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary;
  v49 = *(char ***)(*(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary + 8LL);
  if ( *v49 != *(char **)&ObpStackTraceLock.PriorityFloorSummary )
    __fastfail(3u);
  *(_QWORD *)v47 = *(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary;
  *((_QWORD *)v47 + 1) = v49;
  v18 = -1073741670;
  *v49 = v47;
  *(_QWORD *)(v48 + 8) = v47;
  v50 = *(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary;
  v51 = *(_DWORD *)(*(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary + 44LL);
  if ( v51 >= 0x100 )
    inited = -1073741670;
  else
    *((_QWORD *)&ObpStackTraceLock.AbCompletedIoQoSBoostCount + v51) = v30;
  ObpUnlockObjectType(v50);
  if ( v30 == *(_QWORD **)&ObpStackTraceLock.PriorityFloorSummary )
  {
    v52 = 2;
  }
  else
  {
    if ( inited < 0 )
      goto LABEL_82;
    while ( (unsigned __int64)v32 < 0x100 )
    {
      if ( !_InterlockedCompareExchange64(&ObTypeIndexTable[v32], 1LL, 0LL) )
      {
        v52 = v32;
        inited = 0;
        goto LABEL_77;
      }
      ++v32;
    }
    inited = -1073741823;
    v52 = 0;
LABEL_77:
    if ( inited < 0 )
    {
LABEL_82:
      v18 = inited;
      goto LABEL_83;
    }
  }
  v53 = v52;
  ObTypeIndexTable[v52] = (__int64)v30;
  *((_BYTE *)v30 + 40) = v52;
  if ( ObpTypeDirectoryObject && !(unsigned __int8)ObpInsertDirectoryEntry(ObpTypeDirectoryObject, v30) )
  {
    ObTypeIndexTable[v53] = 0LL;
LABEL_83:
    ObpReleaseLookupContext((__int64)&v57[1]);
    ObfDereferenceObject(v30);
    return v18;
  }
  ObpReleaseLookupContext((__int64)&v57[1]);
  *v60 = v30;
  return 0LL;
}
