/*
 * XREFs of sub_140078FA0 @ 0x140078FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DAC0 @ 0x14001DAC0 (sub_14001DAC0.c)
 *     sub_14001DB9C @ 0x14001DB9C (sub_14001DB9C.c)
 *     sub_140037C58 @ 0x140037C58 (sub_140037C58.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     sub_140040814 @ 0x140040814 (sub_140040814.c)
 */

__int64 __fastcall sub_140078FA0(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // bp
  int v4; // edi
  int v5; // ebx
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  v2 = 0LL;
  v10 = 0LL;
  v3 = 0;
  sub_14003E0E8(&v11, (RTL_SRWLOCK *)(a1 + 80), &v9);
  v4 = v9;
  if ( v9 >= 0 )
  {
    sub_140037C58((__int64)&v9);
    v5 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    sub_14001DAC0(a1, &v10, &v9);
    v6 = v5 == 0;
    v2 = v10;
    v3 = !v6;
  }
  if ( v11 )
  {
    v7 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  sub_14001DB9C(v2);
  if ( v4 >= 0 && v3 )
    return (unsigned int)sub_140040814();
  return (unsigned int)v4;
}
