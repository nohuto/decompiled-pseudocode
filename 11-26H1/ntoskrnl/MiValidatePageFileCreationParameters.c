/*
 * XREFs of MiValidatePageFileCreationParameters @ 0x140872C3C
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiValidatePageFileCreationParameters(
        unsigned int *a1,
        _QWORD *a2,
        _QWORD *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v11; // ebx
  __int64 ULong64FromUser; // rdi
  unsigned __int64 v14; // r13
  UNICODE_STRING v15; // xmm0
  unsigned __int64 v16; // rax
  NTSTATUS v17; // eax
  UNICODE_STRING v18; // [rsp+30h] [rbp-68h]
  UNICODE_STRING v19; // [rsp+40h] [rbp-58h]
  UNICODE_STRING v20[2]; // [rsp+50h] [rbp-48h] BYREF

  memset_0(a7, 0, 0x40uLL);
  if ( (a5 & 0x3FFFFF) != 0 )
    return 3221225714LL;
  v11 = 0;
  if ( a5 < 0 && (a5 & 0x42000000) != 0 )
    return 3221225714LL;
  if ( (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
    return 3221225714LL;
  if ( a4
    && (!SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.WaitBlockFill11[152], a4) || PsIsCurrentThreadInServerSilo()) )
  {
    return 3221225569LL;
  }
  if ( a4 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 || ((unsigned __int8)a3 & 3) != 0 || ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    ULong64FromUser = RtlReadULong64FromUser(a2);
  }
  else
  {
    ULong64FromUser = *a2;
  }
  if ( a4 )
    v14 = RtlReadULong64FromUser(a3);
  else
    v14 = *a3;
  if ( a4 )
  {
    *(_DWORD *)(&v18.MaximumLength + 1) = 0;
    *(_DWORD *)&v18.Length = RtlReadULongFromUser(a1);
    v18.Buffer = (wchar_t *)RtlReadULong64FromUser(a1 + 2);
    v15 = v18;
  }
  else
  {
    *(_DWORD *)(&v19.MaximumLength + 1) = 0;
    *(_DWORD *)&v19.Length = *a1;
    v19.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
    v15 = v19;
  }
  v20[1] = v15;
  v20[0] = v15;
  if ( (unsigned __int64)ULong64FromUser > 0xFFFFFFFE000LL || ULong64FromUser < 0x100000 )
    return 3221225712LL;
  if ( v14 > 0xFFFFFFFE000LL )
    return 3221225713LL;
  v16 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( ULong64FromUser > (__int64)v16 )
    return 3221225713LL;
  if ( a5 >= 0 )
  {
    if ( (a5 & 0x2000000) != 0 )
      *((_BYTE *)a7 + 41) = 1;
  }
  else
  {
    *((_WORD *)a7 + 20) = 257;
  }
  *((_DWORD *)a7 + 4) = a5;
  *a7 = a6;
  *((_DWORD *)a7 + 2) = (unsigned __int64)ULong64FromUser >> 12;
  *((_DWORD *)a7 + 3) = v16 >> 12;
  v20[0].MaximumLength = v15.Length;
  if ( (unsigned __int16)(v20[0].Length - 1) > 0xFFu )
    return 3221225523LL;
  v17 = MiDuplicateUnicodeString((UNICODE_STRING *)(a7 + 3), v20, a4);
  if ( v17 < 0 )
    return (unsigned int)v17;
  return v11;
}
