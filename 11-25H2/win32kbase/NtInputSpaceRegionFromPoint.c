/*
 * XREFs of NtInputSpaceRegionFromPoint @ 0x1401BA120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@1@@Z @ 0x1400D01A8 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E7680 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CLockedInputSpace@@QEAA@XZ @ 0x1400F39F4 (--1CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1401F77D8 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtInputSpaceRegionFromPoint(struct _LUID a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  bool InputSpace; // al
  int v8; // ebx
  PERESOURCE *v10[2]; // [rsp+30h] [rbp-128h] BYREF
  PERESOURCE *v11[4]; // [rsp+40h] [rbp-118h] BYREF
  _OWORD Src[12]; // [rsp+60h] [rbp-F8h] BYREF
  PERESOURCE v13; // [rsp+120h] [rbp-38h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v11, a2);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v10, v6);
  InputSpace = InputConfig::GetInputSpace(a1, (struct CLockedInputSpace *)v11);
  v8 = 0;
  if ( InputSpace && InputConfig::RegionFromPoint(v11, a2, v10, 0) )
  {
    Src[0] = *(_OWORD *)v10[0];
    Src[1] = *((_OWORD *)v10[0] + 1);
    Src[2] = *((_OWORD *)v10[0] + 2);
    Src[3] = *((_OWORD *)v10[0] + 3);
    Src[4] = *((_OWORD *)v10[0] + 4);
    Src[5] = *((_OWORD *)v10[0] + 5);
    Src[6] = *((_OWORD *)v10[0] + 6);
    Src[7] = *((_OWORD *)v10[0] + 7);
    Src[8] = *((_OWORD *)v10[0] + 8);
    Src[9] = *((_OWORD *)v10[0] + 9);
    Src[10] = *((_OWORD *)v10[0] + 10);
    Src[11] = *((_OWORD *)v10[0] + 11);
    v13 = v10[0][24];
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a3, Src, 0xC8uLL);
    v8 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  CLockedInputSpace::~CLockedInputSpace(v10);
  CLockedInputSpace::~CLockedInputSpace(v11);
  return v8;
}
