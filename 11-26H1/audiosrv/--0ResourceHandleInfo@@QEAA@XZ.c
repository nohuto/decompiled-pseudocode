/*
 * XREFs of ??0ResourceHandleInfo@@QEAA@XZ @ 0x1800F08F8
 * Callers:
 *     ??0ReacquireResourceWorkItem@@QEAA@K@Z @ 0x1800F06C0 (--0ReacquireResourceWorkItem@@QEAA@K@Z.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 * Callees:
 *     <none>
 */

ResourceHandleInfo *__fastcall ResourceHandleInfo::ResourceHandleInfo(ResourceHandleInfo *this)
{
  ResourceHandleInfo *result; // rax

  *((_OWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 7LL;
  *((_WORD *)this + 152) = 0;
  *((_OWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 45) = 7LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_WORD *)this + 168) = 0;
  *((_OWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 49) = 7LL;
  result = this;
  *((_QWORD *)this + 48) = 0LL;
  *((_WORD *)this + 184) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  return result;
}
