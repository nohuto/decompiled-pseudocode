/*
 * XREFs of DbgkCreateThread @ 0x1409E74F4
 * Callers:
 *     PspNotifyThreadCreation @ 0x1409E7408 (PspNotifyThreadCreation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 *     PsQuerySystemDllInfo @ 0x1409E8308 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x140A08E70 (PspReferenceSystemDll.c)
 *     PsReferenceProcessFilePointer @ 0x140AA7550 (PsReferenceProcessFilePointer.c)
 *     MmGetFileObjectForSection @ 0x140AA75C0 (MmGetFileObjectForSection.c)
 *     PsIsImageNotifyEnabled @ 0x140AB60A0 (PsIsImageNotifyEnabled.c)
 *     DbgkpSectionToFileHandle @ 0x140B28350 (DbgkpSectionToFileHandle.c)
 *     DbgkpPostModuleMessages @ 0x140B290F8 (DbgkpPostModuleMessages.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 */

LONG_PTR __fastcall DbgkCreateThread(__int64 a1)
{
  __int64 v2; // rsi
  bool v3; // bl
  LONG_PTR result; // rax
  char v5; // r12
  __int16 v6; // ax
  PIMAGE_NT_HEADERS v8; // rax
  int i; // ebx
  LONG_PTR v10; // r14
  PIMAGE_NT_HEADERS v11; // rax
  PIMAGE_NT_HEADERS v12; // r13
  ULONG_PTR v13; // r13
  PVOID FileObjectForSection; // rax
  PIMAGE_NT_HEADERS v15; // rax
  unsigned int *p_Signature; // r14
  int ULongFromUser; // ebx
  __int64 ULong64FromUser; // rbx
  bool v19; // [rsp+20h] [rbp-1B8h]
  PVOID Object; // [rsp+28h] [rbp-1B0h] BYREF
  int v21; // [rsp+30h] [rbp-1A8h]
  __int64 v22; // [rsp+40h] [rbp-198h]
  __int64 v23; // [rsp+48h] [rbp-190h]
  __int128 v24; // [rsp+50h] [rbp-188h] BYREF
  __int128 v25; // [rsp+60h] [rbp-178h]
  __int128 v26; // [rsp+70h] [rbp-168h]
  __int64 v27; // [rsp+80h] [rbp-158h]
  LONG_PTR *v28; // [rsp+88h] [rbp-150h]
  LONG_PTR v29; // [rsp+90h] [rbp-148h]
  int v30; // [rsp+A0h] [rbp-138h] BYREF
  int v31; // [rsp+A4h] [rbp-134h]
  int v32; // [rsp+C8h] [rbp-110h]
  HANDLE Handle; // [rsp+D8h] [rbp-100h]
  __int64 v34; // [rsp+E0h] [rbp-F8h]
  __int64 v35; // [rsp+E8h] [rbp-F0h]
  __int64 v36; // [rsp+F8h] [rbp-E0h]

  v23 = a1;
  memset_0(&v30, 0, 0x110uLL);
  v2 = *(_QWORD *)(a1 + 184);
  v22 = v2;
  v28 = (LONG_PTR *)(v2 + 784);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 784) )
  {
    v6 = *(_WORD *)(v2 + 1772);
    if ( v6 == 332 || v6 == 452 )
      v3 = 1;
  }
  v19 = v3;
  _m_prefetchw((const void *)(v2 + 500));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 500), 0x400001u);
  v5 = result;
  v21 = result;
  if ( (result & 0x400000) == 0 )
  {
    result = PsIsImageNotifyEnabled();
    if ( (_BYTE)result )
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      Object = 0LL;
      BYTE8(v24) = 3;
      *(_QWORD *)&v25 = *(_QWORD *)(v2 + 688);
      *(_QWORD *)&v26 = 0LL;
      v8 = RtlImageNtHeader((PVOID)v25);
      if ( v8 )
        *(_QWORD *)&v26 = (unsigned int)RtlReadULongFromUser(&v8->OptionalHeader.SizeOfImage);
      DWORD2(v25) = 0;
      DWORD2(v26) = 0;
      PsReferenceProcessFilePointer(v2, &Object);
      PsCallImageNotifyRoutines(*(__int128 **)(v2 + 848), v2, &v24, (__int64)Object);
      result = ObfDereferenceObject(Object);
      for ( i = 0; ; ++i )
      {
        LODWORD(Object) = i;
        if ( i >= 6 )
          break;
        result = PsQuerySystemDllInfo((unsigned int)i);
        v10 = result;
        v29 = result;
        if ( result )
        {
          if ( i <= 0 || (*(_DWORD *)result & 8) != 0 && (result = *v28) != 0 && i == *(_DWORD *)(result + 8) )
          {
            DWORD2(v24) = 3;
            *(_QWORD *)&v25 = *(_QWORD *)(v10 + 24);
            *(_QWORD *)&v26 = 0LL;
            v11 = RtlImageNtHeader(*(PVOID *)(v10 + 24));
            v12 = v11;
            if ( v11 )
            {
              RtlReadUShortFromUser(&v11->OptionalHeader.Magic);
              *(_QWORD *)&v26 = (unsigned int)RtlReadULongFromUser(&v12->OptionalHeader.SizeOfImage);
            }
            DWORD2(v25) = 0;
            DWORD2(v26) = 0;
            v13 = PspReferenceSystemDll(*(_QWORD *)(v10 - 8));
            FileObjectForSection = (PVOID)MmGetFileObjectForSection(v13);
            Object = FileObjectForSection;
            if ( v13 )
            {
              ObFastDereferenceObject(*(signed __int64 **)(v10 - 8), v13, 0x64537350u);
              FileObjectForSection = Object;
            }
            PsCallImageNotifyRoutines((__int128 *)(v10 + 8), v2, &v24, (__int64)FileObjectForSection);
            result = ObfDereferenceObject(Object);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 776) )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1440) & 4) == 0 )
      {
        memset_0(&v30, 0, 0x40uLL);
        Handle = *(HANDLE *)(a1 + 1376);
        v30 = 4194328;
        v31 = 8;
        v32 = 1;
        DbgkpSendApiMessage((_KPROCESS *)v2, 1, (__int64)&v30);
      }
    }
    else
    {
      memset_0(&v30, 0, 0x60uLL);
      Handle = (HANDLE)DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 680));
      v34 = *(_QWORD *)(v2 + 688);
      v36 = 0LL;
      v35 = 0LL;
      v15 = RtlImageNtHeader(*(PVOID *)(v2 + 688));
      p_Signature = &v15->Signature;
      if ( v15 )
      {
        if ( v19 )
        {
          ULongFromUser = RtlReadULongFromUser((unsigned int *)&v15->OptionalHeader.ImageBase + 1);
          v36 = ULongFromUser + (unsigned int)RtlReadULongFromUser(p_Signature + 10);
        }
        else
        {
          ULong64FromUser = RtlReadULong64FromUser(&v15->OptionalHeader.ImageBase);
          v36 = ULong64FromUser + (unsigned int)RtlReadULongFromUser(p_Signature + 10);
        }
        LODWORD(v35) = RtlReadULongFromUser(p_Signature + 3);
        HIDWORD(v35) = RtlReadULongFromUser(p_Signature + 4);
      }
      v30 = 6291512;
      v31 = 8;
      v32 = 2;
      DbgkpSendApiMessage((_KPROCESS *)v2, 0, (__int64)&v30);
      if ( Handle )
        ObCloseHandle(Handle, 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *(unsigned int *)(a1 + 1444);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages(v2, a1, 0LL);
  }
  return result;
}
