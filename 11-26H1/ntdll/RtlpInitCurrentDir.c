/*
 * XREFs of RtlpInitCurrentDir @ 0x1800A4844
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpCreateNewDirectoryReference @ 0x1800A462C (RtlpCreateNewDirectoryReference.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall RtlpInitCurrentDir(__int64 a1)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int v2; // eax
  unsigned __int16 *v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v2 = RtlDetermineDosPathNameType_Ustr(a1) - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 3221225485LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225485LL;
      v9 = v8 - 1;
      if ( !v9 || (unsigned int)(v9 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  result = RtlpCreateNewDirectoryReference(v3, ProcessParameters->CurrentDirectory.DosPath.MaximumLength, &v10);
  if ( (int)result >= 0 )
  {
    v5 = v10;
    RtlpCurDirRef = v10;
    ProcessParameters->CurrentDirectory.Handle = (void *)v10[1];
    ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)v5[4];
    ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v5 + 12);
    return 0LL;
  }
  return result;
}
