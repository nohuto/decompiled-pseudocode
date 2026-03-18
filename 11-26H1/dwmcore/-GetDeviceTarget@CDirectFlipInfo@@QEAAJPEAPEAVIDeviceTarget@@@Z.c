/*
 * XREFs of ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x18020AF74
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::GetDeviceTarget(CDirectFlipInfo *this, struct IDeviceTarget **a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v11 = 0LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v6 = (**v5)(v5, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x152u, 0LL);
  }
  else
  {
    v8 = (char *)this + 32;
    if ( *((_DWORD *)this + 13) != 3 )
      v8 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, char *, struct IDeviceTarget **))(*(_QWORD *)v11 + 32LL))(v11, v8, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x155u, 0LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v7;
}
