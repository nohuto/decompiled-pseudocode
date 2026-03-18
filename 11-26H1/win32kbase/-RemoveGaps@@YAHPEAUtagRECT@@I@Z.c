/*
 * XREFs of ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x14011CCC0
 * Callers:
 *     AlignRects @ 0x14011CB98 (AlignRects.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x14011CE54 (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x14011D0F0 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RemoveGaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct tagRECT **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // r11d
  struct tagRECT **v8; // rsi
  struct tagRECT *v9; // rbx
  __int64 v10; // r9
  struct tagRECT *v11; // r10
  struct tagRECT **v12; // rax
  int v13; // ecx
  unsigned int v14; // ecx
  struct tagRECT *v15; // rcx
  struct tagRECT *v16; // r14
  struct tagRECT **v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 *ContiguousRectangle; // rax
  __int64 result; // rax
  struct tagRECT *Buffer[16]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  memset(Buffer, 0, sizeof(Buffer));
  v4 = Buffer;
  if ( (unsigned int)v2 <= 0x10
    || (result = Win32AllocPoolZInitImpl(256LL, (unsigned int)(8 * v2), 0x74727355u),
        (v4 = (struct tagRECT **)result) != 0LL) )
  {
    CenterRectangles(a1, v2);
    v7 = -1;
    v8 = v4;
    v9 = &a1[v2];
    v10 = (__int64)v4;
    v11 = a1;
    if ( a1 < v9 )
    {
      do
      {
        *v8 = v11;
        v6 = (unsigned int)((v11->right - v11->left) / 2 + v11->left);
        v12 = v8;
        v5 = (unsigned int)-((v11->bottom - v11->top) / 2 + v11->top);
        if ( (v11->bottom - v11->top) / 2 + v11->top > 0 )
          v5 = (unsigned int)((v11->bottom - v11->top) / 2 + v11->top);
        v13 = -(int)v6;
        if ( (int)v6 > 0 )
          v13 = (v11->right - v11->left) / 2 + v11->left;
        v14 = v5 + v13;
        if ( v14 >= v7 )
          v12 = (struct tagRECT **)v10;
        ++v8;
        ++v11;
        v10 = (__int64)v12;
        if ( v14 >= v7 )
          v14 = v7;
        v7 = v14;
      }
      while ( v11 < v9 );
      if ( v12 != v4 )
      {
        v15 = *v12;
        *v12 = *v4;
        *v4 = v15;
      }
    }
    v16 = a1 + 1;
    v17 = v4 + 1;
    if ( v16 < v9 )
    {
      v18 = ((unsigned __int64)((char *)v9 - (char *)v16 - 1) >> 4) + 1;
      do
      {
        ContiguousRectangle = (__int64 *)AddNextContiguousRectangle(v4, v17, v2);
        if ( ContiguousRectangle != (__int64 *)v17 )
        {
          v5 = *ContiguousRectangle;
          *ContiguousRectangle = (__int64)*v17;
          *v17 = (struct tagRECT *)v5;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    if ( v4 != Buffer )
      GreDeleteFastMutex((char *)v4, v5, v6, v10);
    return 1LL;
  }
  return result;
}
