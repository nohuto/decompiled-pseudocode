/*
 * XREFs of NtQueryInformationAtom @ 0x1409FC020
 * Callers:
 *     DifNtQueryInformationAtomWrapper @ 0x140686150 (DifNtQueryInformationAtomWrapper.c)
 * Callees:
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     RtlQueryAtomInAtomTable @ 0x1409FD020 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B5BAA4 (RtlQueryAtomsInAtomTable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  char PreviousMode; // r15
  void *v9; // rsi
  unsigned int v10; // edi
  PULONG v11; // r14
  int ULongFromUser; // eax
  void *Pool2; // rax
  WCHAR *v14; // r12
  PVOID v15; // r13
  int AtomsInAtomTable; // ebx
  ULONG v17; // eax
  void *v19; // rax
  _DWORD *v20; // r12
  PVOID v21; // r13
  ULONG AtomUsage; // [rsp+34h] [rbp-64h] BYREF
  ULONG AtomFlags; // [rsp+38h] [rbp-60h] BYREF
  ULONG AtomNameLength; // [rsp+3Ch] [rbp-5Ch] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  PVOID AtomTableHandle; // [rsp+48h] [rbp-50h]
  __int128 v27; // [rsp+50h] [rbp-48h] BYREF
  void *v28; // [rsp+60h] [rbp-38h]

  DWORD1(v27) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  v27 = 0LL;
  v28 = 0LL;
  PsInvokeWin32Callout(2LL, &v27, 0LL, 0LL);
  AtomTableHandle = v28;
  if ( !v28 )
  {
    AtomsInAtomTable = -1073741790;
    v11 = ReturnLength;
    goto LABEL_14;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(AtomInformation, AtomInformationLength, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( AtomInformationClass == AtomBasicInformation )
  {
    v10 = 6;
    if ( AtomInformationLength >= 6 )
    {
      if ( !PreviousMode )
      {
        v15 = AtomInformation;
        v14 = (WCHAR *)AtomInformation;
        goto LABEL_10;
      }
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v9 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        v14 = (WCHAR *)Pool2;
        v15 = AtomInformation;
LABEL_10:
        AtomUsage = 0;
        AtomNameLength = AtomInformationLength - 6;
        AtomFlags = 0;
        AtomsInAtomTable = RtlQueryAtomInAtomTable(
                             AtomTableHandle,
                             Atom,
                             &AtomUsage,
                             &AtomFlags,
                             v14 + 3,
                             &AtomNameLength);
        if ( AtomsInAtomTable < 0 )
          goto LABEL_14;
        *v14 = AtomUsage;
        v14[1] = AtomFlags;
        v17 = AtomNameLength;
        v14[2] = AtomNameLength;
        v10 = v17 + 8;
        AtomUsage = v17 + 8;
        if ( PreviousMode )
          RtlCopyToUser(v15, v14, v10);
        goto LABEL_13;
      }
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  if ( AtomInformationClass != AtomTableInformation )
  {
LABEL_13:
    AtomsInAtomTable = 0;
    goto LABEL_14;
  }
  v10 = 4;
  if ( AtomInformationLength < 4 )
  {
LABEL_25:
    AtomsInAtomTable = -1073741820;
    goto LABEL_14;
  }
  if ( PreviousMode )
  {
    v19 = (void *)ExAllocatePool2(0x101uLL);
    v9 = v19;
    P = v19;
    if ( !v19 )
    {
LABEL_21:
      AtomsInAtomTable = -1073741670;
      goto LABEL_14;
    }
    v20 = v19;
    v21 = AtomInformation;
  }
  else
  {
    v21 = AtomInformation;
    v20 = AtomInformation;
  }
  AtomsInAtomTable = RtlQueryAtomsInAtomTable(AtomTableHandle, (AtomInformationLength - 4) >> 1, v20, v20 + 1);
  if ( AtomsInAtomTable >= 0 )
  {
    v10 = 2 * *v20 + 4;
    AtomUsage = v10;
    if ( PreviousMode )
      RtlCopyToUser(v21, v20, v10);
    goto LABEL_13;
  }
LABEL_14:
  if ( v11 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(v11, v10);
    else
      *v11 = v10;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x6D4E7441u);
  return AtomsInAtomTable;
}
