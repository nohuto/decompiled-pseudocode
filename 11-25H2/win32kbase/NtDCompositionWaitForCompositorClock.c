/*
 * XREFs of NtDCompositionWaitForCompositorClock @ 0x1400C8930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400C7E8C (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400E8D44 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z @ 0x1401977A8 (-WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtDCompositionWaitForCompositorClock(unsigned int a1, void *Src, unsigned int a3)
{
  int CompositorClockInfo; // ebx
  union _LARGE_INTEGER *v7; // r15
  DirectComposition::CCompClockInfo *v8; // r14
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v10; // rdi
  unsigned int v11; // edx
  DirectComposition::CCompClockInfo *v13; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-150h] BYREF
  void *v15[32]; // [rsp+50h] [rbp-138h] BYREF

  CompositorClockInfo = 0;
  memset(v15, 0, sizeof(v15));
  v7 = 0LL;
  v14[1] = 0LL;
  v14[0] = 0LL;
  v8 = 0LL;
  v13 = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0x20 && Src )
      RtlCopyFromUser(v15, Src, 8LL * a1);
    else
      CompositorClockInfo = -1073741811;
  }
  if ( a3 != -1 )
  {
    v14[0] = -10000LL * a3;
    v7 = (union _LARGE_INTEGER *)v14;
  }
  if ( CompositorClockInfo >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v10 = DefaultConnection;
    if ( DefaultConnection )
    {
      CompositorClockInfo = DirectComposition::CConnection::GetCompositorClockInfo(DefaultConnection, &v13);
      DirectComposition::CConnection::Release(v10, v11);
      v8 = v13;
    }
    else
    {
      CompositorClockInfo = -1073741790;
    }
    KeLeaveCriticalRegion();
    if ( CompositorClockInfo >= 0 )
    {
      CompositorClockInfo = DirectComposition::CCompClockInfo::WaitForTick(v8, a1, v15, v7);
      DirectComposition::CCompClockInfo::Release(v8);
    }
  }
  return (unsigned int)CompositorClockInfo;
}
