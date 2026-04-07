/*
 * XREFs of ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x1800058E0
 * Callers:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180005820 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 * Callees:
 *     ?InitializeFromHandle@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@I@Z @ 0x1800059A4 (-InitializeFromHandle@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@I@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CResource@@IEAA@XZ @ 0x180008894 (--0CResource@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CResource::WrapExistingResource(__int64 a1, __int64 a2, unsigned int a3, CBaseObject **a4)
{
  CResource *v7; // rax
  CResource *v8; // rax
  __int64 v9; // rdx
  CBaseObject *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx

  v7 = (CResource *)DefaultHeap::AllocClear(0x20uLL);
  if ( v7 && (v8 = CResource::CResource(v7), (v10 = v8) != 0LL) )
  {
    v11 = CResource::InitializeFromHandle(v8, v9, a1, a3);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7Fu, 0LL);
      CBaseObject::Release(v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Du, 0LL);
  }
  return v12;
}
