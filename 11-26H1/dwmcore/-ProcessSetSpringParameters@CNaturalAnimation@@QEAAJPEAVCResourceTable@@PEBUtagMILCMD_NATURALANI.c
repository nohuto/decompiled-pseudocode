/*
 * XREFs of ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x18020BA98
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetSpringParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS *a3)
{
  float *v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm2_4
  __int64 v8; // rcx

  CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
  v5 = (float *)*((_QWORD *)this + 49);
  if ( v5 )
    (**(void (__fastcall ***)(_QWORD))v5)(*((_QWORD *)this + 49));
  v6 = *((float *)a3 + 2);
  v7 = 1.0 / *((float *)a3 + 3);
  v5[7] = v6;
  v5[8] = v7;
  v5[5] = v7 * v7;
  v5[6] = (float)(v6 + v6) * v7;
  (**(void (__fastcall ***)(float *))v5)(v5);
  v8 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = v5;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  (*(void (__fastcall **)(float *))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
