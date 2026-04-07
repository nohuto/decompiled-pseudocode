/*
 * XREFs of ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038458
 * Callers:
 *     ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800372C0 (-CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x18005AA50 (-SetText@CDWriteText@@UEAAJPEBG@Z.c)
 *     ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z @ 0x1800700E0 (-SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetColor@CDWriteText@@UEAAXK@Z @ 0x180075B20 (-SetColor@CDWriteText@@UEAAXK@Z.c)
 *     ?SetRTLReading@CDWriteText@@UEAAX_N@Z @ 0x180075B90 (-SetRTLReading@CDWriteText@@UEAAX_N@Z.c)
 *     ?SetReverseAlignment@CDWriteText@@UEAAX_N@Z @ 0x180076060 (-SetReverseAlignment@CDWriteText@@UEAAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDWriteText::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  const unsigned __int16 *v8; // rdx
  CDWriteText *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CContainerVisual::InitializeVisualTreeClone(a1, (CContainerVisual *)a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (const unsigned __int16 *)(a1 + 232);
    v9 = (CDWriteText *)(a2 + 184);
    if ( *(_QWORD *)(a1 + 256) > 7uLL )
      v8 = *(const unsigned __int16 **)v8;
    v10 = CDWriteText::SetText((CDWriteText *)(a2 + 184), v8);
    v11 = v10;
    if ( v10 >= 0 )
    {
      CDWriteText::SetFont(v9, (const struct tagLOGFONTW *)(a1 + 264));
      CDWriteText::SetColor(v9, *(_DWORD *)(a1 + 448));
      CDWriteText::SetRTLReading(v9, *(_BYTE *)(a1 + 464));
      CDWriteText::SetReverseAlignment(v9, *(_BYTE *)(a1 + 465));
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v10,
        v12);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v5,
      v12);
    return v6;
  }
}
