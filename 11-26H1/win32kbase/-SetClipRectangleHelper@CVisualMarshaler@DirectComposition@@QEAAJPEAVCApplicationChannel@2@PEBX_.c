/*
 * XREFs of ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14018FBD4
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140185FB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSIT.c)
 * Callees:
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400AA6C0 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_K@Z @ 0x1400ABF14 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
        DirectComposition::CVisualMarshaler *this,
        DirectComposition::CConnection **a2,
        const void *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  char v9; // bp
  struct DirectComposition::CResourceMarshaler *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  struct DirectComposition::CResourceMarshaler *v15; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    v8 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
    v9 = 0;
    v15 = v8;
    v10 = v8;
    if ( !v8 )
      goto LABEL_5;
    if ( *((_QWORD *)v8 + 3) == 1LL )
      goto LABEL_6;
  }
  v15 = 0LL;
LABEL_5:
  v9 = 1;
  v11 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0x67u, &v15);
  v10 = v15;
  v12 = v11;
  if ( v11 < 0 )
  {
LABEL_9:
    DirectComposition::CApplicationChannel::ReleaseResource((struct _RTL_GENERIC_TABLE *)a2, v10);
    return v12;
  }
LABEL_6:
  v13 = DirectComposition::CApplicationChannel::SetResourceBufferProperty((__int64)a2, (__int64)v10);
  v12 = v13;
  if ( v9 )
  {
    if ( v13 >= 0 )
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 280LL))(
        this,
        a2,
        7LL,
        v10,
        a5);
    goto LABEL_9;
  }
  return v12;
}
