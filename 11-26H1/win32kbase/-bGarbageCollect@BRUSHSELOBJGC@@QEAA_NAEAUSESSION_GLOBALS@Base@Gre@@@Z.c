/*
 * XREFs of ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC
 * Callers:
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1ED4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ?vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x14016C468 (-vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

char __fastcall BRUSHSELOBJGC::bGarbageCollect(struct HOBJ__ ***this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  HSURF v4; // rbx
  char v5; // bl
  unsigned int *v7[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v8; // [rsp+40h] [rbp-18h]

  v4 = (HSURF)(*this)[3];
  if ( v4 )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v7, (__int64)a2);
    v8 = 0LL;
    SURFREF::vLockAll((SURFREF *)v7, v4);
    if ( v8 )
    {
      if ( (*(_DWORD *)(HmgPentryFromPobj((__int64)a2) + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        (*this)[3] = 0LL;
        if ( (unsigned int)Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline() )
          HmgDecrementShareReferenceCount((__int64)a2, v8);
      }
    }
    SURFREF::~SURFREF(v7);
  }
  v5 = 1;
  if ( !(unsigned int)bDeleteBrush(**this, 1, 1) )
    return 0;
  *this = 0LL;
  return v5;
}
