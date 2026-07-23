/*
 * XREFs of SymCryptSha1Result @ 0x180024140
 * Callers:
 *     RtlCreateServiceSid @ 0x180023780 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800242C0 (RtlCreateVirtualAccountSid.c)
 *     A_SHAFinal @ 0x180158678 (A_SHAFinal.c)
 * Callees:
 *     SymCryptSha1Init @ 0x180024290 (SymCryptSha1Init.c)
 *     SymCryptSha1AppendBlocks @ 0x1800E9570 (SymCryptSha1AppendBlocks.c)
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SymCryptSha1Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v10 = 0LL;
  *((_BYTE *)a1 + v2 + 32) = 0x80;
  v5 = a1 + 24;
  v6 = (unsigned int)(v2 + 1);
  if ( (unsigned int)v6 > 0x38 )
  {
    memset_thunk_772440563353939046((char *)a1 + v6 + 32, 0, (unsigned int)(64 - v6));
    ((void (__fastcall *)(unsigned int *, unsigned int *, __int64, __int64 *))SymCryptSha1AppendBlocks)(
      v5,
      a1 + 8,
      64LL,
      &v10);
    v6 = 0LL;
  }
  memset_thunk_772440563353939046((char *)a1 + v6 + 32, 0, (unsigned int)(64 - v6));
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  ((void (__fastcall *)(unsigned int *, unsigned int *, __int64, __int64 *))SymCryptSha1AppendBlocks)(
    v5,
    a1 + 8,
    64LL,
    &v10);
  v7 = 2LL;
  do
  {
    v8 = *(_QWORD *)v5;
    v5 += 2;
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  *(_DWORD *)a2 = _byteswap_ulong(*v5);
  SymCryptWipeAsm(a1, 128LL);
  return SymCryptSha1Init(a1);
}
