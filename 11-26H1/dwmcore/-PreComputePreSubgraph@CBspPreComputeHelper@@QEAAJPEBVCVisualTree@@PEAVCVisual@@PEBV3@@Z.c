/*
 * XREFs of ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x18007FD70
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1800AD3DC (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::PreComputePreSubgraph(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        const struct CVisual *a4)
{
  int v5; // ebp
  _DWORD *v6; // rdx
  _DWORD *v10; // rbx
  __int64 v12; // r8
  _BYTE *v13; // r10
  __int64 v14; // rcx
  _BYTE *v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  void **v18; // rbx
  _DWORD *v19; // rbx
  unsigned int i; // r15d
  _DWORD *v21; // r10
  __int64 v22; // rcx
  unsigned int Slot; // eax
  __int64 v24; // r10
  bool v25; // bl
  __int64 v26; // r8
  char v27; // al
  _DWORD *v28; // rdx
  unsigned int v29; // r8d
  _BYTE *v30; // rax
  __int64 j; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  v6 = (_DWORD *)*((_QWORD *)a3 + 28);
  if ( (*v6 & 0x20000000) == 0 )
    goto LABEL_2;
  v12 = (unsigned int)v6[1];
  v13 = v6 + 2;
  v14 = 0LL;
  if ( (_DWORD)v12 )
  {
    v15 = v6 + 2;
    while ( *v15 != 3 )
    {
      v14 = (unsigned int)(v14 + 1);
      ++v15;
      if ( (unsigned int)v14 >= (unsigned int)v12 )
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    if ( (unsigned int)v14 >= (unsigned int)v12 )
    {
      v16 = 0LL;
      goto LABEL_13;
    }
  }
  v16 = (unsigned __int64)&v6[2 * v14] + ((v12 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_13:
  if ( !*(_QWORD *)v16 || !*(_DWORD *)(*(_QWORD *)v16 + 24LL) )
    goto LABEL_2;
  v17 = 0LL;
  if ( (_DWORD)v12 )
  {
    while ( *v13 != 3 )
    {
      v17 = (unsigned int)(v17 + 1);
      ++v13;
      if ( (unsigned int)v17 >= (unsigned int)v12 )
        goto LABEL_39;
    }
    goto LABEL_17;
  }
LABEL_39:
  if ( (unsigned int)v17 < (unsigned int)v12 )
  {
LABEL_17:
    v18 = (void **)((char *)&v6[2 * v17] + ((v12 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_18;
  }
  v18 = 0LL;
LABEL_18:
  v19 = *v18;
  if ( v19 )
  {
    for ( i = v19[6]; i; ReleaseInterface<CPolygon>(*(_QWORD *)v19 + 8LL * i) )
      --i;
    v19[6] = 0;
    DynArrayImpl<0>::ShrinkToSize(v19, 8LL);
    DynArrayImpl<1>::~DynArrayImpl<1>(v19);
    operator delete(v19, 0x20uLL);
    v21 = (_DWORD *)*((_QWORD *)a3 + 28);
    if ( (*v21 & 0x20000000) != 0 )
    {
      v22 = *((_QWORD *)a3 + 28);
      *v21 &= ~0x20000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v22, 3LL);
      if ( Slot < *(_DWORD *)(v24 + 4) )
        *(_BYTE *)(Slot + v24 + 8) = 0;
    }
  }
LABEL_2:
  v10 = (_DWORD *)((char *)a4 + 108);
  if ( a4 )
  {
    if ( *v10 == 1 )
    {
      v5 = CBspPreComputeHelper::PushStacksForBspChildVisual(this, a2, a3);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4Bu, 0LL);
        return (unsigned int)v5;
      }
    }
  }
  if ( *((_DWORD *)a3 + 27) == 1 )
  {
    v25 = a4 && *v10 == 1;
    if ( (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 232LL))(a3) )
      goto LABEL_31;
    v28 = (_DWORD *)*((_QWORD *)a3 + 28);
    if ( (*v28 & 0x1000000) == 0 )
      goto LABEL_47;
    v29 = v28[1];
    v30 = v28 + 2;
    for ( j = 0LL; (unsigned int)j < v29; ++v30 )
    {
      if ( *v30 == 8 )
        break;
      j = (unsigned int)(j + 1);
    }
    v32 = (unsigned int)v28[1];
    v33 = (unsigned int)j >= (unsigned int)v32
        ? 0LL
        : (_QWORD *)((char *)&v28[2 * j] + ((v32 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v33 + 64LL))(*v33, 51LL) )
LABEL_31:
      v27 = 1;
    else
LABEL_47:
      v27 = 0;
    if ( v25 )
    {
      if ( !v27 )
        goto LABEL_5;
    }
    else if ( !(unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)a3 + 10) )
    {
      goto LABEL_5;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_P3D_BUILDING_BSPTREE_Start,
        v26,
        1u,
        &v34);
    v5 = CBspPreComputeHelper::PushStacksForBspRootVisual(this, a2, a3);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x51u, 0LL);
      return (unsigned int)v5;
    }
  }
LABEL_5:
  ++*((_DWORD *)this + 66);
  return (unsigned int)v5;
}
