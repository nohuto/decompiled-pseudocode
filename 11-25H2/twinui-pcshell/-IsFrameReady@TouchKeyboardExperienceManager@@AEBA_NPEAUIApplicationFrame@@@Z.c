/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1801C5C58
 * Callers:
 *     _lambda_29414a9ca6597666cdb35e84f817c693_::operator() @ 0x18045D410 (_lambda_29414a9ca6597666cdb35e84f817c693_--operator().c)
 *     _lambda_46a8ca2e66b0a909e1f565be00ec5b40_::operator() @ 0x18045D830 (_lambda_46a8ca2e66b0a909e1f565be00ec5b40_--operator().c)
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
