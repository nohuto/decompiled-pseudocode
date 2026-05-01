/*
 * XREFs of _lambda_5724401cb3353ab75381b91154028014_::operator() @ 0x1801BE408
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d___::Run @ 0x1801BE380 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5724401cb3353ab75381b91154028014_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  char v4; // r8
  bool v5; // cl
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1[1];
  v3 = a1[2];
  v4 = 1;
  v7 = v1;
  v8 = v3;
  v5 = (int)v1 > 0 && SHIDWORD(v1) > 0;
  if ( (int)v3 <= 0 || SHIDWORD(v3) <= 0 )
    v4 = 0;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(*a1 + 120LL) + 192LL))(
           *(_QWORD *)(*a1 + 120LL),
           (unsigned __int64)&v7 & -(__int64)v5,
           (unsigned __int64)&v8 & -(__int64)(v4 != 0));
}
