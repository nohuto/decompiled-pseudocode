/*
 * XREFs of sub_140058824 @ 0x140058824
 * Callers:
 *     sub_14007B620 @ 0x14007B620 (sub_14007B620.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 */

void __fastcall sub_140058824(__int64 a1, volatile signed __int32 *a2, int a3, int a4)
{
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-20h]
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_DWORD *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v9 = *(_DWORD *)(a1 + 28);
    v12 = v8;
    if ( !a4 || a4 != v9 || (v10[1] = 0, v10[0] = a3, v11 = a2, !(unsigned __int8)sub_140058B20(a1 + 64, v10, 16LL)) )
      _InterlockedAnd(a2, a3 != 0 ? -5 : -2111);
    sub_14003A998(&v12);
  }
}
