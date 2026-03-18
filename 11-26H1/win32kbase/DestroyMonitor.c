/*
 * XREFs of DestroyMonitor @ 0x1401181C0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     RIMOnDestroyMonitor @ 0x1401183E8 (RIMOnDestroyMonitor.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1401C1A20 (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 */

__int64 __fastcall DestroyMonitor(struct _HEAD *a1, int a2, int a3)
{
  struct _HANDLEENTRY *v4; // rax
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rdi
  __int64 UserSessionState; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  __int64 result; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rax
  char *v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 *i; // rax
  signed __int32 v37[10]; // [rsp+0h] [rbp-28h] BYREF
  char v38; // [rsp+30h] [rbp+8h] BYREF

  v38 = 0;
  v4 = (struct _HANDLEENTRY *)HMPheFromObjectWorker(a1, a2, a3);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v38, v4, v5);
  RIMOnDestroyMonitor(a1);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 56968);
  if ( *(_QWORD *)(v9 + 104)
    && (v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 56968), *(struct _HEAD **)(v10 + 104) == a1) )
  {
    v34 = *((_QWORD *)a1 + 7);
    v12 = *(__int64 **)(W32GetUserSessionState(v10, v9, v11) + 56968);
    v13 = *v12;
    if ( v34 )
      v35 = *(_QWORD *)(v34 + 48);
    else
      v35 = 0LL;
    *(_QWORD *)(v13 + 16) = v35;
    v12[13] = v34;
  }
  else
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 56968);
    if ( *(_QWORD *)(v13 + 104) )
    {
      for ( i = (__int64 *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, (_DWORD)v12, v14) + 56968) + 104LL)
                          + 56LL); ; i = (__int64 *)(v13 + 56) )
      {
        v13 = *i;
        if ( !*i )
          break;
        if ( (struct _HEAD *)v13 == a1 )
        {
          v13 = *((_QWORD *)a1 + 7);
          v12 = (__int64 *)*(i - 2);
          if ( v13 )
            v14 = *(_QWORD *)(v13 + 48);
          else
            v14 = 0LL;
          v12[2] = v14;
          *i = v13;
          break;
        }
      }
    }
  }
  v16 = *(_QWORD *)(W32GetUserSessionState(v13, (_DWORD)v12, v14) + 56968);
  if ( a1 == *(struct _HEAD **)(v16 + 96) )
  {
    v19 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 56968);
    v21 = *(_QWORD *)(v19 + 104);
    if ( !v21 )
    {
      UserSessionState = W32GetUserSessionState(v19, v18, v20);
      v19 = *(_QWORD *)(UserSessionState + 71192);
      if ( (struct _HEAD *)v19 != a1 )
        v21 = *(_QWORD *)(UserSessionState + 71192);
    }
    v23 = *(_QWORD **)(W32GetUserSessionState(v19, v18, v20) + 56968);
    if ( v21 )
      v24 = *(_QWORD *)(v21 + 48);
    else
      v24 = 0LL;
    *(_QWORD *)(*v23 + 8LL) = v24;
    v23[12] = v21;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  _InterlockedOr(v37, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  result = HMMarkObjectDestroy(a1, v25, v26);
  if ( (_DWORD)result )
  {
    v32 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v32 )
    {
      --*v32;
      v33 = (char *)*((_QWORD *)a1 + 16);
      if ( !*(_DWORD *)v33 )
        GreDeleteFastMutex(v33, v28, v30, v31);
      *((_QWORD *)a1 + 16) = 0LL;
    }
    result = HMFreeObject(a1);
  }
  if ( v38 )
  {
    result = W32GetUserSessionState(v29, v28, v30);
    *(_QWORD *)(result + 19800) = 0LL;
  }
  return result;
}
