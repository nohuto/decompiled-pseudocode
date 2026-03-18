/*
 * XREFs of ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x1802111F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBounceParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS *a3)
{
  __int64 v5; // rbx
  float v6; // xmm0_4
  void (__fastcall **v7)(__int64); // rax
  void (__fastcall *v8)(__int64); // rax
  float v9; // xmm1_4

  CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
  v5 = *((_QWORD *)this + 49);
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6 = *((float *)a3 + 2);
  v7 = *(void (__fastcall ***)(__int64))v5;
  *(float *)(v5 + 20) = v6;
  v8 = v7[1];
  *(float *)(v5 + 24) = v6 / 0.0099999998;
  LODWORD(v9) = *((_DWORD *)a3 + 3) & _xmm;
  *(float *)(v5 + 28) = v9;
  *(float *)(v5 + 32) = (float)((float)(v9 + 1.0) * -1.0) / 0.0099999998;
  v8(v5);
  return 0LL;
}
