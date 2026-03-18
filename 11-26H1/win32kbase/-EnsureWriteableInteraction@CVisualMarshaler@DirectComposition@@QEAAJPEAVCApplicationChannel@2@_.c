/*
 * XREFs of ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x140197D28
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x140145750 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x140197C50 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1400A44C4 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400AA6C0 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     McTemplateK0qqqxxqtz_EtwWriteTransfer @ 0x140167610 (McTemplateK0qqqxxqtz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::EnsureWriteableInteraction(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        char a3,
        char a4,
        const unsigned __int16 *a5,
        struct DirectComposition::CInteractionMarshaler **a6)
{
  __int64 v8; // rcx
  int v9; // edi
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  int v14; // [rsp+40h] [rbp-48h]
  struct DirectComposition::CResourceMarshaler *v15; // [rsp+60h] [rbp-28h] BYREF
  char v16; // [rsp+90h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 27);
  v9 = 0;
  if ( !v8 || a4 )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 144LL))(v8);
    v11 = (unsigned int *)v15;
    if ( v15 )
    {
LABEL_13:
      *a6 = (struct DirectComposition::CInteractionMarshaler *)v11;
      return (unsigned int)v9;
    }
  }
  v16 = 0;
  v9 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
         (DirectComposition::CConnection **)a2,
         0x41u,
         &v15);
  if ( v9 >= 0 )
  {
    v11 = (unsigned int *)v15;
    if ( !a3 || (v9 = DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(v15), v9 >= 0) )
    {
      v9 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, unsigned int *, char *))(*(_QWORD *)this + 280LL))(
             this,
             a2,
             23LL,
             v11,
             &v16);
      DirectComposition::CApplicationChannel::ReleaseResource(
        (struct _RTL_GENERIC_TABLE *)a2,
        (struct DirectComposition::CResourceMarshaler *)v11);
      if ( v9 >= 0 )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
          McTemplateK0qqqxxqtz_EtwWriteTransfer(
            ((unsigned __int64)*((unsigned int *)a2 + 7) << 32) | *((unsigned int *)this + 8),
            v12,
            ((unsigned __int64)*((unsigned int *)a2 + 7) << 32) | v11[8],
            *((_DWORD *)a2 + 7),
            *((_DWORD *)this + 8),
            v11[8],
            *((_DWORD *)this + 8),
            v11[8],
            v14,
            a3,
            a5);
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
          a2,
          (struct DirectComposition::CResourceMarshaler *)v11);
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, this);
        goto LABEL_13;
      }
    }
  }
  return (unsigned int)v9;
}
