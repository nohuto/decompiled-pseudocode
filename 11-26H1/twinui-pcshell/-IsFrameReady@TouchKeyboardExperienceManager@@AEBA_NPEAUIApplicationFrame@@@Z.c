/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1801BC678
 * Callers:
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x1804694FC (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::operator() @ 0x180469BA8 (_lambda_3b092b602b32291197616247ac44fb10_--operator().c)
 *     _lambda_9bbb35718b31022091a790d2d74f2a46_::operator() @ 0x18046AA34 (_lambda_9bbb35718b31022091a790d2d74f2a46_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  TouchKeyboardExperienceManager *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = this;
  v2 = 0;
  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)a2;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, TouchKeyboardExperienceManager **))(v4 + 24))(a2, &v7) < 0 )
    return 0;
  v5 = *(_QWORD *)a2;
  v8 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(v5 + 40))(a2, &v8) < 0 )
    return 0;
  if ( v7 )
    return v8 != 0;
  return v2;
}
