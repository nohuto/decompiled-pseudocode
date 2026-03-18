/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x140228C54
 * Callers:
 *     NtVisualCaptureBits @ 0x140227840 (NtVisualCaptureBits.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140048E6C (DirectComposition--Memory--AllocateAndClear.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v12; // ebx
  struct DirectComposition::CResourceMarshaler *v13; // rax
  DirectComposition::CResourceMarshaler *v14; // rsi
  DirectComposition::CEvent *v15; // rax
  DirectComposition::CEvent *v16; // rbp
  PVOID v17; // rbx
  PVOID v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r9
  DirectComposition::CEvent *v21; // rcx
  DirectComposition::CEvent *v22; // rcx
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+20h] [rbp-38h]
  void *v26; // [rsp+30h] [rbp-28h] BYREF
  void *v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = (void *)-1LL;
  v26 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
            (DirectComposition::CApplicationChannel *)a1,
            a2);
    v14 = v13;
    if ( v13 && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v13 + 9), 182) )
    {
      v15 = (DirectComposition::CEvent *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x76654344u, 1);
      v16 = v15;
      if ( v15 )
      {
        v17 = Object;
        v18 = Object;
        *((_QWORD *)v15 + 1) = Object;
        ObfReferenceObject(v18);
        v12 = OpenDwmHandle(v17, (POBJECT_TYPE)ExEventObjectType, 2u, v19, v24, &v27);
        v21 = v16;
        if ( v12 < 0 || (v12 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v20, v25, &v26), v21 = v16, v12 < 0) )
        {
          DirectComposition::CEvent::`scalar deleting destructor'(v21);
        }
        else
        {
          DirectComposition::CApplicationChannel::ReleaseResource(
            (DirectComposition::CApplicationChannel *)a1,
            *(struct DirectComposition::CResourceMarshaler **)(a1 + 2792));
          v22 = *(DirectComposition::CEvent **)(a1 + 2784);
          if ( v22 )
            DirectComposition::CEvent::`scalar deleting destructor'(v22);
          *(_DWORD *)(a1 + 2808) = a5;
          *(_DWORD *)(a1 + 2812) = a6;
          *(_DWORD *)(a1 + 2816) = a7;
          *(_QWORD *)(a1 + 2824) = v27;
          *(_QWORD *)(a1 + 2832) = v26;
          *(_QWORD *)(a1 + 2784) = v16;
          *(_DWORD *)(a1 + 2800) = a3;
          *(_DWORD *)(a1 + 2804) = a4;
          *(_QWORD *)(a1 + 2792) = v14;
          DirectComposition::CResourceMarshaler::AddRef(v14);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v12;
}
