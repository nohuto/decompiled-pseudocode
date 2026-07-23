/*
 * XREFs of NtRaiseHardError @ 0x140846660
 * Callers:
 *     DifNtRaiseHardErrorWrapper @ 0x14068B190 (DifNtRaiseHardErrorWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  __int64 v8; // r15
  NTSTATUS v9; // esi
  unsigned int v10; // r14d
  ULONG v11; // edi
  int ULongFromUser; // eax
  volatile void *v14; // rcx
  unsigned int *v15; // rbx
  __int64 v16; // rdi
  NTSTATUS v17; // ebx
  ULONG v18; // [rsp+40h] [rbp-118h] BYREF
  NTSTATUS v19; // [rsp+44h] [rbp-114h]
  unsigned int v20; // [rsp+48h] [rbp-110h]
  __int64 v21; // [rsp+58h] [rbp-100h]
  __int128 v22; // [rsp+60h] [rbp-F8h]
  _QWORD Src[5]; // [rsp+70h] [rbp-E8h] BYREF
  volatile void *v24[15]; // [rsp+98h] [rbp-C0h] BYREF

  v8 = NumberOfParameters;
  v9 = ErrorStatus;
  v19 = ErrorStatus;
  v10 = 0;
  v18 = 0;
  if ( NumberOfParameters > 5 )
    return -1073741584;
  if ( Parameters )
  {
    if ( NumberOfParameters )
      goto LABEL_6;
    return -1073741584;
  }
  if ( NumberOfParameters )
    return -1073741584;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v11 = ValidResponseOptions;
    if ( ValidResponseOptions > 6 && ValidResponseOptions - 7 >= 2 )
      return -1073741582;
    ULongFromUser = RtlReadULongFromUser(Response);
    RtlWriteULongToUser(Response, ULongFromUser);
    if ( Parameters )
    {
      if ( 8 * v8 && ((unsigned __int8)Parameters & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Src, Parameters, 8 * v8);
      memmove(v24, Src, 8 * v8);
      if ( UnicodeStringParameterMask )
      {
        while ( 1 )
        {
          v20 = v10;
          if ( v10 >= (unsigned int)v8 )
            break;
          if ( _bittest((const int *)&UnicodeStringParameterMask, v10) )
          {
            v21 = 16LL;
            v14 = (volatile void *)Src[v10];
            v21 = 1LL;
            ProbeForRead(v14, 1uLL, 8u);
            v15 = (unsigned int *)Src[v10];
            DWORD1(v22) = 0;
            LODWORD(v22) = RtlReadULongFromUser(v15);
            *((_QWORD *)&v22 + 1) = RtlReadULong64FromUser(v15 + 2);
            v16 = 2LL * v10;
            *(_OWORD *)&v24[v16 + 5] = v22;
            ProbeForRead(v24[v16 + 6], WORD1(v24[v16 + 5]), 1u);
            v24[v10] = &v24[v16 + 5];
          }
          ++v10;
        }
        v9 = v19;
      }
      v11 = ValidResponseOptions;
    }
    v17 = ExpRaiseHardError(v9, v8, UnicodeStringParameterMask, (unsigned int)Src, (__int64)v24, v11, (__int64)&v18);
    v19 = v17;
    RtlWriteULongToUser(Response, v18);
  }
  else
  {
    v17 = ExRaiseHardError(
            ErrorStatus,
            NumberOfParameters,
            UnicodeStringParameterMask,
            Parameters,
            ValidResponseOptions,
            &v18);
    *Response = v18;
  }
  return v17;
}
