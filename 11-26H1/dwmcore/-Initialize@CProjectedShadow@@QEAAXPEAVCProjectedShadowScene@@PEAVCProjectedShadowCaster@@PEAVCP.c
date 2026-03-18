/*
 * XREFs of ?Initialize@CProjectedShadow@@QEAAXPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180262BC8
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC (-push_back@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@de.c)
 */

void __fastcall CProjectedShadow::Initialize(
        CProjectedShadow *this,
        struct CProjectedShadowScene *a2,
        struct CProjectedShadowCaster *a3,
        struct CProjectedShadowReceiver *a4)
{
  __int64 *v4; // rdi
  struct CProjectedShadowCaster *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 32);
  v9 = a2;
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back((__int64 *)this + 4, &v9);
  *((_QWORD *)this + 9) = a2;
  v9 = a3;
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back(v4, &v9);
  *((_QWORD *)this + 10) = a3;
  v9 = a4;
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::push_back(v4, &v9);
  *((_QWORD *)this + 11) = a4;
}
