/*
 * XREFs of ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180072F90
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800720B0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075C80 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CMegaRectCollection::ComputeOcclusion(CMegaRectCollection *this)
{
  CMegaRectCollection *v1; // r14
  unsigned __int64 v2; // rbp
  _QWORD *v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  const struct FastRegion::Internal::CRgnData *v14; // rdx
  const struct FastRegion::Internal::CRgnData *v15; // rcx
  int v16; // eax
  FastRegion::Internal::CRgnData *v17; // rcx
  int v18; // r15d
  int v19; // edx
  int v20; // r10d
  _DWORD *v21; // r15
  char *v22; // r8
  _BYTE *v23; // r11
  _DWORD *v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r11
  int *v30; // r15
  int v31; // ecx
  int v32; // eax
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v34; // rax
  int v35; // [rsp+20h] [rbp-178h]
  FastRegion::Internal::CRgnData *v36; // [rsp+28h] [rbp-170h]
  void *v37; // [rsp+28h] [rbp-170h]
  __int64 v38; // [rsp+38h] [rbp-160h]
  _QWORD *v40; // [rsp+48h] [rbp-150h]
  int v41; // [rsp+50h] [rbp-148h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+58h] [rbp-140h]
  _BYTE v43[256]; // [rsp+60h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v1 = this;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_QWORD **)this;
  if ( v2 >= (unsigned int)CCommonRegistryData::MegaRectSearchCount )
    v2 = (unsigned int)CCommonRegistryData::MegaRectSearchCount;
  v4 = *((_QWORD *)this + 3) + *((_QWORD *)this + 5);
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = v3 ? *v3 : 0LL;
      v6 = v4 >> 1;
      v7 = 8 * (v4 & 1);
      v38 = v7;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((v4 >> 1) & (*(_QWORD *)(v5 + 16) - 1LL))) + v7)
                     + 84LL) == 5 )
        break;
LABEL_20:
      ++v4;
      if ( !v2 )
        return;
    }
    v8 = *(_QWORD **)v1;
    v9 = *((_QWORD *)v1 + 3);
    v40 = *(_QWORD **)v1;
    while ( 1 )
    {
      if ( v9 == v4 )
      {
        --v2;
        goto LABEL_20;
      }
      v10 = v8 ? *v8 : 0LL;
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((*(_QWORD *)(v10 + 16) - 1LL) & (v9 >> 1)))
                      + 8 * (v9 & 1));
      v12 = v3 ? *v3 : 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8 * (v6 & (*(_QWORD *)(v12 + 16) - 1LL))) + v7);
      v14 = *(const struct FastRegion::Internal::CRgnData **)(v13 + 96);
      if ( *(_DWORD *)v14 )
        break;
      v18 = 0;
LABEL_36:
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1B7,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
          (const char *)(unsigned int)v18,
          v35);
      v8 = v40;
      ++v9;
    }
    v15 = *(const struct FastRegion::Internal::CRgnData **)(v11 + 96);
    if ( !*(_DWORD *)v15 )
    {
      v18 = 0;
      goto LABEL_36;
    }
    v16 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v15, v14);
    v17 = (FastRegion::Internal::CRgnData *)v43;
    lpMem = (FastRegion::Internal::CRgnData *)v43;
    v41 = v16;
    if ( (unsigned __int64)v16 > 0x100 )
    {
      v34 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v16);
      v17 = v34;
      if ( !v34 )
      {
        v18 = -2147024882;
LABEL_35:
        v7 = v38;
        v6 = v4 >> 1;
        goto LABEL_36;
      }
      lpMem = v34;
    }
    FastRegion::Internal::CRgnData::Subtract(
      v17,
      *(const struct FastRegion::Internal::CRgnData **)(v11 + 96),
      *(const struct FastRegion::Internal::CRgnData **)(v13 + 96));
    v18 = 0;
    v36 = lpMem;
    if ( *(_DWORD *)lpMem )
    {
      if ( v43 == (_BYTE *)lpMem )
      {
        v30 = (int *)(v11 + 104);
        v31 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            + 8 * *(_DWORD *)lpMem
            - *((_DWORD *)lpMem + 4)
            - 12
            + 8 * (*(_DWORD *)lpMem - 1)
            + 24;
        v32 = 60;
        v35 = v31;
        if ( v11 + 104 != *(_QWORD *)(v11 + 96) )
          v32 = *v30;
        if ( v32 < v31 )
        {
          v37 = MIDL_user_allocate(v31);
          if ( !v37 )
          {
            v18 = -2147024882;
            goto LABEL_32;
          }
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(v11 + 96));
          *(_QWORD *)(v11 + 96) = v37;
          *v30 = v35;
        }
        v19 = *(_DWORD *)lpMem;
        v20 = 0;
        v21 = *(_DWORD **)(v11 + 96);
        *v21 = *(_DWORD *)lpMem;
        v21[1] = *((_DWORD *)lpMem + 1);
        v21[2] = *((_DWORD *)lpMem + 2);
        v22 = (char *)&v21[2 * v19 + 3];
        v23 = (char *)lpMem + *((int *)lpMem + 4) + 12;
        if ( v19 > 0 )
        {
          v24 = v21 + 3;
          do
          {
            *v24 = *(_DWORD *)((char *)v24 + lpMem - (FastRegion::Internal::CRgnData *)v21);
            v24 += 2;
            v25 = v20++;
            v21[2 * v25 + 4] = 4 * ((v22 - v23) >> 2)
                             + (_DWORD)lpMem
                             + 8 * v25
                             + *((_DWORD *)lpMem + 2 * v25 + 4)
                             - ((_DWORD)v21
                              + 8 * v25);
          }
          while ( v20 < *v21 );
          v1 = this;
        }
        v26 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
        v27 = (unsigned __int64)((int)v26 + *(_DWORD *)(v26 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
        v28 = (int)v27;
        if ( (int)v27 > 0 )
        {
          v29 = v23 - v22;
          do
          {
            *(_DWORD *)v22 = *(_DWORD *)&v22[v29];
            v22 += 4;
            --v28;
          }
          while ( v28 );
        }
        v18 = 0;
        goto LABEL_32;
      }
      lpMem = (FastRegion::Internal::CRgnData *)v43;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(v11 + 96));
      *(_QWORD *)(v11 + 96) = v36;
      *(_DWORD *)(v11 + 104) = v41;
    }
    else
    {
      **(_DWORD **)(v11 + 96) = 0;
    }
LABEL_32:
    if ( v43 != (_BYTE *)lpMem && lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    goto LABEL_35;
  }
}
