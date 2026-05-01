/*
 * XREFs of ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x18007BBEC
 * Callers:
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CBD8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CC30 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampManagerEnumerateDependencyGroups(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_DEPENDENCY_GROUP *a2)
{
  _QWORD *v4; // rbp
  _QWORD **v5; // r14
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _QWORD *v9; // rsi

  v4 = 0LL;
  HampManagerAcquireLockShared(a1);
  v5 = (_QWORD **)((char *)a1 + 496);
  if ( a2 )
    v6 = (_QWORD *)*((_QWORD *)a2 + 5);
  else
    v6 = *v5;
  while ( v6 != v5 )
  {
    v4 = v6 - 5;
    _m_prefetchw(v6 + 7);
    v7 = v6[7];
    while ( (unsigned __int64)(v7 + 1) > 1 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(v4 + 12, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_12;
    }
    if ( v7 )
      __fastfail(0xEu);
    v6 = (_QWORD *)*v6;
  }
LABEL_12:
  HampManagerReleaseLockShared(a1);
  v9 = 0LL;
  if ( v6 != v5 )
    v9 = v4;
  if ( a2 )
    HampDepGroupDereference(a2);
  return (struct _HAM_DEPENDENCY_GROUP *)v9;
}
