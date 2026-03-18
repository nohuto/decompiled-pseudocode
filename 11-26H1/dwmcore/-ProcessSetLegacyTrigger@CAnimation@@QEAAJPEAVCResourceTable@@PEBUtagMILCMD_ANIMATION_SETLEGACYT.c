/*
 * XREFs of ?ProcessSetLegacyTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETLEGACYTRIGGER@@@Z @ 0x180208A8C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessSetLegacyTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETLEGACYTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // eax
  CAnimation *v12; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x48u);
  *((_QWORD *)this + 18) = Resource;
  v5 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v6 = *(_DWORD *)(v5 + 96);
  v12 = this;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    v10 = 183;
    goto LABEL_11;
  }
  v8 = 0;
  if ( v7 <= *(_DWORD *)(v5 + 92) )
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 72) + 8LL * v6) = this;
    *(_DWORD *)(v5 + 96) = v7;
    goto LABEL_7;
  }
  v8 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 72, 8, 1, &v12);
  if ( v8 < 0 )
  {
    v10 = 194;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v10, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xD9u, 0LL);
    return (unsigned int)v8;
  }
LABEL_7:
  v9 = *(_QWORD *)(v5 + 104);
  if ( v9 )
  {
    *((_QWORD *)this + 17) = v9;
    *((_QWORD *)this + 25) = v9;
  }
  return (unsigned int)v8;
}
