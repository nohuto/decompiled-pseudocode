/*
 * XREFs of ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400AA6C0
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400A9A0C (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1401861AC (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14018FBD4 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x140191E6C (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x140197D28 (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x14014141C (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
        DirectComposition::CConnection **this,
        unsigned int a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int v6; // ebx
  struct DirectComposition::CResourceMarshaler *v7; // rdi
  __int64 v8; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v6 = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(
         (DirectComposition::CApplicationChannel *)this,
         a2,
         &v10);
  if ( v6 >= 0 )
  {
    v7 = v10;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 32LL))(v10)
      && (v6 = DirectComposition::CConnection::AcquireShellResourceAccess(this[5]), v6 < 0)
      || (v6 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v7)(v7), v6 < 0)
      || (v6 = DirectComposition::CApplicationChannel::RegisterResource(
                 (DirectComposition::CApplicationChannel *)this,
                 v7),
          v6 < 0) )
    {
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CConnection **))(*(_QWORD *)v7 + 208LL))(
        v7,
        this);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 88LL))(v7, 1LL);
    }
    if ( v6 >= 0 )
    {
      if ( a2 == 3 )
      {
        v8 = *(_QWORD *)((*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 96LL))(v10)
                       + 80);
        if ( (*(_DWORD *)(v8 + 24) & 1) == 0 )
        {
          *(_QWORD *)(v8 + 8) = this[61];
          this[61] = (DirectComposition::CConnection *)v8;
          *(_DWORD *)(v8 + 24) |= 1u;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 48));
        }
      }
      *a3 = v10;
    }
  }
  return (unsigned int)v6;
}
