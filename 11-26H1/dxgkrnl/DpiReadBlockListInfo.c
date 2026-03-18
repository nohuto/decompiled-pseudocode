/*
 * XREFs of DpiReadBlockListInfo @ 0x140417648
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DpiReadBlockListInfo(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebx

  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 2 )
  {
    if ( a4 )
    {
      if ( !*(_BYTE *)(v4 + 5868) )
        goto LABEL_6;
    }
    else if ( !*(_BYTE *)(v4 + 5884) )
    {
LABEL_6:
      v6 = *a2;
      v7 = -1;
      if ( v6 + 4 >= v6 )
        v7 = v6 + 4;
      if ( a3 >= v7 && v6 + 4 >= v6 )
      {
        v8 = -(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
        v9 = *(_DWORD *)(v8 + v4 + 5880);
        if ( v6 )
        {
          if ( v9 > v6 )
          {
            WdLogSingleEntry2(3LL, a3, -1073741811LL);
            WdLogGlobalForLineNumber = 1030;
LABEL_19:
            v10 = -1073741789;
            goto LABEL_20;
          }
          if ( v9 )
            memmove(
              a2 + 1,
              *(const void **)((-(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + v4 + 5872),
              *(unsigned int *)(v8 + v4 + 5880));
        }
        *a2 = v9;
        return 0LL;
      }
      WdLogSingleEntry2(3LL, a3, -1073741789LL);
      WdLogGlobalForLineNumber = 1000;
      goto LABEL_19;
    }
    v10 = -1073741637;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 987;
LABEL_20:
    *a2 = 0;
    return v10;
  }
  return 3221225485LL;
}
