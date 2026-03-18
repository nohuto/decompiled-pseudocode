/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x140041120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _SystemParametersInfoForDpi @ 0x1400412AC (_SystemParametersInfoForDpi.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  size_t v11; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int v13; // edx
  int v14; // r9d
  int v15; // ebx
  _DWORD *Address; // [rsp+50h] [rbp-28h]
  _DWORD *Src; // [rsp+90h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  if ( !a5 || !a3 )
    goto LABEL_12;
  switch ( a1 )
  {
    case 41:
      v10 = 504;
      break;
    case 31:
      v10 = 92;
      break;
    case 45:
      v10 = 108;
      break;
    default:
      goto LABEL_12;
  }
  if ( a2 != v10 )
  {
LABEL_12:
    v15 = 0;
    UserSetLastError(87);
    goto LABEL_9;
  }
  Address = a3;
  v11 = v10;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8);
  ProbeForWrite(Address, (unsigned int)v11, CurrentProcessWow64Process != 0 ? 1 : 4);
  Src = (_DWORD *)Win32AllocPoolWithQuotaZInit((unsigned int)v11, 2037674837LL);
  if ( !Src )
    ExRaiseStatus(-1073741801);
  *Src = *Address;
  v15 = SystemParametersInfoForDpi(a1, v13, (_DWORD)Src, v14, a5);
  memmove(Address, Src, v11);
  Win32FreePool(Src);
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v15;
}
