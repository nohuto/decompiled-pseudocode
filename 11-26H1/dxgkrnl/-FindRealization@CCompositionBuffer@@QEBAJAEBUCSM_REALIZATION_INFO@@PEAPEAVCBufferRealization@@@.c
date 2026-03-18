/*
 * XREFs of ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1400546B0
 * Callers:
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1400A2DC0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1400A3AB0 (-RemoveRealization@CCompositionBuffer@@MEAAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::FindRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  int v3; // r9d
  _QWORD **v4; // rcx
  unsigned int v5; // r10d
  _QWORD *v6; // rax
  struct CBufferRealization *v7; // rax

  v3 = 0;
  *a3 = 0LL;
  v4 = (_QWORD **)((char *)this + 272);
  v5 = -1073741275;
  v6 = *v4;
  while ( v6 != v4 )
  {
    if ( v3 == *((_DWORD *)a2 + 1) )
    {
      v7 = (struct CBufferRealization *)(v6 - 1);
      if ( v7 )
      {
        *a3 = v7;
        return 0;
      }
      return v5;
    }
    v6 = (_QWORD *)*v6;
    ++v3;
  }
  return v5;
}
