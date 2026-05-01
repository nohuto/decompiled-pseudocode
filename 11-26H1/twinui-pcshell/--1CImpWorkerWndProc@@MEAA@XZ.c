/*
 * XREFs of ??1CImpWorkerWndProc@@MEAA@XZ @ 0x1804B6F74
 * Callers:
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804B6EA4 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ??_GCImpWorkerWndProc@@MEAAPEAXI@Z @ 0x1804B7040 (--_GCImpWorkerWndProc@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NXZ @ 0x1804B7634 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2701868344@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CImpWorkerWndProc::~CImpWorkerWndProc(CImpWorkerWndProc *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CImpWorkerWndProc::`vftable';
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2701868344>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2701868344>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 16) )
  {
    v2 = (void *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_QWORD *)this + 4) = 0LL;
    }
    v3 = (void *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
