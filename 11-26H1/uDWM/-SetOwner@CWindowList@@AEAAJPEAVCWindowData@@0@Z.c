/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180019DF0
 * Callers:
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180018BD0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180017FC0 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180018310 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3, __int64 i)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  CWindowData *v12; // r8
  struct CWindowData *v13; // rdx
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-28h]
  unsigned int v27; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWindowData *v29; // [rsp+58h] [rbp+10h] BYREF
  CWindowData **v30; // [rsp+60h] [rbp+18h] BYREF

  v29 = a2;
  v4 = *((_QWORD *)a2 + 75);
  v5 = 0;
  if ( (struct CWindowData *)v4 == a3 )
    return v5;
  if ( v4 )
  {
    CWindowData::UpdateOwnerLists(a2, 0);
    v9 = 0LL;
    *((_QWORD *)v29 + 75) = 0LL;
    v10 = *(_DWORD *)(v4 + 632);
    v11 = *(_QWORD *)(v4 + 608);
    v12 = v29;
    if ( v10 )
    {
      do
      {
        if ( v29 == *(CWindowData **)(v11 + 8 * v9) )
          break;
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < v10 );
    }
    if ( (unsigned int)v9 < v10 )
    {
      if ( (unsigned int)v9 < v10 - 1 )
      {
        do
        {
          v20 = (unsigned int)(v9 + 1);
          *(_QWORD *)(v11 + 8 * v9) = *(_QWORD *)(v11 + 8 * v20);
          v9 = v20;
        }
        while ( (unsigned int)v20 < *(_DWORD *)(v4 + 632) - 1 );
      }
      --*(_DWORD *)(v4 + 632);
      v12 = v29;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 520); i = (unsigned int)(i + 1) )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v4 + 496) + 8 * i);
      if ( *(CWindowData **)(v25 + 64) == v12 )
      {
        v24 = CWindowData::NotifyRepresentationChanged((CWindowData *)v4, v25, (__int64)v12, i);
        v5 = v24;
        if ( v24 >= 0 )
          goto LABEL_32;
        v27 = 4675;
        goto LABEL_26;
      }
    }
  }
  else
  {
    *((_QWORD *)a2 + 75) = 0LL;
LABEL_32:
    v12 = v29;
  }
  *((_QWORD *)v12 + 75) = a3;
  if ( !a3 )
  {
LABEL_15:
    v13 = v29;
    goto LABEL_16;
  }
  v13 = v29;
  if ( a3 != v29 )
  {
    v14 = (_QWORD *)((char *)a3 + 608);
    v15 = *((_DWORD *)a3 + 158);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v5 = -2147024362;
      v17 = 183;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v17, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1250u, 0LL);
      return v5;
    }
    if ( v16 <= *((_DWORD *)a3 + 157) )
    {
      *(_QWORD *)(*v14 + 8LL * *((unsigned int *)a3 + 158)) = v29;
      *((_DWORD *)a3 + 158) = v16;
    }
    else
    {
      v30 = &v29;
      v5 = DynArrayImpl<0>::Grow((int)a3 + 608, 8, 1, i, (__int64)&v30);
      if ( (v5 & 0x80000000) != 0 )
      {
        v17 = 194;
        goto LABEL_14;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)a3 + 158))++) + *v14) = *v30;
    }
    CWindowData::CheckOwnedWindowEligibility(v29);
    v24 = CWindowData::NotifyRepresentationChanged(a3, v21, v22, v23);
    v5 = v24;
    if ( v24 < 0 )
    {
      v27 = 4693;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v27, 0LL);
      return v5;
    }
    goto LABEL_15;
  }
LABEL_16:
  v18 = CWindowList::ReevaluateAutoParenting(this, v13, 0);
  v19 = v18;
  if ( v18 >= 0 )
    return v5;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1258,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v18,
    v26);
  return v19;
}
