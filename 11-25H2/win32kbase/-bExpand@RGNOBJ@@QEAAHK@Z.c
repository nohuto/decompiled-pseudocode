/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x140094980
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140010CB0 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x140095278 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x14000E8F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140097360 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x14019C64C (-RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, struct REGION_CORE *a2)
{
  unsigned int v2; // ebx
  const struct REGION_CORE *v5; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( qword_1402A10B0 )
    return Win32kRS::RegionCore_bExpand(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             a2,
             *(_DWORD *)this + 24);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v6, (__int64)a2);
  if ( v6 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v6, this, v5);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v6);
    v2 = 1;
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v6);
  return v2;
}
