/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180269848
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1800AD3DC (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18014D924 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x1801D9900 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  __int64 *v8; // rbx
  struct CPayloadedAnimationPrimitiveBuffer *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  struct CPayloadedAnimationPrimitiveBuffer *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v5 = 0;
  if ( !a4 || !a5 )
    goto LABEL_14;
  v8 = (__int64 *)((char *)this + 128);
  v9 = (struct CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)this + 16);
  if ( !v9 )
  {
    v15 = 0LL;
    v10 = CPayloadedAnimationPrimitiveBuffer::Create(&v15);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xFDu, 0LL);
      goto LABEL_15;
    }
    v9 = v15;
    *v8 = (__int64)v15;
    *((_BYTE *)this + 299) = 0;
  }
  v11 = (*(__int64 (__fastcall **)(struct CPayloadedAnimationPrimitiveBuffer *, unsigned __int64, const void *))(*(_QWORD *)v9 + 48LL))(
          v9,
          (unsigned __int64)a5 >> 5,
          a4);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x102u, 0LL);
    goto LABEL_15;
  }
  if ( (v12 = *((_QWORD *)this + 18)) != 0 && !*(_QWORD *)(v12 + 104)
    || (v13 = CBaseAnimation::RegisterAnimateResource((CComposition **)this), v5 = v13, v13 >= 0) )
  {
LABEL_14:
    v8 = (__int64 *)((char *)this + 128);
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x108u, 0LL);
LABEL_15:
  if ( *v8 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 40LL))(*v8) )
    ReleaseInterface<CPolygon>(v8);
  return v5;
}
