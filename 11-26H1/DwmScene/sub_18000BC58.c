/*
 * XREFs of sub_18000BC58 @ 0x18000BC58
 * Callers:
 *     sub_18000BC00 @ 0x18000BC00 (sub_18000BC00.c)
 * Callees:
 *     sub_18000C074 @ 0x18000C074 (sub_18000C074.c)
 *     sub_18000C0B4 @ 0x18000C0B4 (sub_18000C0B4.c)
 *     sub_18000C0F0 @ 0x18000C0F0 (sub_18000C0F0.c)
 *     sub_18000C214 @ 0x18000C214 (sub_18000C214.c)
 *     sub_18000C2E8 @ 0x18000C2E8 (sub_18000C2E8.c)
 *     sub_18000C388 @ 0x18000C388 (sub_18000C388.c)
 *     sub_18000C864 @ 0x18000C864 (sub_18000C864.c)
 *     sub_18000C88C @ 0x18000C88C (sub_18000C88C.c)
 *     sub_18000C8B0 @ 0x18000C8B0 (sub_18000C8B0.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_18000CA48 @ 0x18000CA48 (sub_18000CA48.c)
 *     _initterm @ 0x18000CCD6 (_initterm.c)
 *     _initterm_e @ 0x18000CCE2 (_initterm_e.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000BC58(__int64 a1, __int64 a2)
{
  char v4; // bl
  char v5; // di
  __int64 v6; // rcx
  void (__fastcall **v7)(__int64, __int64, __int64); // rax
  void (__fastcall **v8)(__int64, __int64, __int64); // rbx

  if ( !(unsigned __int8)sub_18000C214(0LL) )
    return 0LL;
  v4 = sub_18000C074();
  v5 = 1;
  if ( dword_1801C7D74 )
  {
    sub_18000C8D4(7LL);
    __debugbreak();
    JUMPOUT(0x18000BD69LL);
  }
  dword_1801C7D74 = 1;
  if ( (unsigned __int8)sub_18000C0F0() )
  {
    sub_18000CA48();
    sub_18000C864();
    sub_18000C88C();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)sub_18000C0B4() )
      {
        initterm((_PVFV *)&qword_1800F50B8, (_PVFV *)&qword_1800F6830);
        dword_1801C7D74 = 2;
        v5 = 0;
      }
    }
  }
  LOBYTE(v6) = v4;
  sub_18000C388(v6);
  if ( v5 )
    return 0LL;
  v7 = (void (__fastcall **)(__int64, __int64, __int64))sub_18000C8B0();
  v8 = v7;
  if ( *v7 )
  {
    if ( (unsigned __int8)sub_18000C2E8(v7) )
      (*v8)(a1, 2LL, a2);
  }
  ++dword_1801C7D70;
  return 1LL;
}
