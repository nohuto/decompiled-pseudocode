/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x140B0CB70
 * Callers:
 *     DifNtSetCachedSigningLevel2Wrapper @ 0x14068A9A0 (DifNtSetCachedSigningLevel2Wrapper.c)
 *     NtSetCachedSigningLevel @ 0x140B0CB40 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x14047C3E0 (RtlUnicodeStringValidateEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetCachedSigningLevel2(__int64 a1, __int64 a2, void *a3, unsigned int a4, __int64 a5, void *a6)
{
  __int16 v6; // r15
  _QWORD *v7; // rdi
  void *v8; // r12
  char PreviousMode; // r14
  NTSTATUS v10; // ebx
  void *v11; // r15
  size_t v12; // rbx
  void *v13; // rax
  NTSTATUS v14; // eax
  int v15; // ecx
  _KPROCESS *Process; // rcx
  size_t v17; // rbx
  _QWORD *Pool2; // rax
  ULONG v19; // edx
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-A0h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-90h] BYREF
  void *v25; // [rsp+78h] [rbp-80h]
  _QWORD *v26; // [rsp+88h] [rbp-70h]
  void *v27; // [rsp+90h] [rbp-68h]
  size_t v28; // [rsp+A8h] [rbp-50h]
  UNICODE_STRING *p_SourceString; // [rsp+B0h] [rbp-48h]
  unsigned int v31; // [rsp+118h] [rbp+20h]

  v31 = a4;
  v6 = a1;
  v7 = 0LL;
  SourceString = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  *(_OWORD *)Size = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a1 & 0x2000) == 0 )
  {
    if ( !*(_QWORD *)&SepRmCapTableLock.AbCompletedIoQoSBoostCount )
      goto LABEL_3;
    if ( (a2 & 0x30) != 0 )
    {
LABEL_25:
      v10 = -1073741584;
      goto LABEL_66;
    }
    if ( a4 - 1 <= 0xFFF )
    {
      if ( (a1 & 6) == 0 && (_BYTE)a2 )
        goto LABEL_25;
      v15 = a1 & 1;
      if ( (v6 & 2) != 0 && v15 )
      {
LABEL_31:
        v10 = -1073741585;
        goto LABEL_66;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v6 & 2) != 0 )
          goto LABEL_31;
        v6 |= 1u;
        if ( (v6 & 4) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (BYTE2(Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
            goto LABEL_8;
          LOBYTE(a2) = Process[3].ActiveGroupsMask.Masks[1] & 0xF;
          LOBYTE(Process) = BYTE1(Process[3].ActiveGroupsMask.Masks[1]) & 0xF;
          SeCompareSigningLevels((__int64)Process, a2);
          a4 = v31;
        }
      }
      else if ( !v15 && (v6 & 2) == 0 )
      {
        goto LABEL_31;
      }
      v17 = 8LL * a4;
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      v26 = Pool2;
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_66;
      }
      if ( PreviousMode )
        RtlCopyFromUser(Pool2, a3, v17);
      else
        RtlCopyVolatileMemory(Pool2, a3, v17);
      if ( a6 )
      {
        if ( ((unsigned __int8)a6 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( PreviousMode )
          RtlCopyFromUser(Size, a6, 0x18uLL);
        else
          RtlCopyVolatileMemory(Size, a6, 0x18uLL);
        if ( LODWORD(Size[0]) < 0x18 )
        {
          v10 = -1073741580;
          goto LABEL_66;
        }
        v20 = Size[1];
        if ( LOWORD(Size[1]) )
        {
          if ( PreviousMode == 1 )
          {
            SourceString.Buffer = (wchar_t *)ExAllocatePool2(0x103uLL);
            if ( !SourceString.Buffer )
            {
              v10 = -1073741670;
              goto LABEL_66;
            }
            RtlCopyFromUser(SourceString.Buffer, v25, LOWORD(Size[1]));
            v20 = Size[1];
          }
          else
          {
            SourceString.Buffer = (wchar_t *)v25;
          }
          SourceString.Length = v20;
          SourceString.MaximumLength = v20;
          v10 = RtlUnicodeStringValidateEx(&SourceString, v19);
          if ( v10 < 0 )
            goto LABEL_66;
          p_SourceString = &SourceString;
        }
      }
      v21 = v31;
      if ( (v6 & 6) == 0 )
      {
LABEL_64:
        LOBYTE(v21) = PreviousMode;
        v14 = guard_dispatch_icall_no_overrides(v6 & 0x807, v21);
        goto LABEL_21;
      }
      if ( v31 == 1 )
      {
        if ( a5 != *v7 )
        {
          v10 = -1073741581;
          goto LABEL_66;
        }
        goto LABEL_64;
      }
    }
    v10 = -1073741582;
    goto LABEL_66;
  }
  if ( SepRmCapTableLock.Spare35[1] )
  {
    if ( !a6 || !a5 )
    {
      v10 = -1073741811;
      goto LABEL_66;
    }
    if ( PreviousMode == 1 )
    {
      if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
      {
LABEL_8:
        v10 = -1073741790;
        goto LABEL_66;
      }
      if ( ((unsigned __int8)a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Size, a6, 0x18uLL);
      v11 = v25;
      v12 = Size[1];
      v28 = Size[1];
      if ( !v25 || !Size[1] )
      {
        v10 = -1073741811;
        goto LABEL_66;
      }
      if ( Size[1] > 0xFFFF )
      {
        v10 = -1073741811;
        goto LABEL_66;
      }
      v13 = (void *)ExAllocatePool2(0x103uLL);
      v8 = v13;
      v27 = v13;
      if ( !v13 )
      {
        v10 = -1073741670;
        goto LABEL_66;
      }
      RtlCopyFromUser(v13, v11, v12);
    }
    else
    {
      v8 = (void *)*((_QWORD *)a6 + 2);
    }
    LOBYTE(a1) = PreviousMode;
    v14 = guard_dispatch_icall_no_overrides(a1, a5);
LABEL_21:
    v10 = v14;
    goto LABEL_66;
  }
LABEL_3:
  v10 = -1073741822;
LABEL_66:
  if ( SourceString.Buffer && PreviousMode == 1 )
    ExFreePoolWithTag(SourceString.Buffer, 0x63734943u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x63734943u);
  if ( v8 && PreviousMode == 1 )
    ExFreePoolWithTag(v8, 0x63734943u);
  return (unsigned int)v10;
}
