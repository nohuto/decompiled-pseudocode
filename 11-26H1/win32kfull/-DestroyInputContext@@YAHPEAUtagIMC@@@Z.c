/*
 * XREFs of ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x140225050
 * Callers:
 *     NtUserDestroyInputContext @ 0x140224FC0 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x140237194 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall DestroyInputContext(struct tagIMC *a1)
{
  __int64 v1; // rdi
  struct tagBWL *v3; // rax
  __int64 v4; // rdx
  struct tagBWL *v5; // rbp
  __int64 v6; // rax
  __int64 *i; // rsi
  struct tagWND *v9; // rax
  int v10; // ecx

  v1 = *((_QWORD *)a1 + 2);
  if ( (struct tagTHREADINFO *)v1 != PtiCurrent((__int64)a1) )
  {
    v10 = 5;
LABEL_15:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( a1 == *(struct tagIMC **)(v1 + 824) )
  {
    v10 = 87;
    goto LABEL_15;
  }
  v3 = BuildHwndList(
         *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 488) + 8LL) + 24LL) + 112LL),
         3LL,
         v1,
         1);
  v5 = v3;
  if ( v3 )
  {
    for ( i = (__int64 *)((char *)v3 + 32); *i != 1; ++i )
    {
      v9 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      if ( v9 )
      {
        v4 = *((_QWORD *)v9 + 5);
        if ( *(_QWORD *)(v4 + 208) == *(_QWORD *)a1 )
          AssociateInputContext(v9, *(struct tagIMC **)(v1 + 824));
      }
    }
    FreeHwndList(v5, v4);
  }
  v6 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v6 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v6);
  return 1LL;
}
