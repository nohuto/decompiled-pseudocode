/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18027DC20
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18009D10C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800190B8 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  __int64 v3; // rdx
  struct ID2D1PrivateCompositorBuffer *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  CPrimitiveGroupDrawListGenerator *v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+50h] [rbp-10h] BYREF
  CPrimitiveGroupDrawListGenerator *v12; // [rsp+78h] [rbp+18h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v3 = *((_QWORD *)this + 55);
  v4 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 54);
  v9 = 0uLL;
  v10 = 0uLL;
  v11 = 0uLL;
  v5 = CPrimitiveGroupDrawListGenerator::Create(v4, v3, &v11, &v10, &v9, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x268u, 0LL);
    v7 = v12;
  }
  else
  {
    *a2 = v12;
    v7 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v7 + 8LL))(v7);
  return v6;
}
