/*
 * XREFs of ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400A9270
 * Callers:
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1400AA174 (-InitPreviousUserString@@YAXXZ.c)
 */

struct _UNICODE_STRING *__fastcall CreateProfileUserName(_QWORD *BugCheckParameter2)
{
  struct _UNICODE_STRING *result; // rax
  struct _UNICODE_STRING *v3; // rdi
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const UNICODE_STRING *UserSessionState; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax

  result = (struct _UNICODE_STRING *)Win32AllocPoolWithQuotaZInitImpl(
                                       (__int64)BugCheckParameter2,
                                       0x210uLL,
                                       0x6E707355u);
  v3 = result;
  if ( result )
  {
    if ( BugCheckParameter2[2] != -1LL )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
    }
    v4 = PtiCurrent();
    *BugCheckParameter2 = *((_QWORD *)v4 + 48);
    *((_QWORD *)v4 + 48) = BugCheckParameter2;
    BugCheckParameter2[2] = GreDeleteFastMutex;
    BugCheckParameter2[1] = v3;
    v3[32].Length = 0;
    v3[32].MaximumLength = 512;
    v3[32].Buffer = &v3->Length;
    InitPreviousUserString();
    UserSessionState = (const UNICODE_STRING *)W32GetUserSessionState(v6, v5);
    RtlCopyUnicodeString(v3 + 32, UserSessionState + 4239);
    return v3 + 32;
  }
  return result;
}
