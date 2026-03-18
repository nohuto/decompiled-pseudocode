/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x14011C10C
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x14011C08C (-Create@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     ??R_lambda_123fb472502fd0eaa02b2792812379e1_@@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x14019D538 (--R_lambda_123fb472502fd0eaa02b2792812379e1_@@QEBAPEAU_RTL_BITMAP@@I@Z.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<40960,160>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *Pool2; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char result; // al
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
  v10 = _lambda_123fb472502fd0eaa02b2792812379e1_::operator()(v9, 250LL);
  if ( !v10 )
    return 0;
  v11 = v10 ^ a1[2];
  result = 1;
  v13 = a2 ^ a1[2];
  a1[3] = v11;
  a1[1] = v13;
  return result;
}
