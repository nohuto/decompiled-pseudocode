/*
 * XREFs of ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18008B980
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004A620 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemImpersonateUserForHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  unsigned int LastError; // ebx
  HANDLE hToken; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 99);
  hToken = 0LL;
  if ( (unsigned int)QueryUserToken(
                       *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 88LL) + 160LL) + 88LL),
                       &hToken)
    && ImpersonateLoggedOnUser(hToken) )
  {
    LastError = 0;
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hToken )
    NtClose(hToken);
  return LastError;
}
