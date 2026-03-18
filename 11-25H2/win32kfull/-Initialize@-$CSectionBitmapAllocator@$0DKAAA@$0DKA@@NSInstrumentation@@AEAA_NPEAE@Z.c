/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x140207CCC
 * Callers:
 *     ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14030F468 (-Create@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ??R_lambda_1_@?1??Initialize@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NPEAE@Z@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x140207D98 (--R_lambda_1_@-1--Initialize@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NP.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *Pool2; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  char result; // al
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
  v10 = `NSInstrumentation::CSectionBitmapAllocator<237568,928>::Initialize'::`2'::_lambda_1_::operator()(v9, 232LL);
  if ( !v10 )
    return 0;
  v12 = v10 ^ a1[2];
  result = 1;
  v13 = a2 ^ a1[2];
  a1[3] = v12;
  a1[1] = v13;
  return result;
}
