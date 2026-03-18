/*
 * XREFs of NtCreateMailslotFile @ 0x140B3BE60
 * Callers:
 *     DifNtCreateMailslotFileWrapper @ 0x140671D50 (DifNtCreateMailslotFileWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 */

__int64 __fastcall NtCreateMailslotFile(
        HANDLE *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *Src)
{
  char PreviousMode; // cl
  SIZE_T Length; // [rsp+50h] [rbp-88h]
  __int128 v15; // [rsp+88h] [rbp-50h] BYREF
  __int64 v16; // [rsp+98h] [rbp-40h]

  v15 = 0LL;
  v16 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Src )
  {
    LOBYTE(v16) = 1;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_QWORD *)&v15 + 1) = RtlReadULong64FromUser(Src);
    }
    else
    {
      RtlCopyVolatileMemory((char *)&v15 + 8, Src, 8uLL);
    }
  }
  *(_QWORD *)&v15 = __PAIR64__(a7, a6);
  LODWORD(Length) = 0;
  return IopCreateFile(a1, a2, a3, a4, 0LL, 0, 3, 2u, a5, 0LL, Length, 2, &v15, 0, 0, 0LL);
}
