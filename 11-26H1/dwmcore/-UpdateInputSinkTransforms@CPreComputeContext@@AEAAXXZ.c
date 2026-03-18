/*
 * XREFs of ?UpdateInputSinkTransforms@CPreComputeContext@@AEAAXXZ @ 0x180193F38
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CPreComputeContext::UpdateInputSinkTransforms(CPreComputeContext *this)
{
  char *v1; // rbx
  void *v2; // rcx

  v1 = (char *)this + 1432;
  if ( *((_DWORD *)this + 364) )
    NtUpdateInputSinkTransforms(*(_QWORD *)v1);
  v2 = *(void **)v1;
  *((_DWORD *)v1 + 6) = 0;
  if ( v2 != *((void **)v1 + 1) )
  {
    operator delete(v2);
    *(_QWORD *)v1 = *((_QWORD *)v1 + 1);
    *((_DWORD *)v1 + 5) = *((_DWORD *)v1 + 4);
  }
}
