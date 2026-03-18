/*
 * XREFs of ?PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1401EB450
 * Callers:
 *     <none>
 * Callees:
 *     ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1401EB324 (-PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // ebx
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  bool v17; // cl
  __int64 v18; // rax
  bool v19; // al
  unsigned int v20; // edi
  int v21; // eax
  _OWORD v22[3]; // [rsp+30h] [rbp-58h] BYREF

  if ( !a8 )
    return 0LL;
  result = ((__int64 (__fastcall *)(void *, void *, _QWORD, _QWORD))a2)(a1, &unk_140278D88, *(_QWORD *)a8, a8[2]);
  v14 = result;
  if ( (int)result >= 0 )
  {
    UserSessionState = W32GetUserSessionState(v12, v11, v13);
    v16 = *(_QWORD *)(UserSessionState + 72104);
    if ( v16 )
      v17 = *(_DWORD *)(v16 + 48) == 0;
    else
      v17 = 1;
    v18 = *(_QWORD *)(UserSessionState + 72112);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 40) == 0LL;
    else
      v19 = 1;
    if ( !v17 || !v19 )
    {
      v20 = 0;
      v22[0] = xmmword_140278D68;
      v22[1] = xmmword_140278D78;
      v22[2] = xmmword_140278D58;
      do
      {
        if ( v14 < 0 )
          break;
        v21 = PoolLeakLiveDumpAddSecondaryData(a1, a2, (const struct _GUID *)&v22[v20++]);
        v14 = v21;
      }
      while ( v20 < 3 );
    }
    return (unsigned int)v14;
  }
  return result;
}
