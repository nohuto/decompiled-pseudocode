/*
 * XREFs of CrmActivityPolicyTableEntryGet @ 0x18005A910
 * Callers:
 *     CrmActivityStart @ 0x180034D80 (CrmActivityStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmActivityPolicyTableEntryGet(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 *v6; // rax
  int v7; // ecx
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-40h]
  _DWORD Key[4]; // [rsp+40h] [rbp-38h] BYREF

  Key[0] = a1;
  v9 = 0LL;
  v10 = 0;
  Key[2] = 0;
  Key[1] = a2;
  v6 = (unsigned __int64 *)bsearch(Key, &CrmActivityToPolicyTable, 0x5DuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( v6 )
    goto LABEL_5;
  if ( a1 - 9 <= 0x7C && a2 - 301 <= 0x7C )
  {
    v9 = __PAIR64__(a2, a1);
    v6 = &v9;
    v10 = 17;
LABEL_5:
    *(_QWORD *)a3 = *v6;
    v7 = *((_DWORD *)v6 + 2);
    result = 0LL;
    *(_DWORD *)(a3 + 8) = v7;
    return result;
  }
  return 3221226021LL;
}
