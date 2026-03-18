/*
 * XREFs of ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1401861AC
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140185FB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSIT.c)
 * Callees:
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400AA6C0 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_K@Z @ 0x1400ABF14 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(
        DirectComposition::CVisualMarshaler *this,
        DirectComposition::CConnection **a2,
        const void *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  char v9; // r14
  struct DirectComposition::CResourceMarshaler *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  int v14; // eax
  bool *v15; // rax
  struct DirectComposition::CResourceMarshaler *v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 17);
  if ( !v6 )
    goto LABEL_10;
  v8 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
  v9 = 0;
  v16 = v8;
  v10 = v8;
  if ( !v8 )
    goto LABEL_3;
  if ( *((_QWORD *)v8 + 3) != 1LL )
  {
LABEL_10:
    v16 = 0LL;
LABEL_3:
    v9 = 1;
    v11 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x56u, &v16);
    v10 = v16;
    v12 = v11;
    if ( v11 < 0 )
      goto LABEL_4;
  }
  v14 = DirectComposition::CApplicationChannel::SetResourceBufferProperty((__int64)a2, (__int64)v10);
  v12 = v14;
  if ( !v9 )
    return v12;
  if ( v14 >= 0 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      (struct _RTL_GENERIC_TABLE *)a2,
      *((struct DirectComposition::CResourceMarshaler **)this + 17));
    v15 = a5;
    *((_DWORD *)this + 4) |= 0x200u;
    *((_QWORD *)this + 17) = v10;
    *v15 = 1;
    return v12;
  }
LABEL_4:
  DirectComposition::CApplicationChannel::ReleaseResource((struct _RTL_GENERIC_TABLE *)a2, v10);
  return v12;
}
