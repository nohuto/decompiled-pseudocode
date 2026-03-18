/*
 * XREFs of ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x14003A3D0
 * Callers:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14017A58C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14024233C (-IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402453DC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402454B4 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x140245638 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1402E1558 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1402E15F4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1402E16E0 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1402E1774 (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall CWindowProp::GetProp<CoreWindowProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  tagObjLock **v16; // rdi
  int v17; // ebp
  __int64 Prop; // rdi
  __int128 v20; // [rsp+30h] [rbp-48h] BYREF
  char v21; // [rsp+40h] [rbp-38h]
  char v22; // [rsp+48h] [rbp-30h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 42282);
  v21 = 0;
  W32GetUserSessionState(v8, v7);
  v20 = 0LL;
  v22 = 0;
  v13 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v10, v9) == 1 )
  {
    v22 = 1;
    v14 = W32GetUserSessionState(v12, v11);
    v15 = 0LL;
    if ( v5 != v14 + 42480 )
      v15 = v5;
    *(_QWORD *)&v20 = v15;
    v16 = (tagObjLock **)&v20;
    v17 = 0;
    do
    {
      if ( *v16 )
        tagObjLock::LockExclusive(*v16);
      ++v17;
      ++v16;
    }
    while ( !v17 );
    v21 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v21 && v22 && (_QWORD)v20 )
    tagObjLock::UnLockExclusive((tagObjLock *)v20);
  *a2 = Prop;
  LOBYTE(v13) = Prop != 0;
  return v13;
}
