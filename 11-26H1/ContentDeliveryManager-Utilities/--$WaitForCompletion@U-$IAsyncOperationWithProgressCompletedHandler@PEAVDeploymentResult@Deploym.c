/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180074828
 * Callers:
 *     ??R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ @ 0x180074C44 (--R_lambda_69f70f84236fb302921f03f01c6e57bb_@@QEBA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@V1?1???$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJ012@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@@Z @ 0x18007407C (--$MakeAndInitialize@VFTMEventDelegate@-1---$WaitForCompletion@U-$IAsyncOperationWithProgressCom.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        HRESULT a2,
        __int64 a3)
{
  int v4; // ebx
  char v5; // bl
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-20h] BYREF
  HANDLE pHandles[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  HRESULT v14; // [rsp+78h] [rbp+28h] BYREF
  __int64 dwindex; // [rsp+80h] [rbp+30h] BYREF
  HANDLE *v16; // [rsp+88h] [rbp+38h] BYREF

  dwindex = a3;
  v14 = a2;
  v11 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v4 = ___MakeAndInitialize_VFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationWithProgressCompletedHandler_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__Foundation_Windows__U__IAsyncOperationWithProgress_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__23___YAJPEAU__IAsyncOperationWithProgress_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z_V1_1____WaitForCompletion_U__IAsyncOperationWithProgressCompletedHandler_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__Foundation_Windows__U__IAsyncOperationWithProgress_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__23___YAJ012_Z___V_Details_WRL_Microsoft__YAJPEAPEAVFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationWithProgressCompletedHandler_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__Foundation_Windows__U__IAsyncOperationWithProgress_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__23___YAJPEAU__IAsyncOperationWithProgress_PEAVDeploymentResult_Deployment_Management_Windows__UDeploymentProgress_234__Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z__Z((char **)&v16);
  v14 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), HANDLE *))(*a1)[8])(a1, v16);
    v14 = v4;
    if ( v4 >= 0 )
    {
      pHandles[0] = v16[7];
      pHandles[1] = 0LL;
      v5 = 0;
      LODWORD(dwindex) = 0;
      v14 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
      if ( v14 >= 0 && (_DWORD)dwindex )
      {
        v14 = -2147023673;
        v5 = 1;
      }
      v6 = 0LL;
      v13 = 0LL;
      if ( v5 )
      {
        v7 = **a1;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        v8 = v7(a1, &GUID_00000036_0000_0000_c000_000000000046, &v13);
        v6 = v13;
        if ( v8 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
          v6 = v13;
        }
      }
      if ( v14 < 0 || *((_DWORD *)v16 + 12) == 1 )
        goto LABEL_17;
      if ( !v6 )
      {
        v9 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))**a1;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        if ( v9(a1, &GUID_00000036_0000_0000_c000_000000000046, &v13) < 0 )
        {
LABEL_17:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
          v4 = v14;
          goto LABEL_18;
        }
        v6 = v13;
      }
      (*(void (__fastcall **)(__int64, HRESULT *))(*(_QWORD *)v6 + 64LL))(v6, &v14);
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v4;
}
