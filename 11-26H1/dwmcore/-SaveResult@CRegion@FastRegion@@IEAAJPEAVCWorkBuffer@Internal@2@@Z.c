/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180074A80
 * Callers:
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(int **this, struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rbx
  unsigned int v3; // r14d
  int *v5; // r15
  int *v6; // rdi
  int v7; // eax
  int v8; // ebp
  int v9; // edx
  int v10; // r9d
  __int64 v11; // rsi
  int *v12; // r10
  _DWORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  int v20; // edi
  HANDLE ProcessHeap; // rax

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = 0;
  if ( *v2 )
  {
    v5 = (int *)(this + 1);
    if ( (int *)((char *)a2 + 16) == v2 )
    {
      v6 = *this;
      v7 = 60;
      v8 = v2[2 * *v2 + 2] + 8 * *v2 - v2[4] - 12 + 8 * (*v2 - 1) + 24;
      if ( v5 != *this )
        v7 = *v5;
      if ( v7 >= v8 )
        goto LABEL_6;
      ProcessHeap = GetProcessHeap();
      v6 = (int *)HeapAlloc(ProcessHeap, 0, v8);
      if ( v6 )
      {
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = v6;
        *v5 = v8;
LABEL_6:
        v9 = *v2;
        v10 = 0;
        *v6 = *v2;
        v6[1] = v2[1];
        v6[2] = v2[2];
        v11 = (__int64)v2 + v2[4] + 12;
        v12 = &v6[2 * v9 + 3];
        if ( v9 > 0 )
        {
          v13 = v6 + 3;
          do
          {
            *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v6);
            v13 += 2;
            v14 = v10++;
            v6[2 * v14 + 4] = (_DWORD)v2
                            + 8 * v14
                            + 4 * (((__int64)v12 - v11) >> 2)
                            + v2[2 * v14 + 4]
                            - ((_DWORD)v6
                             + 8 * v14);
          }
          while ( v10 < *v6 );
        }
        v15 = (__int64)&v2[2 * *v2 + 1];
        v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
        v17 = (int)v16;
        if ( (int)v16 > 0 )
        {
          v18 = v11 - (_QWORD)v12;
          do
          {
            *v12 = *(int *)((char *)v12 + v18);
            ++v12;
            --v17;
          }
          while ( v17 );
        }
        return v3;
      }
      return (unsigned int)-2147024882;
    }
    else
    {
      v20 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = v2;
      *v5 = v20;
    }
    return v3;
  }
  **this = 0;
  return 0LL;
}
