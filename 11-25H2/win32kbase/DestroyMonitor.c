/*
 * XREFs of DestroyMonitor @ 0x1400F63A0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1400CEAF8 (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     RIMOnDestroyMonitor @ 0x1400F6568 (RIMOnDestroyMonitor.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1400F65DC (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z @ 0x1401554EC (--4-$SharedMixedObjectPointerFieldpMonitorNext@UtagMONITOR@@@tagMONITOR@@QEAAPEAU1@PEAU1@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1401A2618 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1, __int64 a2)
{
  struct _HANDLEENTRY *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 i; // rcx
  struct tagMONITOR *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  char *v25; // rcx
  signed __int32 v26[10]; // [rsp+0h] [rbp-28h] BYREF
  char v27; // [rsp+30h] [rbp+8h] BYREF

  v27 = 0;
  v3 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1, a2);
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v27, v3);
  RIMOnDestroyMonitor(a1);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  if ( *(_QWORD *)(v6 + 112)
    && (v7 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968), *(struct tagMONITOR **)(v7 + 112) == a1) )
  {
    v8 = *((_QWORD *)a1 + 7);
    UserSessionState = W32GetUserSessionState(v7, v6);
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
      *(_QWORD *)(UserSessionState + 56968) + 112LL,
      v8);
  }
  else
  {
    i = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968);
    if ( *(_QWORD *)(i + 112) )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(i, v10) + 56968) + 112LL) + 56LL; ; i = (__int64)v12 + 56 )
      {
        v12 = *(struct tagMONITOR **)i;
        if ( !*(_QWORD *)i )
          break;
        if ( v12 == a1 )
        {
          tagMONITOR::SharedMixedObjectPointerFieldpMonitorNext<tagMONITOR>::operator=(i, *((_QWORD *)a1 + 7));
          break;
        }
      }
    }
  }
  v14 = *(_QWORD *)(W32GetUserSessionState(i, v10) + 56968);
  if ( a1 == *(struct tagMONITOR **)(v14 + 104) )
  {
    v16 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 56968);
    v17 = *(_QWORD *)(v16 + 112);
    if ( !v17 )
    {
      v18 = W32GetUserSessionState(v16, v15);
      v16 = *(_QWORD *)(v18 + 71208);
      if ( (struct tagMONITOR *)v16 != a1 )
        v17 = *(_QWORD *)(v18 + 71208);
    }
    v19 = W32GetUserSessionState(v16, v15);
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)(*(_QWORD *)(v19 + 56968) + 104LL),
      v17);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  _InterlockedOr(v26, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  result = HMMarkObjectDestroy(a1, v20);
  if ( (_DWORD)result )
  {
    v24 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v24 )
    {
      --*v24;
      v25 = (char *)*((_QWORD *)a1 + 16);
      if ( !*(_DWORD *)v25 )
        GreDeleteFastMutex(v25);
      *((_QWORD *)a1 + 16) = 0LL;
    }
    result = HMFreeObject(a1);
  }
  if ( v27 )
  {
    result = W32GetUserSessionState(v23, v22);
    *(_QWORD *)(result + 19768) = 0LL;
  }
  return result;
}
