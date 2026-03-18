/*
 * XREFs of ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1800EA550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800EB930 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180144D20 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CSwapChainBuffer::AddInvalidRegion(
        CSwapChainBuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rbx
  FastRegion::CRegion *v3; // rdi
  int v5; // r9d
  const struct FastRegion::Internal::CRgnData *v6; // r8
  int v7; // r14d
  int *v8; // rbp
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // r9d
  const struct FastRegion::Internal::CRgnData *v13; // r10
  __int64 v14; // rsi
  _DWORD *v15; // r11
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  FastRegion::Internal::CRgnData *v24; // rcx
  struct FastRegion::Internal::CRgnData *v25; // rsi
  int v26; // ebx
  void *v27; // r12
  FastRegion::Internal::CRgnData *v28; // rax
  int v29; // [rsp+20h] [rbp-148h]
  struct FastRegion::Internal::CRgnData *v30; // [rsp+28h] [rbp-140h]
  _BYTE v31[256]; // [rsp+30h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v2 = *a2;
  v3 = (CSwapChainBuffer *)((char *)this + 32);
  v5 = *(_DWORD *)*a2;
  if ( v5 )
  {
    v6 = *(const struct FastRegion::Internal::CRgnData **)v3;
    if ( **(_DWORD **)v3 )
    {
      v23 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v6, v2);
      v24 = (FastRegion::Internal::CRgnData *)v31;
      v30 = (struct FastRegion::Internal::CRgnData *)v31;
      v29 = v23;
      if ( (unsigned __int64)v23 > 0x100 )
      {
        v28 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v23);
        v24 = v28;
        if ( !v28 )
        {
          v7 = -2147024882;
          goto LABEL_20;
        }
        v30 = v28;
      }
      FastRegion::Internal::CRgnData::Union(v24, *(const struct FastRegion::Internal::CRgnData **)v3, *a2);
      v25 = v30;
      v7 = 0;
      if ( *(_DWORD *)v30 )
      {
        if ( v31 == (_BYTE *)v30 )
        {
          v7 = FastRegion::CRegion::CopyData(v3, v30);
        }
        else
        {
          v26 = v29;
          v30 = (struct FastRegion::Internal::CRgnData *)v31;
          v29 = 0;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v3);
          *(_QWORD *)v3 = v25;
          *((_DWORD *)v3 + 2) = v26;
        }
      }
      else
      {
        **(_DWORD **)v3 = 0;
      }
      if ( v31 != (_BYTE *)v30 )
        operator delete(v30);
    }
    else
    {
      v7 = 0;
      if ( v3 == (FastRegion::CRegion *)a2 )
        goto LABEL_13;
      v8 = (int *)((char *)this + 40);
      v9 = 60;
      v10 = *((_DWORD *)v2 + 2 * v5 + 2) + 8 * v5 - 12 - *((_DWORD *)v2 + 4) + 8 * (v5 - 1) + 24;
      if ( (CSwapChainBuffer *)((char *)this + 40) != v6 )
        v9 = *v8;
      if ( v9 < v10 )
      {
        v27 = MIDL_user_allocate(v10);
        if ( !v27 )
        {
          v7 = -2147024882;
          goto LABEL_13;
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v3);
        *(_QWORD *)v3 = v27;
        *v8 = v10;
      }
      v11 = *(_DWORD *)v2;
      v12 = 0;
      v13 = *(const struct FastRegion::Internal::CRgnData **)v3;
      *(_DWORD *)v13 = *(_DWORD *)v2;
      *((_DWORD *)v13 + 1) = *((_DWORD *)v2 + 1);
      *((_DWORD *)v13 + 2) = *((_DWORD *)v2 + 2);
      v14 = (__int64)v2 + *((int *)v2 + 4) + 12;
      v15 = (_DWORD *)((char *)v13 + 8 * v11 + 12);
      if ( v11 > 0 )
      {
        v16 = (_DWORD *)((char *)v13 + 12);
        do
        {
          *v16 = *(_DWORD *)((char *)v16 + v2 - v13);
          v17 = v12;
          v16 += 2;
          v18 = (__int64)v13 + 8 * v12++ + 12;
          *(_DWORD *)(v18 + 4) = (_DWORD)v2
                               + 12
                               + 8 * v17
                               + 4 * (((__int64)v15 - v14) >> 2)
                               + *((_DWORD *)v2 + 2 * v17 + 4)
                               - v18;
        }
        while ( v12 < *(_DWORD *)v13 );
      }
      v19 = (__int64)v2 + 8 * *(_DWORD *)v2 + 4;
      v20 = (unsigned __int64)((int)v19 + *(_DWORD *)(v19 + 4) - *((_DWORD *)v2 + 4) - ((int)v2 + 12)) >> 2;
      v21 = (int)v20;
      if ( (int)v20 > 0 )
      {
        v22 = v14 - (_QWORD)v15;
        do
        {
          *v15 = *(_DWORD *)((char *)v15 + v22);
          ++v15;
          --v21;
        }
        while ( v21 );
      }
    }
LABEL_13:
    if ( v7 >= 0 )
      return;
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1AB,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v7,
      v29);
  }
}
