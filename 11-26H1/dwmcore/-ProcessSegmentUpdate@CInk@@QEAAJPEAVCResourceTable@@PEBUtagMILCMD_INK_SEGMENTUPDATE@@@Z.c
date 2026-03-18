/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x18019A0A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802701CC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTUPDATE *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int128 v7; // xmm6
  struct ID2D1Ink *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 i; // rbp
  int ID2D1InkAndInkStyle; // eax
  unsigned int v14; // eax
  __int64 v15; // rdx
  bool v16; // cf
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  struct ID2D1InkStyle *v21; // [rsp+80h] [rbp+8h] BYREF
  struct ID2D1Ink *v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = a2;
  v3 = *((_OWORD *)a3 + 1);
  v5 = *((_QWORD *)this + 18);
  v6 = 0;
  v7 = *((_OWORD *)a3 + 2);
  v21 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v10 = 9LL * *((unsigned int *)a3 + 2);
  *(_DWORD *)(v5 + 4 * v10) = *((_DWORD *)a3 + 3);
  *(_OWORD *)(v5 + 4 * v10 + 4) = v3;
  *(_OWORD *)(v5 + 4 * v10 + 20) = v7;
  v11 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v11; i = (unsigned int)(i + 1) )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(*((_QWORD *)this + 11) + 8 * i), &v22, &v21);
    v6 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0xCAu, 0LL);
      v8 = v22;
      goto LABEL_13;
    }
    v8 = v22;
    v14 = (*(__int64 (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v22 + 80LL))(v22);
    v15 = *((unsigned int *)a3 + 2);
    v16 = (unsigned int)v15 < v14;
    v17 = *((_QWORD *)this + 18);
    if ( v16 )
    {
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64, __int64))(*(_QWORD *)v8 + 64LL))(
              v8,
              v15,
              v17 + 36 * v15,
              1LL);
      v6 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xCFu, 0LL);
        goto LABEL_13;
      }
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(*(_QWORD *)v8 + 48LL))(
              v8,
              v17 + 36 * v15,
              1LL);
      v6 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xD6u, 0LL);
        goto LABEL_13;
      }
    }
    ReleaseInterface<ID2D1Geometry>((__int64 *)&v22);
    ReleaseInterface<ID2D1Geometry>((__int64 *)&v21);
    v8 = v22;
  }
  (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
LABEL_13:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v8);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v21);
  return v6;
}
