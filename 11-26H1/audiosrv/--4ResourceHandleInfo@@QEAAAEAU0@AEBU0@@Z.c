/*
 * XREFs of ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800F0EC4
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F2A54 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z @ 0x1800F49B0 (-ReacquireResourceGroup@CConstraintModelResourceManager@@UEAAJKAEAUResourceHandleInfo@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C2BBC (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800F0DE0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall ResourceHandleInfo::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _WORD *v5; // rcx
  __int64 v6; // rdx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = 128LL;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v5 = (_WORD *)(a1 + 12);
  v6 = a2 - a1;
  do
  {
    *v5 = *(_WORD *)((char *)v5 + v6);
    ++v5;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)(a1 + 268) = *(_OWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a2 + 284);
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(a2 + 288);
  *(_DWORD *)(a1 + 292) = *(_DWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 296) = *(_DWORD *)(a2 + 296);
  EndpointInfo::operator=((EndpointInfo *)(a1 + 304), a2 + 304);
  *(_DWORD *)(a1 + 432) = *(_DWORD *)(a2 + 432);
  *(_DWORD *)(a1 + 436) = *(_DWORD *)(a2 + 436);
  *(_DWORD *)(a1 + 440) = *(_DWORD *)(a2 + 440);
  wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 448),
    (__int64 *)(a2 + 448));
  return a1;
}
