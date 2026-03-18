/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x18019A280
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802701CC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  struct ID2D1Ink *v5; // rdi
  char *v7; // rcx
  int v9; // r15d
  __int64 v10; // rbp
  __int64 i; // r14
  int ID2D1InkAndInkStyle; // eax
  int v13; // eax
  int v14; // eax
  struct ID2D1InkStyle *v16; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Ink *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v5 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v7 = (char *)this + 144;
  v9 = v3 - *((_DWORD *)v7 + 6);
  if ( v9 >= 0 )
  {
    v14 = DynArrayImpl<0>::Grow((__int64)v7, 0x24u, v9, 0, 0LL);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x9Bu, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    v10 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; i = (unsigned int)(i + 1) )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(*((_QWORD *)this + 11) + 8 * i), &v17, &v16);
      v4 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x91u, 0LL);
        v5 = v17;
        goto LABEL_12;
      }
      v5 = v17;
      v13 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, (unsigned int)-v9);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x93u, 0LL);
        goto LABEL_12;
      }
      ReleaseInterface<ID2D1Geometry>((__int64 *)&v17);
      ReleaseInterface<ID2D1Geometry>((__int64 *)&v16);
      v5 = v17;
    }
  }
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
LABEL_12:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v5);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v16);
  return v4;
}
