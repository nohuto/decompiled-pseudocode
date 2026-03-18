/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x140178728
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C629C (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+28h] [rbp-10h]
  ULONG_PTR v6; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = HmgPentryFromPobj(this);
  *(_BYTE *)(v2 + 15) |= 4u;
  DC::AcquireDcVisRgnExclusive(this);
  v6 = *((_QWORD *)this + 142);
  RGNOBJ::vDeleteRGNOBJ(&v6);
  *((_QWORD *)this + 142) = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 4160LL);
  if ( v5 )
    CPushLock::ReleaseLock((CPushLock *)(v4 + 1112));
}
