/*
 * XREFs of ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18028920C
 * Callers:
 *     ?Initialize@CCompositionTextLine@@MEAAJXZ @ 0x18026B650 (-Initialize@CCompositionTextLine@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::Create(struct CComposition *a1, struct CClipBrush **a2)
{
  struct CClipBrush *v4; // rax
  struct CClipBrush *v5; // rbx
  struct CClipBrush *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  struct CClipBrush *v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (struct CClipBrush *)DefaultHeap::AllocClear(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    v6 = v4;
    *((_QWORD *)v4 + 3) = a1;
    *((_QWORD *)v4 + 4) = 2LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    *((_QWORD *)v4 + 10) = 0LL;
    *(_QWORD *)v4 = &CClipBrush::`vftable'{for `CContent'};
    *((_QWORD *)v4 + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
    *((_QWORD *)v4 + 11) = 0LL;
    *((_BYTE *)v4 + 96) = 0;
    *((_QWORD *)v4 + 13) = 0LL;
    *((_OWORD *)v4 + 7) = 0LL;
    v7 = *(_QWORD *)v4;
    v11 = v5;
    (*(void (__fastcall **)(struct CClipBrush *))(v7 + 8))(v6);
    v8 = (*(__int64 (__fastcall **)(struct CClipBrush *))(*(_QWORD *)v5 + 56LL))(v5);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x17u, 0LL);
    }
    else
    {
      v11 = 0LL;
      *a2 = v5;
    }
  }
  else
  {
    v9 = -2147024882;
    v11 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v9;
}
