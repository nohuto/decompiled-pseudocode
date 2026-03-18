/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401E4E5C
 * Callers:
 *     SetGestureConfigSettings @ 0x1401E4CF4 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1401E49D0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401E4C98 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401E5074 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1401E50D8 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1402D4B58 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v8; // rax
  __int64 i; // rbp
  int v10; // r10d
  int v11; // edx
  __int64 v12; // r9
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // rax
  char v16; // dl
  unsigned int v17; // edx
  unsigned int v18; // ebx
  struct tagVWPLGESTUREDATA *v19; // rax
  int v20; // r8d
  struct tagGESTURECONFIGLIST *v21; // rdx
  struct tagGESTURECONFIGLIST *v22; // rcx
  int v23; // ecx
  unsigned int v25; // r9d

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v8 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuotaZInit(64LL, 1667724117LL);
    WindowGCList = v8;
    if ( !v8 )
    {
LABEL_21:
      v23 = 14;
      goto LABEL_22;
    }
    memset_0(v8, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a2 )
      return 1LL;
    v10 = *((_DWORD *)a3 + 3 * i + 2);
    v11 = *((_DWORD *)a3 + 3 * i + 1);
    if ( (v10 & v11) != 0 )
      break;
    v12 = *((unsigned int *)a3 + 3 * i);
    if ( (unsigned int)(v12 - 1) > 6 || (~dword_140362C98[v12] & (v11 | v10)) != 0 )
      break;
    if ( v11 || v10 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v12) )
      {
        v20 = 0;
        v21 = 0LL;
        v22 = WindowGCList[v13 & 7];
        if ( v22 )
        {
          do
          {
            if ( *((_DWORD *)v22 + 2) == v13 )
            {
              v21 = v22;
              v20 = 1;
            }
            v22 = *(struct tagGESTURECONFIGLIST **)v22;
          }
          while ( v22 );
          if ( v20 )
          {
            *((_DWORD *)v21 + 4) = v14;
            *((_DWORD *)v21 + 3) = *((_DWORD *)a3 + 3 * i + 1);
          }
        }
      }
      else
      {
        v15 = Win32AllocPoolWithQuotaZInit(24LL, 1667724117LL);
        if ( !v15 )
          goto LABEL_21;
        *(_DWORD *)(v15 + 8) = *((_DWORD *)a3 + 3 * i);
        v16 = *(_BYTE *)(v15 + 8);
        *(_DWORD *)(v15 + 16) = *((_DWORD *)a3 + 3 * i + 2);
        v17 = v16 & 7;
        *(_DWORD *)(v15 + 12) = *((_DWORD *)a3 + 3 * i + 1);
        *(_QWORD *)v15 = WindowGCList[v17];
        WindowGCList[v17] = (struct tagGESTURECONFIGLIST *)v15;
        v18 = *(_DWORD *)(v15 + 8);
        v19 = GetGCData(a1);
        *(_BYTE *)(((unsigned __int64)v18 >> 3) + *(_QWORD *)v19) |= 1 << (v18 & 7);
      }
    }
    else if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v12) )
    {
      GCRemoveHashElement(WindowGCList, v25);
      SetBitMask(a1, *((_DWORD *)a3 + 3 * i), 0);
    }
  }
  v23 = 87;
LABEL_22:
  UserSetLastError(v23);
  return 0LL;
}
