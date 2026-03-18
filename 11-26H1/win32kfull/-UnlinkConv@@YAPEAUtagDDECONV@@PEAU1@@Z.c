/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402CCB9C
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1402CDDE4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402CE020 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  if ( !*((_QWORD *)a1 + 5) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(*((_QWORD *)a1 + 5), *(unsigned __int16 *)(UserSessionState + 41376), 1u);
  if ( !Prop )
    return 0LL;
  v6 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v6 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v8 = (__int64 *)((char *)a1 + 24);
  if ( v6 )
  {
    v14[0] = v6 + 24;
    v14[1] = *v8;
    HMAssignmentLock(v14, 0LL);
  }
  else
  {
    v9 = *v8;
    v10 = W32GetUserSessionState(0LL, v5);
    v11 = *((_QWORD *)a1 + 5);
    v12 = *(unsigned __int16 *)(v10 + 41376);
    if ( v9 )
      InternalSetProp(v11, v12, v9, 1u);
    else
      InternalRemoveProp(v11, v12, 1u);
  }
  v13 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject(a1);
  return (struct tagDDECONV *)v13;
}
