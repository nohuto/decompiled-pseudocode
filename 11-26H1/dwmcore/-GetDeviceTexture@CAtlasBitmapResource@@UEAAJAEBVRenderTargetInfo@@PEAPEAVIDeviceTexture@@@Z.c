/*
 * XREFs of ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18019BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::GetDeviceTexture(
        CAtlasBitmapResource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 v3; // rax
  int v4; // ebx
  unsigned int v6; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 2) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  v3 = *((_QWORD *)this + 1);
  if ( !v3 )
  {
    v4 = -2003304307;
    v6 = 134;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v6, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xB0u, 0LL);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 104LL))(
         *(_QWORD *)(v3 + 8) + 8LL,
         a2,
         a3);
  if ( v4 < 0 )
  {
    v6 = 137;
    goto LABEL_8;
  }
  return (unsigned int)v4;
}
