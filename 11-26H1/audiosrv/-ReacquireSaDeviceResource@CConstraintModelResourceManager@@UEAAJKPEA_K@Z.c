/*
 * XREFs of ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x1800F4BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800693E4 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 *     ??1?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAA@XZ @ 0x180085F78 (--1-$unique_ptr@VReacquireResourceWorkItem@@U-$default_delete@VReacquireResourceWorkItem@@@std@@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@?$unique_ptr@VReacquireResourceWorkItem@@U?$default_delete@VReacquireResourceWorkItem@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EFE98 (--$-4U-$default_delete@VReacquireResourceWorkItem@@@std@@$0A@@-$unique_ptr@VReacquireResourceWor.c)
 *     ??0ReacquireResourceWorkItem@@QEAA@K@Z @ 0x1800F06C0 (--0ReacquireResourceWorkItem@@QEAA@K@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        int a2,
        unsigned __int64 *a3)
{
  ReacquireResourceWorkItem *v6; // rax
  _QWORD *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ReacquireResourceWorkItem *v14; // [rsp+40h] [rbp+18h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( !a3 || !*a3 )
    goto LABEL_12;
  v6 = (ReacquireResourceWorkItem *)operator new[](0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    ReacquireResourceWorkItem::ReacquireResourceWorkItem(v6, a2);
    v7[2] = a3;
    *v7 = &ReacquireSaResourceWorkItem::`vftable';
    v7[3] = *a3;
  }
  else
  {
    v7 = 0LL;
  }
  v15 = v7;
  std::unique_ptr<ReacquireResourceWorkItem>::operator=<std::default_delete<ReacquireResourceWorkItem>,0>(
    (__int64 *)&v14,
    (__int64 *)&v15);
  std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(&v15);
  if ( v14 )
  {
    v11 = CConstraintModelResourceManager::AddWorkItemToQueue(this, v14);
    v8 = v11;
    if ( v11 < 0 )
    {
      v10 = (unsigned int)v11;
      v9 = 1418LL;
      goto LABEL_8;
    }
    v14 = 0LL;
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  v8 = -2147024882;
  v9 = 1416LL;
  v10 = 2147942414LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
    (const char *)v10);
LABEL_13:
  std::unique_ptr<ReacquireResourceWorkItem>::~unique_ptr<ReacquireResourceWorkItem>(&v14);
  return v8;
}
