/*
 * XREFs of ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x180123D34
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18012352C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180123760 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCaptureRenderTarget::GetNextBufferIndexAvailable(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rcx
  DWORD v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 345);
  v3 = -1;
  v4 = (__int64)(*((_QWORD *)this + 346) - (_QWORD)v1) >> 3;
  if ( v4 )
  {
    v5 = WaitForMultipleObjects(v4, v1, 0, 0);
    if ( v5 == 258 )
    {
      if ( g_pComposition && *((_BYTE *)g_pComposition + 6465) )
        CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0, 0x2000u);
    }
    else
    {
      if ( v5 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 340) - *((_QWORD *)this + 339)) >> 3) )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      return v5;
    }
  }
  return v3;
}
