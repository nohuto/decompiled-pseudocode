/*
 * XREFs of ?WaitForDeploymentOperation@Deployment@Management@Windows@@YAJKPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@3@PEAU?$IAsyncOperationProgressHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAU?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@53@PEAPEAUIDeploymentResult@123@@Z @ 0x1803B1D94
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803AC24C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$Callback@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@V_lambda_9a0aae7dbba35881869cec547d91271e_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@@01@$$QEAV_lambda_9a0aae7dbba35881869cec547d91271e_@@@Z @ 0x18039E55C (--$Callback@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Manag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 Windows::Management::Deployment::WaitForDeploymentOperation(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        ...)
{
  __int64 v4; // rbx
  HANDLE Event; // rax
  void *v6; // rsi
  signed int v7; // eax
  signed int v8; // edi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  DWORD v12; // eax
  signed int LastError; // eax
  char v15; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+28h] [rbp-18h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF
  va_list va; // [rsp+88h] [rbp+48h]
  __int64 v21; // [rsp+90h] [rbp+50h]
  va_list va1; // [rsp+98h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v4 = 0LL;
  v18 = 0LL;
  v17 = 0;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  v6 = Event;
  if ( Event )
  {
    v16[0] = Event;
    v16[1] = 0LL;
    v9 = Microsoft::WRL::Callback<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,_lambda_9a0aae7dbba35881869cec547d91271e_>(
           (__int64 *)va,
           (__int64)v16);
    v4 = 0LL;
    if ( &v15 != (char *)v9 )
    {
      v4 = *v9;
      *v9 = 0LL;
    }
    v16[0] = v4;
    v10 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v4 )
    {
      v11 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      v8 = v11(a2, &GUID_00000036_0000_0000_c000_000000000046, &v18);
      if ( v8 >= 0 )
      {
        v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a2)[8])(a2, v4);
        if ( v8 >= 0 )
        {
          v12 = WaitForSingleObject(v6, 0xFFFFFFFF);
          if ( v12 == 258 )
          {
            v8 = -2147023436;
          }
          else if ( v12 )
          {
            LastError = GetLastError();
            v8 = LastError;
            if ( LastError > 0 )
              v8 = (unsigned __int16)LastError | 0x80070000;
          }
          else
          {
            v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v17);
            if ( v8 >= 0 )
            {
              if ( !v21
                || (v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[10])(a2),
                    v8 >= 0) )
              {
                if ( v17 == 2 )
                {
                  v8 = -2147009288;
                }
                else if ( v17 == 3 )
                {
                  LODWORD(v19) = 0;
                  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, (__int64 *)va);
                  if ( v8 >= 0 )
                    v8 = v19;
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 80LL))(v18);
              }
            }
          }
        }
      }
    }
    else
    {
      v8 = -2147024882;
    }
    CloseHandle(v6);
  }
  else
  {
    v7 = GetLastError();
    v8 = v7;
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v8;
}
