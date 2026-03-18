/*
 * XREFs of DbgkCreateThread @ 0x1409EAD24
 * Callers:
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     PspReferenceSystemDll @ 0x140962FE8 (PspReferenceSystemDll.c)
 *     PsQuerySystemDllInfo @ 0x1409EBB38 (PsQuerySystemDllInfo.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PsCallImageNotifyRoutines @ 0x140A791A4 (PsCallImageNotifyRoutines.c)
 *     PsReferenceProcessFilePointer @ 0x140AAE560 (PsReferenceProcessFilePointer.c)
 *     MmGetFileObjectForSection @ 0x140AAE5D0 (MmGetFileObjectForSection.c)
 *     PsIsImageNotifyEnabled @ 0x140AB4D00 (PsIsImageNotifyEnabled.c)
 *     DbgkpSectionToFileHandle @ 0x140B260F0 (DbgkpSectionToFileHandle.c)
 *     DbgkpPostModuleMessages @ 0x140B27048 (DbgkpPostModuleMessages.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 */

LONG_PTR __fastcall DbgkCreateThread(__int64 a1)
{
  __int64 v2; // rsi
  bool v3; // bl
  LONG_PTR result; // rax
  char v5; // r12
  __int16 v6; // ax
  _DWORD *v8; // rax
  int i; // ebx
  LONG_PTR v10; // r14
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r13
  ULONG_PTR v13; // r13
  PVOID FileObjectForSection; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // r14
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
      v8 = RtlImageNtHeader(v25);
      if ( v8 )
        *(_QWORD *)&v26 = (unsigned int)RtlReadULongFromUser(v8 + 20);
      DWORD2(v25) = 0;
      DWORD2(v26) = 0;
      PsReferenceProcessFilePointer(v2, &Object);
      PsCallImageNotifyRoutines(*(_QWORD *)(v2 + 848), v2, &v24, Object);
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
            v11 = (unsigned __int16 *)RtlImageNtHeader(*(_QWORD *)(v10 + 24));
            v12 = v11;
            if ( v11 )
            {
              RtlReadUShortFromUser(v11 + 12);
              *(_QWORD *)&v26 = (unsigned int)RtlReadULongFromUser((unsigned int *)v12 + 20);
            }
            DWORD2(v25) = 0;
            DWORD2(v26) = 0;
            v13 = PspReferenceSystemDll(*(signed __int64 **)(v10 - 8));
            FileObjectForSection = (PVOID)MmGetFileObjectForSection(v13);
            Object = FileObjectForSection;
            if ( v13 )
            {
              ObFastDereferenceObject(*(signed __int64 **)(v10 - 8), v13, 0x64537350u);
              FileObjectForSection = Object;
            }
            PsCallImageNotifyRoutines(v10 + 8, v2, &v24, FileObjectForSection);
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
      v15 = RtlImageNtHeader(*(_QWORD *)(v2 + 688));
      v16 = v15;
      if ( v15 )
      {
        if ( v19 )
        {
          ULongFromUser = RtlReadULongFromUser(v15 + 13);
          v36 = ULongFromUser + (unsigned int)RtlReadULongFromUser(v16 + 10);
        }
        else
        {
          ULong64FromUser = RtlReadULong64FromUser(v15 + 12);
          v36 = ULong64FromUser + (unsigned int)RtlReadULongFromUser(v16 + 10);
        }
        LODWORD(v35) = RtlReadULongFromUser(v16 + 3);
        HIDWORD(v35) = RtlReadULongFromUser(v16 + 4);
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
