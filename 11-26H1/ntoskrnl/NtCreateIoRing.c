/*
 * XREFs of NtCreateIoRing @ 0x14079B5F0
 * Callers:
 *     DifNtCreateIoRingWrapper @ 0x140674D80 (DifNtCreateIoRingWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PsGetProcessImageFileName @ 0x140478D40 (PsGetProcessImageFileName.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     IopAllocateAndLockMdl @ 0x140796C1C (IopAllocateAndLockMdl.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 */

NTSTATUS __cdecl NtCreateIoRing(
        PHANDLE IoRingHandle,
        ULONG CreateParametersLength,
        PVOID CreateParameters,
        ULONG OutputParametersLength,
        PVOID OutputParameters)
{
  SIZE_T v5; // r14
  KPROCESSOR_MODE v8; // si
  NTSTATUS Section; // edi
  __int64 ULong64FromUser; // rax
  unsigned int v11; // edx
  int v12; // r9d
  unsigned int v13; // r8d
  char v14; // cl
  unsigned int v15; // edx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  char *v18; // rdx
  const CHAR *v19; // rdx
  const CHAR *v20; // r9
  _DWORD *v21; // r8
  PVOID Object; // [rsp+50h] [rbp-218h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+58h] [rbp-210h]
  NTSTATUS v25; // [rsp+5Ch] [rbp-20Ch]
  unsigned __int64 v26; // [rsp+60h] [rbp-208h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-200h] BYREF
  int v28; // [rsp+70h] [rbp-1F8h] BYREF
  int v29; // [rsp+74h] [rbp-1F4h] BYREF
  int v30; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v31; // [rsp+7Ch] [rbp-1ECh] BYREF
  int v32; // [rsp+84h] [rbp-1E4h] BYREF
  int v33; // [rsp+88h] [rbp-1E0h] BYREF
  int v34; // [rsp+8Ch] [rbp-1DCh] BYREF
  int v35; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v36; // [rsp+98h] [rbp-1D0h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-1C0h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-1B8h] BYREF
  _QWORD v40[4]; // [rsp+B8h] [rbp-1B0h] BYREF
  __int128 v41; // [rsp+D8h] [rbp-190h]
  __int128 v42; // [rsp+E8h] [rbp-180h] BYREF
  int v43; // [rsp+F8h] [rbp-170h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+100h] [rbp-168h] BYREF
  __int64 *v45; // [rsp+120h] [rbp-148h]
  __int64 v46; // [rsp+128h] [rbp-140h]
  char v47[16]; // [rsp+130h] [rbp-138h] BYREF
  char v48[16]; // [rsp+140h] [rbp-128h] BYREF
  int *v49; // [rsp+150h] [rbp-118h]
  __int64 v50; // [rsp+158h] [rbp-110h]
  int *v51; // [rsp+160h] [rbp-108h]
  __int64 v52; // [rsp+168h] [rbp-100h]
  int *v53; // [rsp+170h] [rbp-F8h]
  __int64 v54; // [rsp+178h] [rbp-F0h]
  __int64 *v55; // [rsp+180h] [rbp-E8h]
  __int64 v56; // [rsp+188h] [rbp-E0h]
  char *v57; // [rsp+190h] [rbp-D8h]
  __int64 v58; // [rsp+198h] [rbp-D0h]
  int *v59; // [rsp+1A0h] [rbp-C8h]
  __int64 v60; // [rsp+1A8h] [rbp-C0h]
  int *v61; // [rsp+1B0h] [rbp-B8h]
  __int64 v62; // [rsp+1B8h] [rbp-B0h]
  int *v63; // [rsp+1C0h] [rbp-A8h]
  __int64 v64; // [rsp+1C8h] [rbp-A0h]
  int *v65; // [rsp+1D0h] [rbp-98h]
  __int64 v66; // [rsp+1D8h] [rbp-90h]
  __int64 *v67; // [rsp+1E0h] [rbp-88h]
  __int64 v68; // [rsp+1E8h] [rbp-80h]
  __int64 *v69; // [rsp+1F0h] [rbp-78h]
  __int64 v70; // [rsp+1F8h] [rbp-70h]
  unsigned __int64 *v71; // [rsp+200h] [rbp-68h]
  __int64 v72; // [rsp+208h] [rbp-60h]
  __int64 *v73; // [rsp+210h] [rbp-58h]
  __int64 v74; // [rsp+218h] [rbp-50h]

  v5 = OutputParametersLength;
  v25 = 0;
  v8 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v8;
  v42 = 0LL;
  v43 = 0;
  Object = 0LL;
  if ( CreateParametersLength < 0x14 )
  {
    Section = -1073741584;
    goto LABEL_54;
  }
  if ( OutputParametersLength < 0x30 )
  {
    Section = -1073741789;
    goto LABEL_54;
  }
  if ( v8 )
  {
    ProbeForRead(CreateParameters, CreateParametersLength, 1u);
    ULong64FromUser = RtlReadULong64FromUser(IoRingHandle);
    RtlWriteULong64ToUser(IoRingHandle, ULong64FromUser);
    ProbeForWrite(OutputParameters, v5, 1u);
    RtlCopyFromUser(&v42, CreateParameters, 0x14uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v42, CreateParameters, 0x14uLL);
  }
  if ( (unsigned int)(v42 - 1) > 0x18F )
  {
    Section = -1069154301;
    goto LABEL_54;
  }
  v11 = DWORD1(v42);
  if ( !DWORD1(v42) )
  {
    v11 = 32;
LABEL_11:
    v12 = -1;
    goto LABEL_12;
  }
  if ( DWORD1(v42) < 8 )
  {
    v11 = 8;
    goto LABEL_11;
  }
  if ( DWORD1(v42) > 0x10000 )
  {
    Section = -1069154300;
    goto LABEL_54;
  }
  if ( ((DWORD1(v42) - 1) & DWORD1(v42)) == 0 )
    goto LABEL_11;
  v12 = -1;
  v14 = -1;
  do
  {
    ++v14;
    v11 >>= 1;
  }
  while ( v11 );
  v11 = 1 << (v14 + 1);
LABEL_12:
  DWORD1(v42) = v11;
  v13 = DWORD2(v42);
  if ( DWORD2(v42) > 0x20000 )
  {
    Section = -1069154299;
    goto LABEL_54;
  }
  v15 = 2 * v11;
  if ( DWORD2(v42) <= v15 )
  {
    DWORD2(v42) = v15;
  }
  else
  {
    if ( ((DWORD2(v42) - 1) & DWORD2(v42)) != 0 )
    {
      if ( DWORD2(v42) )
      {
        do
        {
          ++v12;
          v13 >>= 1;
        }
        while ( v13 );
      }
      v13 = 1 << (v12 + 1);
    }
    DWORD2(v42) = v13;
  }
  if ( HIDWORD(v42) )
  {
    Section = -1069154303;
    goto LABEL_54;
  }
  v40[0] = 48LL;
  memset(&v40[1], 0, 24);
  v41 = 0LL;
  LOBYTE(v12) = v8;
  Section = ObCreateObjectEx(0, (_DWORD)IoRingObjectType, (unsigned int)v40, v12);
  if ( Section < 0 )
    goto LABEL_47;
  memset_0(Object, 0, 0xD0uLL);
  *(_WORD *)Object = 14;
  *((_WORD *)Object + 1) = 208;
  *((_DWORD *)Object + 2) = v42;
  *((_DWORD *)Object + 5) = DWORD1(v42);
  *((_DWORD *)Object + 7) = DWORD2(v42);
  *((_DWORD *)Object + 3) = HIDWORD(v42);
  *((_DWORD *)Object + 4) = 0;
  *((_DWORD *)Object + 6) = DWORD1(v42) - 1;
  *((_DWORD *)Object + 8) = DWORD2(v42) - 1;
  *((_QWORD *)Object + 13) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)Object + 136), SynchronizationEvent, 0);
  v16 = (((unsigned __int64)DWORD1(v42) << 6) + 87) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v16 + 8 * (DWORD2(v42) + 2 * (DWORD2(v42) + 2LL));
  Section = MmCreateSection((int)Object + 56, 6, 0, (unsigned int)&v26, 4, 0x8000000, 0LL, 0LL);
  if ( Section < 0 )
    goto LABEL_47;
  Section = MmMapViewInSessionSpace(*((PVOID *)Object + 7), (PVOID *)Object + 8, (PSIZE_T)Object + 11);
  if ( Section < 0 )
    goto LABEL_47;
  Section = IopAllocateAndLockMdl(
              (void *)(v16 + *((_QWORD *)Object + 8)),
              *((_DWORD *)Object + 22) - (int)v16,
              0,
              (__int64)Object + 72,
              (PMDL *)Object + 9,
              (_QWORD *)Object + 10);
  if ( Section < 0 )
    goto LABEL_47;
  if ( v8 )
  {
    v36 = 0LL;
    v37 = 0LL;
    v26 = 0LL;
    Section = MmMapViewOfSection(
                *((_QWORD *)Object + 7),
                KeGetCurrentThread()->ApcState.Process,
                (unsigned int)&v26,
                0,
                0LL,
                (__int64)&v36,
                (__int64)&v37,
                1,
                0,
                4);
    if ( Section < 0 )
      goto LABEL_47;
    v17 = v26 + v16;
    *((_QWORD *)Object + 5) = v26;
    *((_QWORD *)Object + 6) = v17;
  }
  Handle = 0LL;
  Section = ObInsertObjectEx(Object, 0LL, 0LL, 1LL, 0, &Object, &Handle);
  v25 = Section;
  if ( Section >= 0 )
  {
    if ( v8 )
      RtlWriteULong64ToUser(IoRingHandle, (__int64)Handle);
    else
      *IoRingHandle = Handle;
    v18 = (char *)Object + 8;
    if ( v8 )
      RtlCopyToUser(OutputParameters, v18, 0x30uLL);
    else
      RtlCopyVolatileMemory(OutputParameters, v18, 0x30uLL);
  }
  else
  {
    Object = 0LL;
  }
LABEL_47:
  if ( Section >= 0 )
  {
    if ( Object )
    {
      PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
      if ( (unsigned int)dword_140E06D58 > 5 && tlgKeywordOn((__int64)&dword_140E06D58, 0x400000000000LL) )
      {
        v38 = 1LL;
        v45 = &v38;
        v46 = 8LL;
        v19 = "UserMode";
        if ( !v8 )
          v19 = "KernelMode";
        tlgCreate1Sz_char((__int64)v47, v19);
        tlgCreate1Sz_char((__int64)v48, v20);
        v28 = v42;
        v49 = &v28;
        v50 = 4LL;
        v29 = HIDWORD(v42);
        v51 = &v29;
        v52 = 4LL;
        v30 = v43;
        v53 = &v30;
        v54 = 4LL;
        v31 = *(_QWORD *)((char *)&v42 + 4);
        v55 = &v31;
        v56 = 4LL;
        v57 = (char *)&v31 + 4;
        v58 = 4LL;
        v32 = v21[2];
        v59 = &v32;
        v60 = 4LL;
        v33 = v21[3];
        v61 = &v33;
        v62 = 4LL;
        v34 = v21[4];
        v63 = &v34;
        v64 = 4LL;
        v35 = v21[5];
        v65 = &v35;
        v66 = 4LL;
        LODWORD(v36) = v21[6];
        v67 = &v36;
        v68 = 4LL;
        LODWORD(v37) = v21[7];
        v69 = &v37;
        v70 = 4LL;
        LODWORD(v26) = v21[8];
        v71 = &v26;
        v72 = 4LL;
        v39 = 0x1000000LL;
        v73 = &v39;
        v74 = 8LL;
        tlgWriteAgg((__int64)&dword_140E06D58, (unsigned __int8 *)&word_1400474AA, (__int64)v21, 0x12u, &v44);
      }
    }
  }
LABEL_54:
  if ( Object )
    ObfDereferenceObject(Object);
  return Section;
}
