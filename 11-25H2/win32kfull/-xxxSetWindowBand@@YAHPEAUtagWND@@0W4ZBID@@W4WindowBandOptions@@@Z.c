/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x14015CF34
 * Callers:
 *     NtUserSetWindowBand @ 0x14015C390 (NtUserSetWindowBand.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402C9C7C (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     _BeginDeferWindowPos @ 0x14004E2E8 (_BeginDeferWindowPos.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x14015D040 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x14015D0A4 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 */

__int64 __fastcall xxxSetWindowBand(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  struct tagWND *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagSMWP *v9; // rbx
  struct tagTHREADINFO *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  int v16; // [rsp+20h] [rbp-50h] BYREF
  struct tagSMWP *v17[3]; // [rsp+28h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+90h] [rbp+20h] BYREF
  int v21; // [rsp+98h] [rbp+28h] BYREF

  v21 = a4;
  v20 = a3;
  v17[0] = 0LL;
  v16 = 19;
  if ( (a4 & 4) != 0 )
    v16 = 394263;
  v19[0] = v17;
  v19[1] = &v16;
  v19[2] = &v20;
  v19[3] = &v21;
  v17[0] = (struct tagSMWP *)BeginDeferWindowPos(0LL, a2);
  if ( !v17[0] )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v19, a1, a2);
  if ( !v17[0] )
    return 0LL;
  v6 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1592LL);
  v17[1] = (struct tagSMWP *)v19;
  if ( !v6 )
    v6 = a1;
  v17[2] = (struct tagSMWP *)&v20;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v6);
  v9 = v17[0];
  if ( !v17[0] )
    return 0LL;
  v10 = PtiCurrent(v8, v7);
  Win32HM_LockIntoThread<0>((__int64)v10, (__int64)v9, BugCheckParameter3);
  v11 = xxxEndDeferWindowPosEx(v17[0], 1LL);
  v14 = PtiCurrent(v13, v12);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, BugCheckParameter3);
  return v11;
}
