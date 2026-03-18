/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1400369B4
 * Callers:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140098104 (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14013E5A0 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1402062BC (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // esi
  tagObjLock **v17; // rdi
  __int64 Prop; // rdi
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  char v22; // [rsp+48h] [rbp-8h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 42284);
  v9 = 0;
  W32GetUserSessionState(v8, v7);
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v11, v10) == 1 )
  {
    v22 = 1;
    v14 = W32GetUserSessionState(v13, v12);
    v15 = 0LL;
    if ( v5 != v14 + 42480 )
      v15 = v5;
    *(_QWORD *)&v20 = v15;
    v16 = 0;
    v17 = (tagObjLock **)&v20;
    do
    {
      if ( *v17 )
        tagObjLock::LockExclusive(*v17);
      ++v16;
      ++v17;
    }
    while ( !v16 );
    v21 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v21 && v22 && (_QWORD)v20 )
    tagObjLock::UnLockExclusive((tagObjLock *)v20);
  *a2 = Prop;
  LOBYTE(v9) = Prop != 0;
  return v9;
}
