/*
 * XREFs of KiIntSteerGetLineInformation @ 0x1404320E4
 * Callers:
 *     KiIntSteerConnect @ 0x140431CC8 (KiIntSteerConnect.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIntSteerGetLineInformation(_DWORD *a1, int *a2, char *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  char v8; // di
  __int64 result; // rax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = -1;
  v4 = 0;
  v8 = 1;
  if ( *a1 )
  {
    if ( *a1 != 3 )
      v4 = -1073741637;
  }
  else
  {
    v10 = a1[14];
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v10) )
    {
      v8 = 0;
      v4 = guard_dispatch_icall_no_overrides(a1, &v10);
    }
    v3 = v10;
  }
  *a2 = v3;
  result = v4;
  *a3 = v8;
  return result;
}
