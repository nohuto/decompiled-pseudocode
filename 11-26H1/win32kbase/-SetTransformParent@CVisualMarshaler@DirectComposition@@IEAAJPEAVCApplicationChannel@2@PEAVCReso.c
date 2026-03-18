/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x140191E6C
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140180B70 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPO.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@0@Z @ 0x1400AA434 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400AA6C0 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        struct DirectComposition::CResourceMarshaler **this,
        struct _RTL_GENERIC_TABLE *a2,
        struct DirectComposition::CResourceMarshaler *a3,
        char a4,
        bool *a5)
{
  bool *v5; // r12
  unsigned int v7; // esi
  __int64 v11; // r8
  struct DirectComposition::CResourceMarshaler *v12; // rax
  char v13; // r13
  struct DirectComposition::CResourceMarshaler *v14; // rdi
  int v15; // eax
  int v16; // eax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v7 = 0;
  if ( a3 != this[18] )
  {
    if ( a3 )
    {
      if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a3 + 9), 160) )
      {
        if ( v11 )
        {
          v12 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 192LL))(v11);
          v13 = 0;
          v18 = v12;
          v14 = v12;
          if ( !v12 )
            goto LABEL_8;
          if ( *((_QWORD *)v12 + 3) == 1LL )
          {
LABEL_9:
            v16 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty((__int64)a2, (__int64)v14);
            v7 = v16;
            if ( !v13 )
            {
              if ( v16 < 0 )
                return v7;
              goto LABEL_18;
            }
            if ( v16 >= 0 )
            {
              DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
              this[18] = v14;
LABEL_17:
              *((_DWORD *)this + 4) |= 0x400u;
              *v5 = 1;
              goto LABEL_18;
            }
LABEL_14:
            DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
            return v7;
          }
        }
        v18 = 0LL;
LABEL_8:
        v13 = 1;
        v15 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
                (DirectComposition::CConnection **)a2,
                0xA1u,
                &v18);
        v14 = v18;
        v7 = v15;
        if ( v15 < 0 )
          goto LABEL_14;
        goto LABEL_9;
      }
      DirectComposition::CResourceMarshaler::AddRef(a3);
    }
    DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
    this[18] = a3;
    goto LABEL_17;
  }
LABEL_18:
  if ( *((_BYTE *)this + 324) >> 7 != a4 )
  {
    if ( this[18] )
    {
      *((_DWORD *)this + 4) |= 0x400u;
      *v5 = 1;
    }
    *((_BYTE *)this + 324) = (a4 << 7) | *((_BYTE *)this + 324) & 0x7F;
  }
  return v7;
}
