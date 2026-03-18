/*
 * XREFs of ?GetPixelFormatInfo@CSwapChainRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802AD900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CSwapChainRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 128) + 24LL))(v2 + 128);
  }
  else
  {
    *a2 = 0;
    v4 = 3;
    if ( *(_DWORD *)(a1 + 72) )
      v4 = *(_DWORD *)(a1 + 72);
    a2[1] = v4;
    a2[2] = *(_DWORD *)(a1 + 120);
  }
  return a2;
}
