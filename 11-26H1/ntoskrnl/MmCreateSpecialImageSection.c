/*
 * XREFs of MmCreateSpecialImageSection @ 0x140B880EC
 * Callers:
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140618694 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(_QWORD *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  int v10; // edi
  int v11; // ebx
  int SessionId; // esi
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  char *v16; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v10 = (a6 & 1) != 0 ? 0x1000000 : 37748736;
  v11 = a6 & 1 | 8;
  if ( (a6 & 4) == 0 )
    v11 = a6 & 1;
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (a6 & 8) != 0 )
    v11 |= 0x20u;
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  for ( result = MiCreateSection(&v16, a2, 0, 16, v10, v11, a3, a4, a5, 0LL, 0, SessionId, 0LL);
        (int)result < 0;
        result = MiCreateSection(&v16, a2, 0, 16, v10, v11, a3, a4, a5, 0LL, 0, SessionId, 0LL) )
  {
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v14 = MiSectionControlArea((__int64)v16);
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  CcZeroEndOfLastPage(v15);
  MiDereferenceControlAreaFile(v14, (unsigned __int64)v15);
  result = ObInsertObjectEx(v16, 0LL, 983071, 0, 0, 0LL, &v17);
  if ( (int)result >= 0 )
    *a1 = v17;
  return result;
}
