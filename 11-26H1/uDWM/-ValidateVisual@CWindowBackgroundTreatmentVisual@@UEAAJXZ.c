/*
 * XREFs of ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180064910
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180064A5C (-GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Wind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowBackgroundTreatmentVisual::ValidateVisual(
        CWindowBackgroundTreatmentVisual *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct Windows::UI::Composition::ICompositionBrush *TreatmentBrush; // rsi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  CVisual::ValidateVisual(this, a2, a3, a4);
  if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v14) & *((_DWORD *)this + 8)) == 0 )
    return 0LL;
  TreatmentBrush = CWindowBackgroundTreatmentVisual::GetTreatmentBrush();
  v6 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(v6 + 16) + 104LL))(
         *(_QWORD *)(v6 + 16),
         *(unsigned int *)(v6 + 24),
         &GUID_01dc794b_4ff5_4491_9942_b9e7b8893be4,
         &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v15 + 48LL))(
            v15,
            TreatmentBrush);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
        (const char *)(unsigned int)v10,
        v11);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v8;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v14);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
    (const char *)(unsigned int)v7,
    v11);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
    (const char *)v8,
    v12);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v8;
}
