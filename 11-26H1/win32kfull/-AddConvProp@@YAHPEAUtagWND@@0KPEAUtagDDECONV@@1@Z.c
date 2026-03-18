/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1402CC4A8
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1402CC930 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall AddConvProp(
        struct tagWND *a1,
        struct tagWND *a2,
        int a3,
        struct tagDDECONV *a4,
        struct tagDDECONV *a5)
{
  struct tagWND *v7; // rdi
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  char *v18; // [rsp+20h] [rbp-10h] BYREF
  struct tagDDECONV *Prop; // [rsp+28h] [rbp-8h]

  v18 = (char *)a4 + 24;
  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = (struct tagDDECONV *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41376), 1u);
  HMAssignmentLock(&v18, 0LL);
  Prop = a1;
  v18 = (char *)a4 + 40;
  HMAssignmentLock(&v18, 0LL);
  Prop = v7;
  v18 = (char *)a4 + 48;
  HMAssignmentLock(&v18, 0LL);
  v18 = (char *)a4 + 32;
  Prop = a5;
  HMAssignmentLock(&v18, 0LL);
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  *((_DWORD *)a4 + 20) = a3;
  v12 = W32GetUserSessionState(v11, v10);
  if ( (a3 & 1) == 0 )
    v7 = a1;
  v13 = GetProp((__int64)v7, *(unsigned __int16 *)(v12 + 41380), 1u);
  if ( v13 )
    ++*(_WORD *)(v13 + 90);
  *((_QWORD *)a4 + 11) = v13;
  HMLockObject(a4);
  v16 = W32GetUserSessionState(v15, v14);
  InternalSetProp((__int64)a1, *(unsigned __int16 *)(v16 + 41376), (__int64)a4, 1u);
  return 1LL;
}
