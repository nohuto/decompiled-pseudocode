/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x140225220
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400C9040 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ??0TPTHRESHOLDS@@QEAA@XZ @ 0x14015E2F4 (--0TPTHRESHOLDS@@QEAA@XZ.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1402255B4 (Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline @ 0x140225608 (Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  TPTHRESHOLDS *v2; // rax
  __int128 v3; // xmm0
  __int64 result; // rax
  _BYTE v5[232]; // [rsp+20h] [rbp-E8h] BYREF

  *((_DWORD *)this + 770) |= 0x2000000u;
  *((_DWORD *)this + 706) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  memset(v5, 0, 0xD4uLL);
  v2 = TPTHRESHOLDS::TPTHRESHOLDS((TPTHRESHOLDS *)v5);
  *((_OWORD *)this + 193) = *(_OWORD *)v2;
  *((_OWORD *)this + 194) = *((_OWORD *)v2 + 1);
  *((_OWORD *)this + 195) = *((_OWORD *)v2 + 2);
  *((_OWORD *)this + 196) = *((_OWORD *)v2 + 3);
  *((_OWORD *)this + 197) = *((_OWORD *)v2 + 4);
  *((_OWORD *)this + 198) = *((_OWORD *)v2 + 5);
  *((_OWORD *)this + 199) = *((_OWORD *)v2 + 6);
  v3 = *((_OWORD *)v2 + 7);
  v2 = (TPTHRESHOLDS *)((char *)v2 + 128);
  *((_OWORD *)this + 200) = v3;
  *((_OWORD *)this + 201) = *(_OWORD *)v2;
  *((_OWORD *)this + 202) = *((_OWORD *)v2 + 1);
  *((_OWORD *)this + 203) = *((_OWORD *)v2 + 2);
  *((_OWORD *)this + 204) = *((_OWORD *)v2 + 3);
  *((_OWORD *)this + 205) = *((_OWORD *)v2 + 4);
  *((_DWORD *)this + 824) = *((_DWORD *)v2 + 20);
  *((_DWORD *)this + 803) *= 10000 * *((_DWORD *)this + 803);
  *((_DWORD *)this + 804) *= 10000 * *((_DWORD *)this + 804);
  if ( !(unsigned int)Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline((char *)this + 3216) )
  {
    *((_DWORD *)this + 801) = 200;
    *((_DWORD *)this + 781) = 90000;
    *((_DWORD *)this + 782) = 90000;
    *((_DWORD *)this + 797) = 270;
    *((_DWORD *)this + 798) = 270;
    *((_DWORD *)this + 799) = 270;
    *((_DWORD *)this + 807) = 1000;
    *((_DWORD *)this + 808) = 1000;
  }
  if ( !(unsigned int)Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 811) = 300;
  if ( !(unsigned int)Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 786) = 50;
  *((_DWORD *)this + 825) = 0;
  *((_DWORD *)this + 826) = 500;
  *((_DWORD *)this + 827) = 750;
  *((_DWORD *)this + 828) = 1250;
  *((_DWORD *)this + 829) = 1250;
  *((_DWORD *)this + 830) = 0;
  *((_DWORD *)this + 831) = 250;
  *((_DWORD *)this + 832) = 500;
  *((_DWORD *)this + 833) = 750;
  *((_QWORD *)this + 417) = 750LL;
  *((_DWORD *)this + 836) = 150;
  *((_DWORD *)this + 837) = 300;
  *((_DWORD *)this + 838) = 500;
  *(_QWORD *)((char *)this + 3356) = 750LL;
  *((_DWORD *)this + 841) = 4000;
  *((_DWORD *)this + 842) = 2000;
  *((_DWORD *)this + 843) = 1000;
  *((_DWORD *)this + 844) = 1000;
  *((_DWORD *)this + 845) = 2000;
  result = 0LL;
  *((_DWORD *)this + 846) = 1000;
  *((_DWORD *)this + 847) = 500;
  *((_DWORD *)this + 848) = 50;
  return result;
}
