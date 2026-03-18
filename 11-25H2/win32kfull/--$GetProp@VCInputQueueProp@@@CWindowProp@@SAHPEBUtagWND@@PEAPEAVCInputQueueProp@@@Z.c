/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x14001F8E0
 * Callers:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1400632B8 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x14011AD5C (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F7BE0 (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // esi
  tagObjLock **v15; // rdi
  __int64 Prop; // rdi
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  char v19; // [rsp+40h] [rbp-20h]
  char v20; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 42256);
  v9 = 0;
  W32GetUserSessionState(v8, v7);
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v20 = 1;
    v12 = W32GetUserSessionState(v11, v10);
    v13 = 0LL;
    if ( v5 != v12 + 42456 )
      v13 = v5;
    *(_QWORD *)&v18 = v13;
    v14 = 0;
    v15 = (tagObjLock **)&v18;
    do
    {
      if ( *v15 )
        tagObjLock::LockExclusive(*v15);
      ++v14;
      ++v15;
    }
    while ( !v14 );
    v19 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v19 && v20 && (_QWORD)v18 )
    tagObjLock::UnLockExclusive((tagObjLock *)v18);
  *a2 = Prop;
  LOBYTE(v9) = Prop != 0;
  return v9;
}
