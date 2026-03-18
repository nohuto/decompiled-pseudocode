/*
 * XREFs of ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x14011EA74
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14002C070 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     IntersectWithParents @ 0x14002CFAC (IntersectWithParents.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateParents(struct tagWND *a1, int a2)
{
  struct tagWND *v3; // r8
  __int64 v4; // rax
  int v5; // r15d
  int v6; // ebp
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  HRGN v19; // r14
  int v20; // ebx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  HRGN v25; // [rsp+30h] [rbp-48h] BYREF
  __int128 v26; // [rsp+38h] [rbp-40h] BYREF
  struct tagRECT v27; // [rsp+48h] [rbp-30h] BYREF

  v27 = 0LL;
  v3 = a1;
  v26 = 0LL;
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  while ( (*(_BYTE *)(v4 + 31) & 0x40) != 0 )
  {
    v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
    v4 = *((_QWORD *)v3 + 5);
  }
  v6 = 0;
  v7 = a1;
  if ( *(char *)(*((_QWORD *)v3 + 5) + 18LL) < 0 )
    v6 = a2;
  while ( 1 )
  {
    do
    {
      v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
      if ( v7 )
      {
        v8 = *((_QWORD *)v7 + 5);
        if ( (*(_BYTE *)(v8 + 31) & 2) == 0 )
          continue;
      }
      return 1LL;
    }
    while ( !*(_QWORD *)(v8 + 136) );
    if ( v6 )
      break;
    if ( !v5 )
    {
      v5 = 1;
      v26 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      if ( !(unsigned int)IntersectWithParents((__int64)a1, (int *)&v26) )
        return 1LL;
      UserSessionState = W32GetUserSessionState(v11, v10);
      SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 63352), &v26);
      v15 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
      if ( v15 )
      {
        v21 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 63352);
        v24 = W32GetUserSessionState(v23, v22);
        if ( !(unsigned int)GreCombineRgn(*(_QWORD *)(v24 + 63352), v21, v15, 1LL) )
          return 1LL;
      }
    }
    v27 = *(struct tagRECT *)(*((_QWORD *)v7 + 5) + 88LL);
    if ( !(unsigned int)IntersectWithParents((__int64)v7, &v27.left) )
      return 1LL;
    v25 = *(HRGN *)(W32GetUserSessionState(v17, v16) + 63352);
    v18 = LogicalToPhysicalInPlaceRgnWorker(a1, &v25, 0);
    v19 = v25;
    v20 = v18;
    InternalInvalidate2(v7, v25, v25, &v27, 0x8048u);
    if ( v20 )
      GreDeleteObject(v19);
  }
  return 0LL;
}
