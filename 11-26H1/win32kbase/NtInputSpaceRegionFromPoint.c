/*
 * XREFs of NtInputSpaceRegionFromPoint @ 0x1401E07D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@1@@Z @ 0x140117B48 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x14012DBD0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CLockedInputSpace@@QEAA@XZ @ 0x1401397B0 (--1CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x140211F70 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtInputSpaceRegionFromPoint(struct _LUID a1, __int64 a2, void *a3)
{
  int v6; // edx
  int v7; // r8d
  bool InputSpace; // al
  int v9; // ebx
  PERESOURCE *v11[2]; // [rsp+30h] [rbp-118h] BYREF
  PERESOURCE *v12[2]; // [rsp+40h] [rbp-108h] BYREF
  _OWORD Src[12]; // [rsp+50h] [rbp-F8h] BYREF
  PERESOURCE v14; // [rsp+110h] [rbp-38h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v12, a2, (int)a3);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v11, v6, v7);
  InputSpace = InputConfig::GetInputSpace(a1, (struct CLockedInputSpace *)v12);
  v9 = 0;
  if ( InputSpace && InputConfig::RegionFromPoint(v12, a2, v11, 0) )
  {
    Src[0] = *(_OWORD *)v11[0];
    Src[1] = *((_OWORD *)v11[0] + 1);
    Src[2] = *((_OWORD *)v11[0] + 2);
    Src[3] = *((_OWORD *)v11[0] + 3);
    Src[4] = *((_OWORD *)v11[0] + 4);
    Src[5] = *((_OWORD *)v11[0] + 5);
    Src[6] = *((_OWORD *)v11[0] + 6);
    Src[7] = *((_OWORD *)v11[0] + 7);
    Src[8] = *((_OWORD *)v11[0] + 8);
    Src[9] = *((_OWORD *)v11[0] + 9);
    Src[10] = *((_OWORD *)v11[0] + 10);
    Src[11] = *((_OWORD *)v11[0] + 11);
    v14 = v11[0][24];
    RtlCopyToUser(a3, Src, 0xC8uLL);
    v9 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  CLockedInputSpace::~CLockedInputSpace(v11);
  CLockedInputSpace::~CLockedInputSpace(v12);
  return v9;
}
