/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AFDF0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180028970 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z @ 0x1800AFCE8 (-SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r8
  __int64 v5; // rdx
  _QWORD **v6; // rbx
  _QWORD *v7; // rbx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x1000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 8 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        goto LABEL_10;
    }
    goto LABEL_5;
  }
LABEL_10:
  if ( (unsigned int)v5 < (unsigned int)v3 )
  {
LABEL_5:
    v6 = (_QWORD **)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_6;
  }
  v6 = 0LL;
LABEL_6:
  v7 = *v6;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v7 + 64LL))(v7, 148LL) )
    return (struct CTransform3D *)v7;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v7 + 64LL))(v7, 48LL) )
    return (struct CTransform3D *)v7[11];
  return 0LL;
}
