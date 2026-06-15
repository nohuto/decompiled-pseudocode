/*
 * XREFs of ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800F49B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800693E4 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 *     ??1?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAA@XZ @ 0x180085F78 (--1-$unique_ptr@VReacquireResourceWorkItem@@U-$default_delete@VReacquireResourceWorkItem@@@std@@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EFE98 (--$-4U-$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@-$unique_ptr@VReacquireResourceWor.c)
 *     ??0ReacquireResourceWorkItem@@QEAA@K@Z @ 0x1800F06C0 (--0ReacquireResourceWorkItem@@QEAA@K@Z.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800F0EC4 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireResourceGroup(
        CConstraintModelResourceManager *this,
        int a2,
        struct ResourceHandleInfo *a3)
{
  unsigned int v3; // ebx
  ReacquireResourceWorkItem *v7; // rax
  ReacquireResourceWorkItem *v8; // rdi
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ReacquireResourceWorkItem *v13; // [rsp+50h] [rbp+18h] BYREF
  ReacquireResourceWorkItem *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v13 = 0LL;
  if ( *((_QWORD *)a3 + 56) )
  {
    v7 = (ReacquireResourceWorkItem *)operator new[](0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      ReacquireResourceWorkItem::ReacquireResourceWorkItem(v7, a2);
      *(_QWORD *)v8 = &ReacquireResourceGroupWorkItem::`vftable';
      ResourceHandleInfo::operator=((__int64)v8 + 32, (__int64)a3);
    }
    else
    {
      v8 = 0LL;
    }
    v14 = v8;
    std::unique_ptr<ReacquireResourceWorkItem>::operator=<std::default_delete<ReacquireResourceWorkItem>,0>(
      (__int64 *)&v13,
      (__int64 *)&v14);
    std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(&v14);
    if ( v13 )
    {
      v9 = CConstraintModelResourceManager::AddWorkItemToQueue(this, v13);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v13 = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
          (const char *)(unsigned int)v9);
        v3 = v10;
      }
    }
    else
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
        (const char *)0x8007000ELL);
    }
  }
  std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(&v13);
  return v3;
}
