/*
 * XREFs of ??0ReacquireResourceWorkItem@@QEAA@K@Z @ 0x1800F06C0
 * Callers:
 *     ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800F49B0 (-ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z.c)
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x1800F4BC0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 * Callees:
 *     ??0ResourceHandleInfo@@QEAA@XZ @ 0x1800F08F8 (--0ResourceHandleInfo@@QEAA@XZ.c)
 */

ReacquireResourceWorkItem *__fastcall ReacquireResourceWorkItem::ReacquireResourceWorkItem(
        ReacquireResourceWorkItem *this,
        int a2)
{
  __int64 v2; // r8
  ReacquireResourceWorkItem *result; // rax

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = &ReacquireSaResourceWorkItem::`vftable';
  ResourceHandleInfo::ResourceHandleInfo((ReacquireResourceWorkItem *)((char *)this + 32));
  result = (ReacquireResourceWorkItem *)v2;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)(v2 + 488) = 0;
  return result;
}
