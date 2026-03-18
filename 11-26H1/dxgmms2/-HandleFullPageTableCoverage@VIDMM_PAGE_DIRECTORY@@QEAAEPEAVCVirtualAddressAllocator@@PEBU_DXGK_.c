/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x140129CD8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DAFA0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline @ 0x14004F21C (Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x14011133C (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        char a8,
        unsigned __int64 a9,
        unsigned __int8 *a10,
        unsigned __int8 *a11)
{
  char v11; // bp
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  _DWORD *v14; // r12
  __int64 *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r9
  _QWORD *v21; // r10
  unsigned __int8 *v22; // rcx
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  char v29; // [rsp+88h] [rbp+40h]

  v11 = 0;
  v12 = -1LL;
  v13 = *((_QWORD *)a2 + 12);
  v14 = 0LL;
  v29 = 0;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v11 = *(_BYTE *)(v13 + 41065) & 1;
    }
    else
    {
      if ( (*(_DWORD *)this & 0x20) == 0 || !*((_BYTE *)a4 + 80) )
        return 0;
      IsEnabledNoReportingNoInline = Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline();
      v24 = *((_QWORD *)a4 + 11);
      if ( !IsEnabledNoReportingNoInline )
      {
        if ( !v24 || v24 >= *((_QWORD *)a5 + 5) )
        {
          v12 = a9 + *((_QWORD *)a4 + 3) + (*((_QWORD *)a4 + 5) << 12);
          if ( (a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v12) == 0 )
          {
            v14 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v13 + 40384));
            if ( v14 )
              goto LABEL_3;
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 7130;
          }
        }
        return 0;
      }
      if ( v24 )
        return 0;
      v12 = a9 + *((_QWORD *)a4 + 3) + (*((_QWORD *)a4 + 5) << 12);
      if ( (a3->Value & 0x100) == 0 && (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v12) != 0 )
        return 0;
      v14 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v13 + 40384));
      if ( v14 )
        goto LABEL_3;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 7084;
    }
    if ( v11 )
      goto LABEL_3;
    return 0;
  }
  v29 = 1;
LABEL_3:
  v18 = (__int64 *)((char *)this + 48);
  v19 = 16LL * a6;
  v20 = a6;
  if ( (*(_BYTE *)(v19 + *((_QWORD *)this + 6)) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6);
    v20 = a6;
    *a10 = 1;
    *a11 = 1;
  }
  v21 = (_QWORD *)((char *)this + 48);
  if ( a7 == a6 || (*(_BYTE *)(*v18 + 16LL * a7) & 1) == 0 )
  {
    v22 = a10;
  }
  else
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7);
    v22 = a10;
    v21 = (_QWORD *)((char *)this + 48);
    v20 = a6;
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v29 )
  {
    v26 = *v18;
    *v22 = 1;
    *(_QWORD *)(v19 + v26) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v27 = *v18;
    if ( v11 )
    {
      *(_QWORD *)(v27 + 16LL * a6) |= 2uLL;
    }
    else
    {
      *(_QWORD *)(v27 + 16LL * a6) |= 0x400uLL;
      *(_QWORD *)(v19 + *v21 + 8) = v12 >> 12;
      *(_QWORD *)(v19 + *v21) = (32LL * *((unsigned int *)a4 + 18)) ^ (*(_QWORD *)(v19 + *v21) ^ (32LL
                                                                                                * *((unsigned int *)a4
                                                                                                  + 18))) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)(v19 + *v21) = *(_QWORD *)a4 ^ (*(_QWORD *)(v19 + *v21) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFF7uLL;
      *(_QWORD *)(v19 + *v21) = *(_QWORD *)a4 ^ (*(_QWORD *)(v19 + *v21) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFEFuLL;
      *(_QWORD *)(v19 + *v21) = *(_QWORD *)a4 ^ (*(_QWORD *)(v19 + *v21) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFFBuLL;
      *(_QWORD *)(v19 + *v21) = *(_QWORD *)a4 ^ (*(_QWORD *)(v19 + *v21) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFE07FFuLL;
      v14[2] = *((_DWORD *)a4 + 14);
      *(_QWORD *)v14 = *((_QWORD *)a4 + 6);
      *((_QWORD *)v14 + 2) = *((_QWORD *)a4 + 2);
      *((_QWORD *)v14 + 3) = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v20);
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v20) = v14;
    }
  }
  return 1;
}
