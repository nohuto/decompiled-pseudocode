/*
 * XREFs of sub_14013477C @ 0x14013477C
 * Callers:
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 * Callees:
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140138200 @ 0x140138200 (sub_140138200.c)
 *     sub_1401383F0 @ 0x1401383F0 (sub_1401383F0.c)
 *     sub_1401386B4 @ 0x1401386B4 (sub_1401386B4.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14013477C(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  _OWORD *v9; // r10
  int v10; // eax
  char v12[8]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-70h] BYREF
  int v14; // [rsp+68h] [rbp-50h]

  if ( *(_DWORD *)(a1 + 32) == 512 && a3 <= 1 )
  {
    v6 = sub_140136180(a1, a2);
    if ( !v6 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        v14 = 0;
        memset(v13, 0, sizeof(v13));
        if ( (v9 || (v10 = sub_140138200(v8, v7, 33794, 3, (__int64)v13 + 4, 32, (__int64)v13), v9 = v13, v10 >= 0))
          && (v10 = sub_14013A37C(a1, a2, 0x900000006LL, v9), v10 >= 0)
          && (v10 = sub_1401386B4(a1, a2, a3), v10 >= 0)
          || (v6 = sub_1401361CC(a1, a2, (unsigned int)v10), v6 >= 0) )
        {
          v12[0] = 1;
          v6 = sub_1401383F0(a1, a2, 196609, 8, (__int64)v12, 1, 8);
          if ( v6 >= 0 )
            sub_140085F28(*(int **)a1, "TcglibActivateLockingSpEx success", a3, 0, 0LL);
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
