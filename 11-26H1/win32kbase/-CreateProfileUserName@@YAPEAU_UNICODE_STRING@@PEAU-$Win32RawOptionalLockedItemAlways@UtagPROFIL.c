/*
 * XREFs of ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400E11C0
 * Callers:
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1400E2140 (-InitPreviousUserString@@YAXXZ.c)
 */

struct _UNICODE_STRING *__fastcall CreateProfileUserName(_QWORD *BugCheckParameter2)
{
  struct _UNICODE_STRING *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _UNICODE_STRING *v5; // rdi
  struct tagTHREADINFO *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  result = (struct _UNICODE_STRING *)Win32AllocPoolWithQuotaZInitImpl((int)BugCheckParameter2, 0x210uLL, 0x6E707355u);
  v5 = result;
  if ( result )
  {
    if ( BugCheckParameter2[2] != -1LL )
    {
      BugCheckParameter4 = PtiCurrent(v4, v3);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter4);
    }
    v6 = PtiCurrent(v4, v3);
    *BugCheckParameter2 = *((_QWORD *)v6 + 47);
    *((_QWORD *)v6 + 47) = BugCheckParameter2;
    BugCheckParameter2[2] = GreDeleteFastMutex;
    BugCheckParameter2[1] = v5;
    v5[32].Length = 0;
    v5[32].MaximumLength = 512;
    v5[32].Buffer = &v5->Length;
    InitPreviousUserString();
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    RtlCopyUnicodeString(v5 + 32, (PCUNICODE_STRING)(UserSessionState + 67816));
    return v5 + 32;
  }
  return result;
}
