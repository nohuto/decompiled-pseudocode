/*
 * XREFs of ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180039650
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18000F64C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180038190 (-CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180039590 (-CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A1640 (-CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x1800397F8 (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemBackdropVisual::Create(int a1, CSystemBackdropVisual **a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // ecx
  CBaseObject *v7; // rax
  CSystemBackdropVisual *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebp
  void **v11; // rcx
  CBaseObject *v12; // rax
  CBaseObject *v13; // rax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v16; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v4 = a1 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v3 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x27,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
          (const char *)0x8000FFFFLL,
          v14);
        return v3;
      }
      v12 = (CBaseObject *)DefaultHeap::AllocClear(0xD0uLL);
      v8 = v12;
      v16 = v12;
      if ( v12 )
      {
        memset_0(v12, 0, 0xD0uLL);
        CSystemBackdropVisual::CSystemBackdropVisual(v8);
        v11 = &CLightMicaSystemBackdropVisual::`vftable';
        goto LABEL_12;
      }
    }
    else
    {
      v13 = (CBaseObject *)DefaultHeap::AllocClear(0xD0uLL);
      v8 = v13;
      v16 = v13;
      if ( v13 )
      {
        memset_0(v13, 0, 0xD0uLL);
        CSystemBackdropVisual::CSystemBackdropVisual(v8);
        v11 = &CAcrylicSystemBackdropVisual::`vftable';
        goto LABEL_12;
      }
    }
LABEL_7:
    v8 = 0LL;
    goto LABEL_8;
  }
  v7 = (CBaseObject *)DefaultHeap::AllocClear(0xD0uLL);
  v8 = v7;
  v16 = v7;
  if ( !v7 )
    goto LABEL_7;
  memset_0(v7, 0, 0xD0uLL);
  CSystemBackdropVisual::CSystemBackdropVisual(v8);
  v11 = &CMicaSystemBackdropVisual::`vftable';
LABEL_12:
  *(_QWORD *)v8 = v11;
LABEL_8:
  v16 = v8;
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(CSystemBackdropVisual *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v8;
      return v3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v9,
      v14);
    CBaseObject::Release(v8);
    return v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)0x8007000ELL,
      v14);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v16);
    return 2147942414LL;
  }
}
