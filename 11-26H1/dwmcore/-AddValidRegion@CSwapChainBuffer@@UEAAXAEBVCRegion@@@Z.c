/*
 * XREFs of ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180076F80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075C80 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CSwapChainBuffer::AddValidRegion(
        CSwapChainBuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData **v3; // rsi
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  int v5; // eax
  FastRegion::Internal::CRgnData *v6; // rcx
  const struct FastRegion::Internal::CRgnData *v7; // r14
  int v8; // edi
  int *v9; // r15
  int v10; // ebx
  int v11; // edx
  int v12; // edi
  const struct FastRegion::Internal::CRgnData *v13; // r9
  char *v14; // r8
  _BYTE *v15; // r10
  _DWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // eax
  int v23; // ebx
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v25; // rax
  const struct FastRegion::Internal::CRgnData *v26; // rdi
  int v27; // [rsp+20h] [rbp-E0h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-D8h]
  _BYTE v29[256]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 32);
  v4 = *a2;
  if ( !*(_DWORD *)v4 || !*(_DWORD *)*v3 )
    return;
  v5 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*v3, v4);
  v6 = (FastRegion::Internal::CRgnData *)v29;
  lpMem = (FastRegion::Internal::CRgnData *)v29;
  v27 = v5;
  if ( (unsigned __int64)v5 > 0x100 )
  {
    v25 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v5);
    v6 = v25;
    if ( !v25 )
    {
      v8 = -2147024882;
      goto LABEL_24;
    }
    lpMem = v25;
  }
  FastRegion::Internal::CRgnData::Subtract(v6, *v3, *a2);
  v7 = lpMem;
  v8 = 0;
  if ( !*(_DWORD *)lpMem )
  {
    *(_DWORD *)*v3 = 0;
    goto LABEL_15;
  }
  v9 = (int *)(v3 + 1);
  if ( v29 != (_BYTE *)lpMem )
  {
    v10 = v27;
    lpMem = (FastRegion::Internal::CRgnData *)v29;
    v27 = 0;
    FastRegion::CRegion::FreeMemory(v3);
    *v3 = v7;
    *v9 = v10;
    goto LABEL_15;
  }
  v22 = 60;
  v23 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
      - *((_DWORD *)lpMem + 4)
      + 8 * *(_DWORD *)lpMem
      - 12
      + 8 * (*(_DWORD *)lpMem - 1)
      + 24;
  if ( v9 != (int *)*v3 )
    v22 = *v9;
  if ( v22 < v23 )
  {
    v26 = (const struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v23);
    if ( !v26 )
    {
      v8 = -2147024882;
      goto LABEL_15;
    }
    FastRegion::CRegion::FreeMemory(v3);
    *v3 = v26;
    *v9 = v23;
  }
  v11 = *(_DWORD *)lpMem;
  v12 = 0;
  v13 = *v3;
  *(_DWORD *)v13 = *(_DWORD *)lpMem;
  *((_DWORD *)v13 + 1) = *((_DWORD *)lpMem + 1);
  *((_DWORD *)v13 + 2) = *((_DWORD *)lpMem + 2);
  v14 = (char *)v13 + 8 * v11 + 12;
  v15 = (char *)lpMem + *((int *)lpMem + 4) + 12;
  if ( v11 > 0 )
  {
    v16 = (_DWORD *)((char *)v13 + 12);
    do
    {
      *v16 = *(_DWORD *)((char *)v16 + lpMem - v13);
      v17 = v12;
      v16 += 2;
      ++v12;
      *((_DWORD *)v13 + 2 * v17 + 4) = (_DWORD)lpMem
                                     + 8 * v17
                                     + 4 * ((v14 - v15) >> 2)
                                     + *((_DWORD *)lpMem + 2 * v17 + 4)
                                     - ((_DWORD)v13
                                      + 8 * v17);
    }
    while ( v12 < *(_DWORD *)v13 );
  }
  v18 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
  v19 = (unsigned __int64)((int)v18 + *(_DWORD *)(v18 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
  v20 = (int)v19;
  if ( (int)v19 > 0 )
  {
    v21 = v15 - v14;
    do
    {
      *(_DWORD *)v14 = *(_DWORD *)&v14[v21];
      v14 += 4;
      --v20;
    }
    while ( v20 );
  }
  v8 = 0;
LABEL_15:
  if ( v29 != (_BYTE *)lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  if ( v8 < 0 )
LABEL_24:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B7,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v8,
      v27);
}
