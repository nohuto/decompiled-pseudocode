/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14011ACA4
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011AC24 (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     ??R_lambda_1_@?1??Initialize@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x14011AD70 (--R_lambda_1_@-1--Initialize@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NP.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *Pool2; // rax
  __int64 v9; // rcx
  char result; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v4 = __rdtsc();
  Seed = v4;
  a1[2] = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  v5 = RtlRandomEx(&Seed);
  v6 = (v5 | a1[2]) == 0LL;
  a1[2] |= v5;
  v7 = a1[2];
  if ( v6 )
  {
    a1[2] = 1LL;
    v7 = 1LL;
  }
  a1[3] ^= v7;
  Pool2 = (_QWORD *)ExAllocatePool2(258LL, 8LL, 1869834581LL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 0;
  *Pool2 = 0LL;
  v11 = `NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Initialize'::`2'::_lambda_1_::operator()(v9, 222LL);
  if ( !v11 )
    return 0;
  v12 = v11 ^ a1[2];
  result = 1;
  v13 = a2 ^ a1[2];
  a1[3] = v12;
  a1[1] = v13;
  return result;
}
