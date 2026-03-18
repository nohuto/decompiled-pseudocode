/*
 * XREFs of NtTranslateFilePath @ 0x140A94C80
 * Callers:
 *     DifNtTranslateFilePathWrapper @ 0x14068FB10 (DifNtTranslateFilePathWrapper.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExpTranslateArcPath @ 0x14083CBFC (ExpTranslateArcPath.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExpVerifyFilePath @ 0x140A94FDC (ExpVerifyFilePath.c)
 *     ExpTranslateEfiPath @ 0x140A9512C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x140B56AF4 (ExpTranslateNtPath.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTranslateFilePath(unsigned int *Src, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int ULongFromUser; // r15d
  unsigned int v9; // edi
  _DWORD *Pool2; // rax
  _DWORD *v11; // r14
  void *v12; // rsi
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _QWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-48h]
  PVOID v24; // [rsp+38h] [rbp-40h]
  PVOID P; // [rsp+40h] [rbp-38h]

  P = 0LL;
  v24 = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 )
    return 3221225474LL;
  if ( a2 - 1 > 4 )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v22[0]) = PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(Src + 1);
  else
    ULongFromUser = Src[1];
  v23 = ULongFromUser;
  if ( ULongFromUser < 0xC )
    return 3221225485LL;
  if ( PreviousMode )
  {
    ProbeForRead(Src, ULongFromUser, 4u);
    v14 = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, v14);
    v15 = RtlReadULongFromUser(a4);
    v9 = v15;
    HIDWORD(v22[0]) = v15;
    if ( !a3 )
    {
      v9 = 0;
      HIDWORD(v22[0]) = 0;
      v15 = 0;
    }
    if ( v15 )
      ProbeForWrite(a3, v15, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v9 = a3 != 0LL ? *a4 : 0;
    HIDWORD(v22[0]) = v9;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v11 = Pool2;
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( PreviousMode )
    RtlCopyFromUser(Pool2, Src, ULongFromUser);
  else
    RtlCopyVolatileMemory(Pool2, Src, ULongFromUser);
  v11[1] = ULongFromUser;
  if ( v9 )
  {
    v12 = (void *)ExAllocatePool2(0x40uLL);
    v24 = v12;
    if ( !v12 )
    {
      ExFreePoolWithTag(v11, 0);
      P = 0LL;
      return 3221225626LL;
    }
  }
  else
  {
    v12 = 0LL;
    v24 = 0LL;
  }
  v16 = ExpVerifyFilePath(v11);
  if ( v16 >= 0 )
  {
    v17 = v11[2];
    if ( a2 == v17 )
    {
      if ( v9 < ULongFromUser )
        v16 = -1073741789;
      else
        memmove(v12, v11, ULongFromUser);
      v9 = ULongFromUser;
    }
    else
    {
      v18 = v17 - 1;
      if ( !v18 || (v19 = v18 - 1) == 0 )
      {
        v21 = ExpTranslateArcPath((__int64)v11, a2, v12, (__int64)v22 + 4);
        goto LABEL_33;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v21 = ExpTranslateNtPath(v11, a2, v12, (char *)v22 + 4, v22[0]);
        goto LABEL_33;
      }
      if ( v20 == 1 )
      {
        v21 = ExpTranslateEfiPath(v11, a2, v12, (char *)v22 + 4);
LABEL_33:
        v16 = v21;
        v9 = HIDWORD(v22[0]);
        goto LABEL_34;
      }
      v16 = -1073741811;
    }
  }
LABEL_34:
  ExFreePoolWithTag(v11, 0);
  if ( v16 < 0 )
    goto LABEL_38;
  if ( v12 )
  {
    if ( PreviousMode )
      RtlCopyToUser((void *)a3, v12, v9);
    else
      RtlCopyVolatileMemory((void *)a3, v12, v9);
LABEL_38:
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v24 = 0LL;
    }
  }
  if ( a4 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a4, v9);
    else
      *a4 = v9;
  }
  return (unsigned int)v16;
}
