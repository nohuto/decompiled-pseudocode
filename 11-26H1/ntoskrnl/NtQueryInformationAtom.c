/*
 * XREFs of NtQueryInformationAtom @ 0x140A40600
 * Callers:
 *     DifNtQueryInformationAtomWrapper @ 0x140682570 (DifNtQueryInformationAtomWrapper.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     RtlQueryAtomInAtomTable @ 0x140A413C0 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B58C84 (RtlQueryAtomsInAtomTable.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryInformationAtom(
        unsigned __int16 a1,
        int a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  char PreviousMode; // r15
  void *v9; // rsi
  unsigned int v10; // edi
  unsigned int *v11; // r14
  int ULongFromUser; // eax
  void *Pool2; // rax
  _WORD *v14; // r12
  void *v15; // r13
  int AtomInAtomTable; // ebx
  unsigned int v17; // eax
  void *v19; // rax
  _DWORD *v20; // r12
  void *v21; // r13
  unsigned int v22; // [rsp+34h] [rbp-64h] BYREF
  int v23; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-5Ch] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  __int128 v27; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+60h] [rbp-38h]

  DWORD1(v27) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0LL;
  P = 0LL;
  v10 = 0;
  v27 = 0LL;
  v28 = 0LL;
  PsInvokeWin32Callout(2LL, &v27, 0LL, 0LL);
  v26 = v28;
  if ( !v28 )
  {
    AtomInAtomTable = -1073741790;
    v11 = a5;
    goto LABEL_14;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    v11 = a5;
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
  }
  else
  {
    v11 = a5;
  }
  if ( !a2 )
  {
    v10 = 6;
    if ( a4 >= 6 )
    {
      if ( !PreviousMode )
      {
        v15 = (void *)a3;
        v14 = a3;
        goto LABEL_10;
      }
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v9 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        v14 = Pool2;
        v15 = (void *)a3;
LABEL_10:
        v22 = 0;
        v24 = a4 - 6;
        v23 = 0;
        AtomInAtomTable = RtlQueryAtomInAtomTable(
                            v26,
                            a1,
                            (unsigned int)&v22,
                            (unsigned int)&v23,
                            (__int64)(v14 + 3),
                            (__int64)&v24);
        if ( AtomInAtomTable < 0 )
          goto LABEL_14;
        *v14 = v22;
        v14[1] = v23;
        v17 = v24;
        v14[2] = v24;
        v10 = v17 + 8;
        v22 = v17 + 8;
        if ( PreviousMode )
          RtlCopyToUser(v15, v14, v10);
        goto LABEL_13;
      }
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  if ( a2 != 1 )
  {
LABEL_13:
    AtomInAtomTable = 0;
    goto LABEL_14;
  }
  v10 = 4;
  if ( a4 < 4 )
  {
LABEL_25:
    AtomInAtomTable = -1073741820;
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
      AtomInAtomTable = -1073741670;
      goto LABEL_14;
    }
    v20 = v19;
    v21 = (void *)a3;
  }
  else
  {
    v21 = (void *)a3;
    v20 = a3;
  }
  AtomInAtomTable = RtlQueryAtomsInAtomTable(v26, (a4 - 4) >> 1, v20, v20 + 1);
  if ( AtomInAtomTable >= 0 )
  {
    v10 = 2 * *v20 + 4;
    v22 = v10;
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
  return (unsigned int)AtomInAtomTable;
}
