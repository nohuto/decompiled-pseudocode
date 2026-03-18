/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400237E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bCreate(RGNOBJ *this, struct EPATHOBJ *a2, const struct EXFORMOBJR *a3)
{
  unsigned int v3; // ebx
  REGION_CORE *v7; // r10
  unsigned int sizeScan; // eax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v7 = (REGION_CORE *)(*(_QWORD *)this + 24LL);
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(unsigned __int64, struct EPATHOBJ *, const struct EXFORMOBJR *, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 272LL))(
             (unsigned __int64)v7 & -(__int64)(*(_QWORD *)this != 0LL),
             a2,
             a3,
             -*(_QWORD *)this);
  sizeScan = REGION_CORE::get_sizeScan(v7);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10, sizeScan);
  if ( v10 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v10, this);
    v3 = RGNOBJ::bOutline((RGNOBJ *)&v10, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  return v3;
}
