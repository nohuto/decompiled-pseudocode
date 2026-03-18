/*
 * XREFs of PspCreateProcess @ 0x140ADC7C0
 * Callers:
 *     NtCreateProcessEx @ 0x140B67C40 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PspCreateObjectHandle @ 0x140A0406C (PspCreateObjectHandle.c)
 *     SeQuerySigningPolicy @ 0x140A283BC (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x140ADCE18 (PspReferenceTokenForNewProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADCEA4 (PspGetProcessProtectionRequirementsFromImage.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        unsigned int a6,
        HANDLE Handle,
        void *a8,
        __int64 a9)
{
  _BYTE *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  int ULongFromUser; // edx
  NTSTATUS result; // eax
  PVOID v15; // r14
  int ProcessProtectionRequirementsFromImage; // esi
  __int64 v17; // rdx
  unsigned __int64 v18; // r12
  char v19; // bl
  char v20; // al
  bool v21; // cf
  __int64 v22; // rdx
  char v23; // r9
  struct _KPROCESS *v24; // rbx
  int v25; // eax
  int v26; // r15d
  char v27; // al
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  unsigned __int8 v30; // [rsp+80h] [rbp-248h] BYREF
  char v31; // [rsp+81h] [rbp-247h] BYREF
  char v32; // [rsp+82h] [rbp-246h] BYREF
  char v33; // [rsp+83h] [rbp-245h] BYREF
  __int16 v34; // [rsp+84h] [rbp-244h] BYREF
  int v35; // [rsp+88h] [rbp-240h]
  PVOID v36; // [rsp+90h] [rbp-238h] BYREF
  PVOID v37; // [rsp+98h] [rbp-230h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-228h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-218h]
  unsigned int v41; // [rsp+BCh] [rbp-20Ch]
  _QWORD *v42; // [rsp+C8h] [rbp-200h]
  __int64 v43; // [rsp+D0h] [rbp-1F8h]
  ULONG_PTR BugCheckParameter1; // [rsp+D8h] [rbp-1F0h]
  HANDLE v45; // [rsp+E0h] [rbp-1E8h]
  struct _ACCESS_STATE v46[2]; // [rsp+F0h] [rbp-1D8h] BYREF
  int v47; // [rsp+270h] [rbp-58h]
  KPROCESSOR_MODE v48; // [rsp+274h] [rbp-54h]
  __int64 v49; // [rsp+278h] [rbp-50h]

  BugCheckParameter1 = a4;
  v41 = a2;
  v42 = a1;
  v45 = a8;
  v40 = a9;
  v34 = 0;
  v33 = 0;
  v10 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v30 = 0;
  v31 = 0;
  v36 = 0LL;
  if ( (a6 & 0xFFB14048) != 0
    || (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v35 = a6 & 0x800;
  if ( (a6 & 0x2000) != 0 && (a6 & 0x800) == 0 )
    return -1073741811;
  if ( (a6 & 0x800) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v11 = *(_QWORD *)(a3 + 16);
      if ( !v11
        || !*(_QWORD *)(v11 + 8)
        || !*(_WORD *)v11
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || (a6 & 0x800) == 0) )
    return -1073741811;
  memset_0(v46, 0, 0x190uLL);
  v48 = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      v43 = 1LL;
      ProbeForRead((volatile void *)a3, 1uLL, 4u);
      ULongFromUser = RtlReadULongFromUser((unsigned int *)(a3 + 24));
    }
    else
    {
      ULongFromUser = *(_DWORD *)(a3 + 24);
    }
    v47 = ULongFromUser & (AccessMode != 0 ? 7666 : 73714);
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &Object, 0LL);
    v15 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v15 = 0LL;
    Object = 0LL;
  }
  if ( !BugCheckParameter1 )
  {
LABEL_36:
    LOBYTE(v12) = AccessMode;
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(v10, v40, v12, &v36);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_68;
    if ( v10 )
    {
      if ( v15 )
      {
        v32 = 0;
        v18 = (unsigned __int64)v36;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(
                                                   (int)v36,
                                                   0LL,
                                                   0,
                                                   0,
                                                   (char *)&v30,
                                                   &v31,
                                                   (unsigned __int8 *)&v32);
        if ( ProcessProtectionRequirementsFromImage < 0 )
        {
LABEL_67:
          ObfDereferenceObject((PVOID)v18);
          v10 = (_BYTE *)v38;
LABEL_68:
          if ( v10 )
            ObfDereferenceObjectWithTag(v10, 0x72437350u);
          goto LABEL_70;
        }
        if ( v30 > 1u || (v19 = v32) != 0 )
        {
LABEL_42:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_67;
        }
LABEL_46:
        if ( !v15 )
          goto LABEL_49;
        LOBYTE(v17) = v19;
        ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage(v15, v17, &v33);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_67;
        if ( v19 == v33 )
        {
LABEL_49:
          if ( v35 )
          {
            v21 = v40 != 0;
            v40 = -v40;
            if ( a3 )
              v22 = *(_QWORD *)(a3 + 16);
            else
              v22 = 0LL;
            ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                       v38,
                                                       v22,
                                                       0LL,
                                                       v19,
                                                       (void *)(v18 & -(__int64)v21),
                                                       a6,
                                                       0,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       v42);
          }
          else
          {
            v23 = v19;
            v24 = (struct _KPROCESS *)v38;
            v25 = PspAllocateProcess(
                    v38,
                    AccessMode,
                    a3,
                    v23,
                    v30,
                    v31,
                    v15,
                    (void *)v18,
                    a6,
                    0,
                    0LL,
                    v40 != 0,
                    0LL,
                    0LL,
                    (__int64)&v34,
                    &v37);
            ProcessProtectionRequirementsFromImage = v25;
            if ( v25 >= 0 )
            {
              v26 = v25;
              v35 = v25;
              v27 = 1;
              if ( (_BYTE)v34 )
                v27 = 3;
              ProcessProtectionRequirementsFromImage = PspInsertProcess((char *)v37, v24, v41, a6, v45, v27, 0LL, v46);
              if ( ProcessProtectionRequirementsFromImage >= 0 )
              {
                ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                           v37,
                                                           (__int64)v46,
                                                           (struct _OBJECT_TYPE *)PsProcessType);
                if ( ProcessProtectionRequirementsFromImage >= 0 )
                {
                  if ( AccessMode )
                    RtlWriteULong64ToUser(v42, v49);
                  else
                    *v42 = v49;
                  ProcessProtectionRequirementsFromImage = v26;
                }
                SeDeleteAccessState((__int64)v46);
              }
              if ( ProcessProtectionRequirementsFromImage < 0 )
                PspRundownSingleProcess((PRKPROCESS)v37, 0, v28, v29);
              ObfDereferenceObjectWithTag(v37, 0x72437350u);
            }
          }
          goto LABEL_67;
        }
        goto LABEL_42;
      }
      v19 = v10[1530];
      v20 = v10[1529];
      v30 = v10[1528];
    }
    else
    {
      v19 = 114;
      v30 = 30;
      v20 = 28;
    }
    v18 = (unsigned __int64)v36;
    v31 = v20;
    goto LABEL_46;
  }
  ProcessProtectionRequirementsFromImage = ObpReferenceObjectByHandleWithTag(
                                             BugCheckParameter1,
                                             128LL,
                                             PsProcessType,
                                             AccessMode,
                                             0x72437350u,
                                             &v38,
                                             0LL,
                                             0LL);
  if ( ProcessProtectionRequirementsFromImage >= 0 )
  {
    v10 = (_BYTE *)v38;
    goto LABEL_36;
  }
LABEL_70:
  if ( v15 )
    ObfDereferenceObject(v15);
  return ProcessProtectionRequirementsFromImage;
}
