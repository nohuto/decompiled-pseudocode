/*
 * XREFs of ?FreeNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800F3134
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F4D50 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800F4F64 (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 * Callees:
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800F4F64 (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 */

__int64 __fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::FreeNode(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  bool v5; // zf

  ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)(a2 + 2));
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v5 )
    return ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll(a1);
  return result;
}
