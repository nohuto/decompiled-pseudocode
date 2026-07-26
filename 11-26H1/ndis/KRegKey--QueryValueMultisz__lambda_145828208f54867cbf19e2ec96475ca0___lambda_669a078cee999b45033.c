/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014C91C
 * Callers:
 *     ndisLoadNamedFilterAltitudes @ 0x14014E884 (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x140003DEC (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008F610 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x14014D8D0 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
        HANDLE *a1,
        _UNICODE_STRING *a2)
{
  HANDLE v4; // rcx
  PVOID v5; // rbx
  _BYTE *v6; // rdi
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v9; // edi
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  _WORD *v14; // rsi
  _BYTE *v15; // rdx
  _WORD *v16; // rcx
  _WORD *v17; // rdi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Atom; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  v5 = 0LL;
  ResultLength = 0;
  Atom = 0LL;
  v6 = KeyValueInformation;
  result = ZwQueryValueKey(v4, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 2052287565LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&Atom, Pool2);
    v5 = Atom;
    if ( !Atom )
      return -1073741670;
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, Atom, ResultLength, &ResultLength);
    v10 = v5;
    if ( v9 < 0 )
    {
      operator delete[](v5);
      return v9;
    }
    v6 = v5;
  }
  else
  {
    v10 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( *((_DWORD *)v6 + 1) != 7 )
  {
    if ( v10 )
      operator delete[](v10);
    return -1073741788;
  }
  v11 = *((unsigned int *)v6 + 2);
  if ( (v11 & 1) != 0 )
  {
    if ( v10 )
      operator delete[](v10);
    return -1073741811;
  }
  v12 = v11 + 12;
  v13 = 0;
  v14 = v6 + 12;
  v15 = &v6[v12];
  v16 = v6 + 12;
LABEL_16:
  if ( v16 >= (_WORD *)v15 )
    goto LABEL_33;
  if ( *v16 )
  {
    while ( ++v16 < (_WORD *)v15 )
    {
      if ( !*v16 )
      {
        ++v13;
        ++v16;
        goto LABEL_16;
      }
    }
LABEL_33:
    if ( v5 )
      operator delete[](v5);
    return -1073741789;
  }
  if ( !Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((unsigned int *)qword_14011F6E0 + 18, v13 + 4LL) )
  {
LABEL_27:
    if ( v5 )
      operator delete[](v5);
    return -1073741670;
  }
  while ( *v14 )
  {
    v17 = v14;
    do
      ++v17;
    while ( *v17 );
    Atom = (PVOID)Rtl::KStringAtomTableBase<1>::GetAtom(qword_14011F6E0, v14);
    if ( !Atom )
      goto LABEL_27;
    Rtl::KArray<Rtl::_KStringAtom *,1>::append((char *)qword_14011F6E0 + 72, &Atom);
    v14 = v17 + 1;
  }
  if ( v5 )
    operator delete[](v5);
  return 0;
}
