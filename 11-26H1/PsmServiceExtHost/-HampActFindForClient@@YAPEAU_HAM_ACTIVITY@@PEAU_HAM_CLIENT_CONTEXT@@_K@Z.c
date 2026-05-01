/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800115D8
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180016D8C (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x18007A724 (-HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007AFC8 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007B130 (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v11 = a2;
  v4 = (v2 & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) + 424;
  RtlAcquireSRWLockShared(v4 + 16);
  v5 = 0LL;
  v6 = *(_QWORD *)v4;
  v7 = *(_BYTE *)(v4 + 8) & 1;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    if ( v6 )
    {
      v6 ^= v4;
      goto LABEL_9;
    }
    goto LABEL_21;
  }
LABEL_9:
  while ( v6 )
  {
    v8 = HampActCompareByHandle(&v11, (void *)v6);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)v6;
    }
    else
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
    }
    if ( v7 && v9 )
      v6 ^= v9;
    else
      v6 = v9;
  }
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 24) )
    {
LABEL_21:
      v6 = 0LL;
      goto LABEL_13;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_13:
  RtlReleaseSRWLockShared(v4 + 16);
  if ( v6 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v6 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v6;
    else
      CemRcObjectDereference(v6);
  }
  return (struct _HAM_ACTIVITY *)v5;
}
