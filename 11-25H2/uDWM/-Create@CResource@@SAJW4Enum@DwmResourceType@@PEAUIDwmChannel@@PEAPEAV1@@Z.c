/*
 * XREFs of ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800087D0
 * Callers:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x1800076B4 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CResource@@IEAA@XZ @ 0x180008894 (--0CResource@@IEAA@XZ.c)
 *     ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180008900 (-Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CResource::Create(unsigned int a1, __int64 a2, CBaseObject **a3)
{
  CResource *v6; // rax
  CResource *v7; // rax
  CBaseObject *v8; // rbx
  __int64 result; // rax
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CResource *)DefaultHeap::AllocClear(0x20uLL);
  if ( v6 && (v7 = CResource::CResource(v6), (v8 = v7) != 0LL) )
  {
    result = CResource::Initialize(v7, a1, a2);
    v10 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x27u, 0LL);
      CBaseObject::Release(v8);
      return v10;
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x25u, 0LL);
    return 2147942414LL;
  }
  return result;
}
