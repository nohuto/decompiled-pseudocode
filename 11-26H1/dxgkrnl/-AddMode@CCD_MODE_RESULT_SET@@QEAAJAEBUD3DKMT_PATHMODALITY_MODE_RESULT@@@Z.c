/*
 * XREFs of ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1403FB510
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14002E224 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall CCD_MODE_RESULT_SET::AddMode(
        CCD_MODE_RESULT_SET *this,
        const struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  _QWORD *v4; // rbp
  _DWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax

  if ( (**(unsigned __int8 (__fastcall ***)(CCD_MODE_RESULT_SET *))this)(this) )
  {
    v4 = (_QWORD *)((char *)this + 16);
    v5 = (_DWORD *)((char *)this + 48);
    if ( (_QWORD *)*v4 != v4 && *v5 != 50 * (*v5 / 0x32u) )
    {
      v6 = (_QWORD *)(*((_QWORD *)this + 3) - 8LL);
      if ( *((_QWORD *)this + 3) == 8LL )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6140;
      }
LABEL_6:
      v7 = *((_OWORD *)a2 + 1);
      v8 = 14LL * (*v5 % 0x32u);
      *(_OWORD *)&v6[v8 + 3] = *(_OWORD *)a2;
      v9 = *((_OWORD *)a2 + 2);
      *(_OWORD *)&v6[v8 + 5] = v7;
      v10 = *((_OWORD *)a2 + 3);
      *(_OWORD *)&v6[v8 + 7] = v9;
      v11 = *((_OWORD *)a2 + 4);
      *(_OWORD *)&v6[v8 + 9] = v10;
      v12 = *((_OWORD *)a2 + 5);
      *(_OWORD *)&v6[v8 + 11] = v11;
      v13 = *((_OWORD *)a2 + 6);
      *(_OWORD *)&v6[v8 + 13] = v12;
      *(_OWORD *)&v6[v8 + 15] = v13;
      ++*v5;
      return 0LL;
    }
    v15 = operator new(0x15F8uLL, 0x4B677844u, 256LL);
    v6 = (_QWORD *)v15;
    if ( v15 )
    {
      memset((void *)(v15 + 24), 0, 0x15E0uLL);
      v6[1] = 0LL;
      *v6 = &SetElement::`vftable';
      v6[2] = 0LL;
      if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
              (__int64)this,
              (__int64)v6) )
      {
        v16 = (_QWORD *)*((_QWORD *)this + 3);
        v17 = v6 + 1;
        if ( (_QWORD *)*v16 != v4 )
          __fastfail(3u);
        *v17 = v4;
        v6[2] = v16;
        *v16 = v17;
        *((_QWORD *)this + 3) = v17;
        ++*((_QWORD *)this + 4);
      }
      goto LABEL_6;
    }
  }
  return 3221225495LL;
}
