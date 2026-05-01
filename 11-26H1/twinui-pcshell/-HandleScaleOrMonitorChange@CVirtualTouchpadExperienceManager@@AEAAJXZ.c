/*
 * XREFs of ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803972F0
 * Callers:
 *     ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180397C00 (-OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z @ 0x1803984B0 (-ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_6f97718575e1cd15cbb9f08738e16ff5_::_lambda_6f97718575e1cd15cbb9f08738e16ff5_ @ 0x1802DCEA4 (_lambda_6f97718575e1cd15cbb9f08738e16ff5_--_lambda_6f97718575e1cd15cbb9f08738e16ff5_.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___ @ 0x180395B00 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange(
        CVirtualTouchpadExperienceManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // r8
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVirtualTouchpadExperienceManager *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 192) == 2 )
  {
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    lambda_6f97718575e1cd15cbb9f08738e16ff5_::_lambda_6f97718575e1cd15cbb9f08738e16ff5_(
      &v7,
      (__int64)this,
      (__int64 *)&v10);
    if ( !*((_BYTE *)this + 816) )
    {
      *((_BYTE *)this + 816) = 1;
      v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___(
             v3,
             v2,
             v4,
             &v7);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x33F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        *((_BYTE *)this + 816) = 0;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
