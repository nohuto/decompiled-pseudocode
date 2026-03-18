/*
 * XREFs of ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x1400CE0A4
 * Callers:
 *     AlignRects @ 0x1400CDB98 (AlignRects.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1400CE23C (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1400CE4C8 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RemoveGaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct tagRECT **v4; // rdi
  unsigned int v5; // r11d
  struct tagRECT **v6; // rsi
  struct tagRECT *v7; // rbx
  struct tagRECT **v8; // r9
  struct tagRECT *v9; // r10
  int v10; // r8d
  struct tagRECT **v11; // rax
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // edx
  struct tagRECT *v15; // rcx
  struct tagRECT *v16; // r14
  struct tagRECT **v17; // rsi
  unsigned __int64 v18; // rbx
  struct tagRECT **ContiguousRectangle; // rax
  __int64 result; // rax
  struct tagRECT *v21; // rdx
  struct tagRECT *Buffer[16]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  memset(Buffer, 0, sizeof(Buffer));
  v4 = Buffer;
  if ( (unsigned int)v2 <= 0x10
    || (result = Win32AllocPoolZInitImpl(256LL, (unsigned int)(8 * v2), 0x74727355u),
        (v4 = (struct tagRECT **)result) != 0LL) )
  {
    CenterRectangles(a1, v2);
    v5 = -1;
    v6 = v4;
    v7 = &a1[v2];
    v8 = v4;
    v9 = a1;
    if ( a1 < v7 )
    {
      do
      {
        *v6 = v9;
        v10 = (v9->right - v9->left) / 2 + v9->left;
        v11 = v6;
        v12 = -((v9->bottom - v9->top) / 2 + v9->top);
        if ( (v9->bottom - v9->top) / 2 + v9->top >= 0 )
          v12 = (v9->bottom - v9->top) / 2 + v9->top;
        v13 = -v10;
        if ( v10 >= 0 )
          v13 = (v9->right - v9->left) / 2 + v9->left;
        v14 = v12 + v13;
        if ( v14 >= v5 )
          v11 = v8;
        ++v6;
        ++v9;
        v8 = v11;
        if ( v14 >= v5 )
          v14 = v5;
        v5 = v14;
      }
      while ( v9 < v7 );
      if ( v11 != v4 )
      {
        v15 = *v11;
        *v11 = *v4;
        *v4 = v15;
      }
    }
    v16 = a1 + 1;
    v17 = v4 + 1;
    if ( v16 < v7 )
    {
      v18 = ((unsigned __int64)((char *)v7 - (char *)v16 - 1) >> 4) + 1;
      do
      {
        ContiguousRectangle = AddNextContiguousRectangle(v4, v17, v2);
        if ( ContiguousRectangle != v17 )
        {
          v21 = *ContiguousRectangle;
          *ContiguousRectangle = *v17;
          *v17 = v21;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
    }
    if ( v4 != Buffer )
      GreDeleteFastMutex((char *)v4);
    return 1LL;
  }
  return result;
}
