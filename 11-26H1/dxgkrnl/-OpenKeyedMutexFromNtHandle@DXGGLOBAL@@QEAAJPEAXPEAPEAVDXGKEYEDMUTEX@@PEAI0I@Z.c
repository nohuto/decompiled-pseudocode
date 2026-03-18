/*
 * XREFs of ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1401FE3D4
 * Callers:
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1401EBA30 (DxgkOpenKeyedMutexFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutexFromNtHandle(
        DXGGLOBAL *this,
        void *a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 *v12; // rbx
  __int64 v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v16; // eax
  unsigned int v17; // esi
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp+18h] BYREF

  Object = this;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5272;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppKeyedMutex", 5272LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5273;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phKeyedMutex", 5273LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedKeyedMutexObjectType, 1, &Object, &HandleInformation);
  v10 = v9;
  if ( v9 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741788LL);
    result = 3221225508LL;
    WdLogGlobalForLineNumber = 5296;
  }
  else if ( v9 >= 0 )
  {
    v12 = (__int64 *)Object;
    if ( !Object )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5308;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSharedKeyedMutexObject", 5308LL, 0LL, 0LL, 0LL, 0LL);
    }
    v13 = *v12;
    _m_prefetchw((const void *)(v13 + 24));
    v14 = *(_QWORD *)(v13 + 24);
    do
    {
      if ( !v14 )
      {
        ObfDereferenceObject(Object);
        v10 = -1073741811;
        WdLogSingleEntry2(3LL, a2, -1073741811LL);
        WdLogGlobalForLineNumber = 5318;
        return v10;
      }
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), v14 + 1, v14);
    }
    while ( v15 != v14 );
    ObfDereferenceObject(Object);
    v16 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v13, a4, a5, a6, 1);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(3LL, a2, v16);
      WdLogGlobalForLineNumber = 5347;
    }
    else
    {
      *a3 = (struct DXGKEYEDMUTEX *)v13;
    }
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v13);
    return v17;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, v9);
    WdLogGlobalForLineNumber = 5303;
    return v10;
  }
  return result;
}
