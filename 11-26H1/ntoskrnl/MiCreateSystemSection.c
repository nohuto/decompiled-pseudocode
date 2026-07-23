/*
 * XREFs of MiCreateSystemSection @ 0x14038C270
 * Callers:
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x140A52220 (PsReferencePrimaryToken.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 */

__int64 __fastcall MiCreateSystemSection(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  int v13; // eax
  char v15; // bl
  void *v16; // rdi
  int v17; // ebp
  __int64 v18; // r15
  int v19; // r12d
  int v20; // r13d
  int Section; // esi
  __int64 v22; // rcx
  __int64 v23; // rax
  signed __int64 *v25; // rdi
  struct _FILE_OBJECT *v26; // rbx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // si
  bool v32; // zf
  __int64 v34; // [rsp+C8h] [rbp+20h] BYREF

  v13 = a3;
  v34 = 0LL;
  if ( a12 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v15 = BYTE1(Process[3].ActiveGroupsMask.Masks[1]);
    v28 = PsReferencePrimaryToken(Process);
    v31 = a13;
    v16 = v28;
    if ( a13 )
    {
      LOBYTE(v29) = a13;
      LOBYTE(v30) = v15;
      v32 = (unsigned int)SeCompareSigningLevels(v30, v29) == 0;
      v13 = a3;
      if ( v32 )
        v15 = v31 & 0xF | v15 & 0x30;
    }
    else
    {
      v13 = a3;
    }
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
  }
  v17 = a11;
  v18 = a8;
  v19 = a7;
  v20 = a6;
  while ( 1 )
  {
    Section = MiCreateSection((unsigned int)&v34, v13, 0, a5, v20, v19, (__int64)v16, v15, v18, 0LL, 0, v17, 0LL);
    if ( Section >= 0 )
    {
      if ( v16 )
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      v22 = v34;
      *a1 = v34;
      v23 = MiSectionControlArea(v22);
      if ( v23 )
      {
        v25 = (signed __int64 *)(v23 + 64);
        if ( *(_QWORD *)(v23 + 64) )
        {
          v26 = (struct _FILE_OBJECT *)MiReferenceControlAreaFileWithTag(v23, 1666411853LL, 0LL);
          CcZeroEndOfLastPage(v26);
          ObFastDereferenceObjectDeferDelete(v25, (ULONG_PTR)v26, 0x63536D4Du);
        }
      }
      return (unsigned int)Section;
    }
    if ( Section != -1073741740 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v13 = a3;
  }
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x746C6644u);
  return (unsigned int)Section;
}
