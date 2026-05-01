/*
 * XREFs of ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x1800314AC
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x180031310 (RmgrSrv_RegisterWithServer.c)
 * Callees:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001A85C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        void *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  struct _RM_SERVICE_GLOBALS **v5; // r14
  unsigned int v9; // ebx
  ULONG v11; // eax
  _BYTE v12[80]; // [rsp+30h] [rbp-88h] BYREF

  v5 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  memset_0(v12, 0, 0x44uLL);
  RmpAcquireGlobalLock();
  if ( a4 && a5 )
  {
    v11 = RtlLengthSid(a3);
    memcpy_0(v12, a3, v11);
    v9 = ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(v5, a2, (union _RM_SID *)v12, a4, a5);
  }
  else
  {
    v9 = -2147024809;
  }
  RmpReleaseGlobalLock();
  return v9;
}
