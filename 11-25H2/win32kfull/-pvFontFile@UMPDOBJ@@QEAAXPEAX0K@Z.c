/*
 * XREFs of ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1400D5B7C
 * Callers:
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1400D5310 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     Feature_2056530233__private_IsEnabledDeviceUsageNoInline @ 0x140337F04 (Feature_2056530233__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UMPDOBJ::pvFontFile(UMPDOBJ *this, void *a2, void *a3, int a4)
{
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rbx

  if ( (unsigned int)Feature_2056530233__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    *((_QWORD *)this + 49) = v10;
    ObfReferenceObject(*(PVOID *)v10);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  }
  else
  {
    *((_QWORD *)this + 49) = PsGetCurrentProcess();
  }
  *((_QWORD *)this + 46) = a3;
  *((_DWORD *)this + 97) = a4;
  *((_QWORD *)this + 47) = a2;
}
