/*
 * XREFs of sub_1800CF814 @ 0x1800CF814
 * Callers:
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800CFAC0 @ 0x1800CFAC0 (sub_1800CFAC0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800CF814(__int64 a1)
{
  void (__fastcall *v2)(__int64, void *, _QWORD, char *); // rbx
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v4 = dword_1801C8F20++;
    sub_1800CFAC0(String, -1LL, "%S(%u)", L"CoreEngine", v4);
    v2 = *(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 24LL);
    v3 = strnlen(String, 0x7FFFFFFFuLL);
    v2(a1, &unk_1800F9CC8, v3, String);
  }
}
