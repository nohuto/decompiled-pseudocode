/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180165080
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x18014C700 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180163170 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z @ 0x180163A7C (--$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETCALLBACKID *a3)
{
  char *v5; // rsi
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  CComposition *v8; // rcx
  int AttachedChannel; // eax
  struct CChannelContext *v10; // rsi
  unsigned int v11; // edi
  struct CChannelContext *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = (char *)this + 24;
  v6 = (_DWORD *)((char *)this + 288);
  v7 = (_DWORD *)((char *)this + 284);
  if ( CAnimation::ShouldNotify(this) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 6384LL) + 88LL))(
      *(_QWORD *)(*(_QWORD *)v5 + 6384LL),
      (unsigned int)*v6,
      (unsigned int)*v7);
  v8 = *(CComposition **)v5;
  *v7 = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v8, *((_DWORD *)a2 + 12), &v13);
  v10 = v13;
  v11 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AttachedChannel, 0x1F3u, 0LL);
  else
    *v6 = *((_DWORD *)v13 + 30);
  ReleaseInterfaceNoNULL<CChannelContext>((volatile signed __int32 *)v10);
  return v11;
}
