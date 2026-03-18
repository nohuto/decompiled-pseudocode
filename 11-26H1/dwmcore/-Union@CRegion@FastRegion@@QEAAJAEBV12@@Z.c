/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800EB500
 * Callers:
 *     ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180253558 (-AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800EB930 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(
        FastRegion::CRegion **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int *v2; // rdi
  int v5; // r8d
  FastRegion::CRegion *v6; // rbx
  unsigned int v7; // r15d
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rsi
  _DWORD *v14; // r10
  _DWORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v22; // eax
  FastRegion::Internal::CRgnData *v23; // rcx
  FastRegion::CRegion *v24; // rdi
  int *v25; // r14
  HANDLE ProcessHeap; // rax
  _DWORD *v27; // rbx
  int v28; // ebp
  int v29; // eax
  int v30; // edx
  int v31; // r11d
  char *v32; // r8
  _BYTE *v33; // r10
  _DWORD *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r10
  HANDLE v40; // rax
  FastRegion::Internal::CRgnData *v41; // rax
  int v42; // [rsp+20h] [rbp-148h]
  FastRegion::CRegion *lpMem; // [rsp+28h] [rbp-140h]
  _BYTE v44[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = (int *)*a2;
  v5 = *(_DWORD *)*a2;
  if ( !v5 )
    return 0LL;
  v6 = *this;
  if ( !*(_DWORD *)*this )
  {
    v7 = 0;
    if ( this != a2 )
    {
      v8 = (int *)(this + 1);
      v9 = 60;
      v10 = v2[2 * v5 + 2] + 8 * v5 - 12 - v2[4] + 8 * (v5 - 1) + 24;
      if ( this + 1 != (FastRegion::CRegion **)v6 )
        v9 = *v8;
      if ( v9 >= v10 )
        goto LABEL_7;
      ProcessHeap = GetProcessHeap();
      v6 = (FastRegion::CRegion *)HeapAlloc(ProcessHeap, 0, v10);
      if ( v6 )
      {
        FastRegion::CRegion::FreeMemory(this);
        *this = v6;
        *v8 = v10;
LABEL_7:
        v11 = *v2;
        v12 = 0;
        *(_DWORD *)v6 = *v2;
        *((_DWORD *)v6 + 1) = v2[1];
        *((_DWORD *)v6 + 2) = v2[2];
        v13 = (__int64)v2 + v2[4] + 12;
        v14 = (_DWORD *)((char *)v6 + 8 * v11 + 12);
        if ( v11 > 0 )
        {
          v15 = (_DWORD *)((char *)v6 + 12);
          do
          {
            *v15 = *(_DWORD *)((char *)v15 + (char *)v2 - (char *)v6);
            v15 += 2;
            v16 = v12++;
            *((_DWORD *)v6 + 2 * v16 + 4) = 4 * (((__int64)v14 - v13) >> 2)
                                          + (_DWORD)v2
                                          + 8 * v16
                                          + v2[2 * v16 + 4]
                                          - ((_DWORD)v6
                                           + 8 * v16);
          }
          while ( v12 < *(_DWORD *)v6 );
        }
        v17 = (__int64)&v2[2 * *v2 + 1];
        v18 = (unsigned __int64)((int)v17 + *(_DWORD *)(v17 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
        v19 = (int)v18;
        if ( (int)v18 > 0 )
        {
          v20 = v13 - (_QWORD)v14;
          do
          {
            *v14 = *(_DWORD *)((char *)v14 + v20);
            ++v14;
            --v19;
          }
          while ( v19 );
        }
        return v7;
      }
      return (unsigned int)-2147024882;
    }
    return v7;
  }
  v22 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v6, (const struct FastRegion::Internal::CRgnData *)v2);
  v23 = (FastRegion::Internal::CRgnData *)v44;
  lpMem = (FastRegion::CRegion *)v44;
  v42 = v22;
  if ( (unsigned __int64)v22 <= 0x100 )
  {
LABEL_15:
    FastRegion::Internal::CRgnData::Union(v23, *this, *a2);
    v24 = lpMem;
    v7 = 0;
    if ( *(_DWORD *)lpMem )
    {
      v25 = (int *)(this + 1);
      if ( v44 == (_BYTE *)lpMem )
      {
        v27 = *this;
        v28 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            + 8 * *(_DWORD *)lpMem
            - *((_DWORD *)lpMem + 4)
            - 12
            + 8 * (*(_DWORD *)lpMem - 1)
            + 24;
        v29 = 60;
        if ( v25 != (int *)*this )
          v29 = *v25;
        if ( v29 < v28 )
        {
          v27 = MIDL_user_allocate(v28);
          if ( !v27 )
          {
            v7 = -2147024882;
            goto LABEL_29;
          }
          FastRegion::CRegion::FreeMemory(this);
          *this = (FastRegion::CRegion *)v27;
          *v25 = v28;
        }
        v30 = *(_DWORD *)lpMem;
        v31 = 0;
        *v27 = *(_DWORD *)lpMem;
        v27[1] = *((_DWORD *)lpMem + 1);
        v27[2] = *((_DWORD *)lpMem + 2);
        v32 = (char *)&v27[2 * v30 + 3];
        v33 = (char *)lpMem + *((int *)lpMem + 4) + 12;
        if ( v30 > 0 )
        {
          v34 = v27 + 3;
          do
          {
            *v34 = *(_DWORD *)((char *)v34 + lpMem - (FastRegion::CRegion *)v27);
            v34 += 2;
            v35 = v31++;
            v27[2 * v35 + 4] = 4 * ((v32 - v33) >> 2)
                             + (_DWORD)lpMem
                             + 8 * v35
                             + *((_DWORD *)lpMem + 2 * v35 + 4)
                             - ((_DWORD)v27
                              + 8 * v35);
          }
          while ( v31 < *v27 );
        }
        v36 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
        v37 = (unsigned __int64)((int)v36 + *(_DWORD *)(v36 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
        v38 = (int)v37;
        if ( (int)v37 > 0 )
        {
          v39 = v33 - v32;
          do
          {
            *(_DWORD *)v32 = *(_DWORD *)&v32[v39];
            v32 += 4;
            --v38;
          }
          while ( v38 );
        }
        goto LABEL_29;
      }
      lpMem = (FastRegion::CRegion *)v44;
      FastRegion::CRegion::FreeMemory(this);
      *this = v24;
      *v25 = v42;
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
LABEL_29:
    if ( v44 != (_BYTE *)lpMem && lpMem )
    {
      v40 = GetProcessHeap();
      HeapFree(v40, 0, lpMem);
    }
    return v7;
  }
  v41 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v22);
  v23 = v41;
  if ( v41 )
  {
    lpMem = v41;
    goto LABEL_15;
  }
  return 2147942414LL;
}
