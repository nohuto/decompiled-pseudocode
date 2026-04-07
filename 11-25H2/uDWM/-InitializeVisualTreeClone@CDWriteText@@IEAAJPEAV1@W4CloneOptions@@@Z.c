/*
 * XREFs of ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038750
 * Callers:
 *     ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180038ED0 (-CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWriteText::InitializeVisualTreeClone(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CVisual::InitializeVisualTreeClone(a1, (struct tagPOINT *)a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v4,
      v12);
    return v5;
  }
  else
  {
    v6 = a2 + 168;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 168) + 48LL))(a2 + 168);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x191,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v7,
        v12);
      return v8;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(a2 + 168, a1 + 224);
      (**(void (__fastcall ***)(__int64, _QWORD))v6)(a2 + 168, *(unsigned int *)(a1 + 408));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(a2 + 168, *(unsigned int *)(a1 + 412));
      LOBYTE(v9) = *(_BYTE *)(a1 + 424);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(a2 + 168, v9);
      LOBYTE(v10) = *(_BYTE *)(a1 + 425);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(a2 + 168, v10);
      if ( (*(_DWORD *)(a1 + 32) & 0x1000) == 0 )
        *(_DWORD *)(a2 + 32) &= ~0x1000u;
      return 0LL;
    }
  }
}
