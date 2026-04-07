/*
 * XREFs of ?ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z @ 0x180073960
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CDWMDisplaySet::ApplyUniformSpaceMapping(CDWMDisplaySet *this, struct DXGIOutputInfo *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( (unsigned int)GetUniformSpaceMapping(*((_QWORD *)a2 + 13), &v3) )
    *(_OWORD *)((char *)a2 + 204) = v3;
}
