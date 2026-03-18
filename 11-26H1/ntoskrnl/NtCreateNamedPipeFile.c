/*
 * XREFs of NtCreateNamedPipeFile @ 0x1409B3580
 * Callers:
 *     DifNtCreateNamedPipeFileWrapper @ 0x1406720B0 (DifNtCreateNamedPipeFileWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 */

__int64 __fastcall NtCreateNamedPipeFile(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        void *Src)
{
  char PreviousMode; // cl
  SIZE_T Length; // [rsp+50h] [rbp-98h]
  __int128 v21; // [rsp+88h] [rbp-60h] BYREF
  __int128 v22; // [rsp+98h] [rbp-50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-40h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Src )
  {
    LOBYTE(v23) = 1;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_QWORD *)&v22 + 1) = RtlReadULong64FromUser(Src);
    }
    else
    {
      RtlCopyVolatileMemory((char *)&v22 + 8, Src, 8uLL);
    }
  }
  *(_QWORD *)&v21 = __PAIR64__(a9, a8);
  *((_QWORD *)&v21 + 1) = __PAIR64__(a11, a10);
  *(_QWORD *)&v22 = __PAIR64__(a13, a12);
  LODWORD(Length) = 0;
  return IopCreateFile(a1, a2, a3, a4, 0LL, 0, a5, a6, a7, 0LL, Length, 1, (__int64)&v21, 0, 0, 0LL);
}
