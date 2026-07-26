/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x14014A92C
 * Callers:
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014AC28 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140003B58 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008F610 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140167120 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  HANDLE v8; // rcx
  PVOID v9; // rbx
  _BYTE *v10; // rbp
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v13; // ebp
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  const wchar_t *v18; // r14
  _BYTE *v19; // rdx
  _WORD *v20; // rcx
  unsigned int v21; // ebp
  const wchar_t *v22; // rsi
  struct Rtl::KString *v23; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  PVOID v25; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v8 = *a1;
  v9 = 0LL;
  ResultLength = 0;
  v25 = 0LL;
  v10 = KeyValueInformation;
  result = ZwQueryValueKey(v8, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 2052287565LL);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(&v25, Pool2);
    v9 = v25;
    if ( !v25 )
      return -1073741670;
    v13 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v25, ResultLength, &ResultLength);
    v14 = v9;
    if ( v13 < 0 )
    {
      operator delete[](v9);
      return v13;
    }
    v10 = v9;
  }
  else
  {
    v14 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( *((_DWORD *)v10 + 1) != -57326 )
  {
    if ( v14 )
      operator delete[](v14);
    return -1073741788;
  }
  v15 = *((unsigned int *)v10 + 2);
  if ( (v15 & 1) != 0 )
  {
    if ( v14 )
      operator delete[](v14);
    return -1073741811;
  }
  v16 = v15 + 12;
  v17 = 0;
  v18 = (const wchar_t *)(v10 + 12);
  v19 = &v10[v16];
  v20 = v10 + 12;
LABEL_16:
  if ( v20 >= (_WORD *)v19 )
    goto LABEL_36;
  if ( *v20 )
  {
    while ( ++v20 < (_WORD *)v19 )
    {
      if ( !*v20 )
      {
        ++v17;
        ++v20;
        goto LABEL_16;
      }
    }
LABEL_36:
    if ( v9 )
      operator delete[](v9);
    return -1073741789;
  }
  if ( !Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, v17) )
  {
LABEL_30:
    if ( v9 )
      operator delete[](v9);
    return -1073741670;
  }
  v21 = 0;
  while ( *v18 )
  {
    v22 = v18;
    do
      ++v22;
    while ( *v22 );
    v23 = Rtl::KString::Initialize(v18);
    if ( !v23 )
      goto LABEL_30;
    if ( v21 >= *(_DWORD *)(a4 + 4) )
      __fastfail(5u);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
      (void **)(*(_QWORD *)(a4 + 8) + 8LL * v21++),
      v23);
    v18 = v22 + 1;
  }
  if ( v9 )
    operator delete[](v9);
  return 0;
}
