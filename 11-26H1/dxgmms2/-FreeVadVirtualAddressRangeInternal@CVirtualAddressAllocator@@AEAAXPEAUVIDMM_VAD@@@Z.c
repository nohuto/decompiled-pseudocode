/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x140105A6C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x140105CBC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?FreeVirtualAddressRangeByVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140106104 (-FreeVirtualAddressRangeByVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x140113A8C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C943C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CC758 (-RemoveVadFromReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140104E98 (-FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x14011056C (-ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?ValidateVadInTheOrderedListByLink@CVirtualAddressAllocator@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140112E68 (-ValidateVadInTheOrderedListByLink@CVirtualAddressAllocator@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     RemoveVaRangeCb @ 0x1401139C4 (RemoveVaRangeCb.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rcx
  struct VIDMM_VAD *v5; // rbx
  _QWORD *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  _QWORD **v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  VIDMM_MAPPED_VA_RANGE *v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 **v21; // rdx
  __int64 **v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // r8
  struct _LIST_ENTRY **v25; // r14
  struct _LIST_ENTRY **v26; // rsi
  __int64 v27; // rdx
  struct VIDMM_VAD **v28; // rax
  char *v29; // rsi
  struct _LIST_ENTRY **v30; // r14
  struct _LIST_ENTRY **v31; // rbp
  __int64 v32; // rcx
  char **v33; // rax

  v2 = (_QWORD *)((char *)a2 + 56);
  v4 = *((_QWORD *)a2 + 7);
  v5 = a2;
  if ( v4 )
  {
    if ( *(_QWORD **)(v4 + 8) != v2 || (v6 = (_QWORD *)*((_QWORD *)a2 + 8), (_QWORD *)*v6 != v2) )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    *v2 = 0LL;
  }
  v7 = 0;
  if ( (*((_DWORD *)v5 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v8 = v7 + 4LL;
      v9 = 3 * v8;
      v10 = (_QWORD *)*((_QWORD *)v5 + 3 * v8);
      if ( v10 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v11 = v10;
              if ( !*v10 )
                break;
              v10 = (_QWORD *)*v10;
              *v11 = 0LL;
            }
            v12 = v10 + 1;
            if ( !v10[1] )
              break;
            v10 = (_QWORD *)v10[1];
            *v12 = 0LL;
          }
          v13 = v10[2];
          RemoveVaRangeCb(v10, this);
          v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v14 )
            break;
          v10 = (_QWORD *)v14;
        }
      }
      *((_QWORD *)v5 + v9) = 0LL;
      if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
      {
        v15 = (_QWORD **)((char *)v5 + 8 * v9 + 8);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == v15 )
            break;
          if ( (_QWORD **)v16[1] != v15 )
            goto LABEL_30;
          v17 = (_QWORD *)*v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 )
            goto LABEL_30;
          *v15 = v17;
          v17[1] = v15;
          v18 = (VIDMM_MAPPED_VA_RANGE *)(v16 - 1);
          *((_DWORD *)v16 + 16) &= ~0x8000u;
          v19 = v16 + 3;
          v20 = *v19;
          if ( *v19 )
          {
            if ( *(__int64 **)(v20 + 8) != v19 )
              goto LABEL_30;
            v21 = (__int64 **)v19[1];
            if ( *v21 != v19 )
              goto LABEL_30;
            *v21 = (__int64 *)v20;
            *(_QWORD *)(v20 + 8) = v21;
            *v19 = 0LL;
          }
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v18);
        }
      }
      ++v7;
    }
    while ( v7 < ((*((_DWORD *)v5 + 18) >> 4) & 0x7Fu) );
  }
  CVirtualAddressAllocator::RemoveVadFromReservedList(this, v5);
  v22 = (__int64 **)((char *)v5 + 80);
  while ( 1 )
  {
    v23 = *v22;
    v24 = **v22;
    if ( (__int64 **)(*v22)[1] != v22 || *(__int64 **)(v24 + 8) != v23 )
      goto LABEL_30;
    *v22 = (__int64 *)v24;
    *(_QWORD *)(v24 + 8) = v22;
    if ( v23 == (__int64 *)v22 )
      break;
    *(_QWORD *)v23[2] = 0LL;
    *v23 = 0LL;
    v23[1] = 0LL;
  }
  v25 = (struct _LIST_ENTRY **)*((_QWORD *)v5 + 6);
  if ( v25 != (struct _LIST_ENTRY **)((char *)this + 32) )
  {
    v26 = v25 - 5;
    if ( *((struct _LIST_ENTRY **)v5 + 3) == *(v25 - 1) && ((_DWORD)v26[9] & 0xF) == 1 )
    {
      CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v25 - 5), v24);
      v26[4] = (struct _LIST_ENTRY *)*((_QWORD *)v5 + 4);
      v27 = *((_QWORD *)v5 + 5);
      if ( *(struct VIDMM_VAD **)(v27 + 8) != (struct VIDMM_VAD *)((char *)v5 + 40) )
        goto LABEL_30;
      v28 = (struct VIDMM_VAD **)*((_QWORD *)v5 + 6);
      if ( *v28 != (struct VIDMM_VAD *)((char *)v5 + 40) )
        goto LABEL_30;
      *v28 = (struct VIDMM_VAD *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      CVirtualAddressAllocator::FreeVad(this, v5);
      v5 = (struct VIDMM_VAD *)(v25 - 5);
    }
    CVirtualAddressAllocator::ValidateVadInTheOrderedList(this, (struct VIDMM_VAD *)(v25 - 5));
    CVirtualAddressAllocator::ValidateVadInTheOrderedListByLink(this, v25[1]);
    CVirtualAddressAllocator::ValidateVadInTheOrderedListByLink(this, *v25);
  }
  v29 = (char *)v5 + 40;
  v30 = (struct _LIST_ENTRY **)*((_QWORD *)v5 + 5);
  if ( v30 != (struct _LIST_ENTRY **)((char *)this + 32) )
  {
    v31 = v30 - 5;
    if ( *((struct _LIST_ENTRY **)v5 + 4) == *(v30 - 2) && ((_DWORD)v31[9] & 0xF) == 1 )
    {
      CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v30 - 5), v24);
      v31[3] = (struct _LIST_ENTRY *)*((_QWORD *)v5 + 3);
      v32 = *(_QWORD *)v29;
      if ( *(char **)(*(_QWORD *)v29 + 8LL) == v29 )
      {
        v33 = (char **)*((_QWORD *)v5 + 6);
        if ( *v33 == v29 )
        {
          *v33 = (char *)v32;
          *(_QWORD *)(v32 + 8) = v33;
          CVirtualAddressAllocator::FreeVad(this, v5);
          v5 = (struct VIDMM_VAD *)(v30 - 5);
          CVirtualAddressAllocator::ValidateVadInTheOrderedList(this, (struct VIDMM_VAD *)(v30 - 5));
          CVirtualAddressAllocator::ValidateVadInTheOrderedListByLink(this, v30[1]);
          CVirtualAddressAllocator::ValidateVadInTheOrderedListByLink(this, *v30);
          goto LABEL_44;
        }
      }
LABEL_30:
      __fastfail(3u);
    }
  }
LABEL_44:
  CVirtualAddressAllocator::InsertVadToFreeList(this, v5, v24);
}
