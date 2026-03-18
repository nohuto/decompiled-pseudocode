/*
 * XREFs of ?PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1401C29A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1401C2878 (-PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PoolLeakLiveDumpCallback(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8)
{
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  bool v16; // cl
  __int64 v17; // rax
  bool v18; // al
  unsigned int v20; // edi
  int v21; // eax
  _OWORD v22[3]; // [rsp+30h] [rbp-58h] BYREF

  if ( !a8 )
    return 0LL;
  result = ((__int64 (__fastcall *)(void *, void *, _QWORD, _QWORD))a2)(a1, &unk_1402700B8, *(_QWORD *)a8, a8[2]);
  v13 = result;
  if ( (int)result >= 0 )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    v15 = *(_QWORD *)(UserSessionState + 72120);
    if ( v15 )
      v16 = *(_DWORD *)(v15 + 48) == 0;
    else
      v16 = 1;
    v17 = *(_QWORD *)(UserSessionState + 72128);
    if ( v17 )
      v18 = *(_QWORD *)(v17 + 40) == 0LL;
    else
      v18 = 1;
    if ( !v16 || !v18 )
    {
      v20 = 0;
      v22[0] = xmmword_140270098;
      v22[1] = xmmword_1402700A8;
      v22[2] = xmmword_140270088;
      do
      {
        if ( v13 < 0 )
          break;
        v21 = PoolLeakLiveDumpAddSecondaryData(a1, a2, (const struct _GUID *)&v22[v20++]);
        v13 = v21;
      }
      while ( v20 < 3 );
    }
    return (unsigned int)v13;
  }
  return result;
}
