/*
 * XREFs of ?Update@CMagnifierRenderTargetProxy@@QEAAJAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BBF7C
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BAA2C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::Update(
        CMagnifierRenderTargetProxy *this,
        const struct MAGN_ADAPTERTEXTURES *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 408LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
