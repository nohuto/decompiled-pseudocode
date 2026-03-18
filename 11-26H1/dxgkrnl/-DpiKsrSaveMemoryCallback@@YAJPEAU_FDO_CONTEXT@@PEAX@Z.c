/*
 * XREFs of ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x140251CB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkKsrSaveAdapterState @ 0x14021875C (DxgkKsrSaveAdapterState.c)
 *     DpiDxgkDdiSaveMemoryForHotUpdate @ 0x140252178 (DpiDxgkDdiSaveMemoryForHotUpdate.c)
 */

__int64 __fastcall DpiKsrSaveMemoryCallback(struct _FDO_CONTEXT *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // rdi
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rdi
  int v10; // eax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = *((unsigned int *)a2 + 8);
  if ( (int)v4 < 0 )
    return (unsigned int)v4;
  v6 = a2 + 2;
  if ( !a2[2] )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      goto LABEL_9;
    v6 = a2 + 2;
  }
  if ( (*((_DWORD *)a1 + 1398) & 2) != 0 )
  {
    v7 = DpiDxgkDdiSaveMemoryForHotUpdate(a1, a2);
    v4 = v7;
    *((_DWORD *)a2 + 8) = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 435;
      return *((unsigned int *)a2 + 8);
    }
  }
LABEL_9:
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    LOBYTE(v4) = 1;
    KsrFreePersistedMemory((char *)a1 + 4928, v4);
    KsrFreePersistedMemory((char *)a1 + 4944, 0LL);
    return *((unsigned int *)a2 + 8);
  }
  v11 = 0;
  if ( (int)v4 >= 0 )
  {
    if ( *v6 )
    {
      v8 = *((_DWORD *)a2 + 2);
      if ( v8 <= 0x20 )
        return *((unsigned int *)a2 + 8);
      v9 = a2[3];
      v10 = DxgkKsrSaveAdapterState(*((_QWORD *)a1 + 504), v8 - 32, v9 + 32, &v11);
      *((_DWORD *)a2 + 8) = v10;
      if ( v10 < 0 || !v11 )
        return *((unsigned int *)a2 + 8);
      *(_OWORD *)v9 = *((_OWORD *)a1 + 308);
      *(_QWORD *)(v9 + 16) = *((_QWORD *)a1 + 337);
      *(_DWORD *)(v9 + 28) = v11;
      a2[3] += (unsigned int)(v11 + 32);
    }
    else
    {
      *((_DWORD *)a2 + 8) = DxgkKsrSaveAdapterState(*((_QWORD *)a1 + 504), 0LL, 0LL, &v11);
      if ( !v11 )
        return *((unsigned int *)a2 + 8);
      *((_DWORD *)a2 + 2) += v11 + 32;
    }
    ++*((_DWORD *)a2 + 1);
  }
  return *((unsigned int *)a2 + 8);
}
