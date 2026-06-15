/*
 * XREFs of ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F13FC
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800F16B0 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4550 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800F4ABC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4378 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_dI @ 0x1800F5FF0 (WPP_SF_dI.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireResourceHandle(
        CConstraintModelResourceManager *this,
        struct _ResourceInfo *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned __int64 *a6)
{
  unsigned int v7; // r15d
  __int64 v9; // r14
  char *v11; // rax
  __int64 v12; // r8
  char *v13; // rdi
  int v14; // ebx
  char *v15; // rdx
  __int64 v16; // rax
  DWORD CurrentProcessId; // eax
  __int64 v18; // rbx
  DWORD v19; // eax
  int v20; // r14d
  int v22; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handles; // [rsp+60h] [rbp-20h] BYREF
  __int128 v25; // [rsp+68h] [rbp-18h] BYREF

  v7 = 100;
  v23 = 0LL;
  v22 = 0;
  if ( a4 <= 0x64 )
    v7 = a4;
  v9 = a3;
  v11 = (char *)operator new(saturated_mul(a3, 0x18uLL));
  v13 = v11;
  if ( !v11 )
  {
    if ( a5 )
      return (unsigned int)-2147024882;
    goto LABEL_26;
  }
  if ( a3 )
  {
    v15 = v11 + 16;
    do
    {
      *((_DWORD *)v15 - 4) = *(_DWORD *)a2;
      v16 = *((unsigned int *)a2 + 1);
      a2 = (struct _ResourceInfo *)((char *)a2 + 540);
      *((_QWORD *)v15 - 1) = v16;
      *((_WORD *)v15 + 2) = 0;
      *(_DWORD *)v15 = v7;
      v15 += 24;
      --v9;
    }
    while ( v9 );
  }
  if ( a5 )
  {
    CurrentProcessId = GetCurrentProcessId();
    v14 = RmAvailabilityCheck(a3, v13, v7, CurrentProcessId);
    operator delete(v13);
    return (unsigned int)v14;
  }
  v18 = *((_QWORD *)this + 8);
  v19 = GetCurrentProcessId();
  v14 = RmAcquireResources(a3, v13, v7, v19, this, v18, 0, 0, &v22, &v23);
  if ( v14 < 0 )
  {
LABEL_26:
    v14 = -2005139335;
    goto LABEL_27;
  }
  if ( v22 )
  {
    v20 = 0;
    while ( 1 )
    {
      Handles = (HANDLE)*((_QWORD *)this + 8);
      if ( WaitForMultipleObjects(1u, &Handles, 0, 0x3E8u) )
        break;
      CConstraintModelResourceManager::ProcessRevokedResources(this);
      v25 = 0LL;
      while ( (int)RmGetNotification(v23, &v25) >= 0 )
      {
        if ( (_DWORD)v25 )
        {
          if ( (_DWORD)v25 == 1 )
            v14 = -2005139335;
        }
        else
        {
          v20 = 1;
        }
      }
      if ( v14 < 0 )
        goto LABEL_25;
      if ( v20 )
        goto LABEL_23;
    }
    v14 = -2005139335;
LABEL_25:
    RmReleaseResources(v23);
LABEL_27:
    if ( !v13 )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_23:
  *a6 = v23;
LABEL_28:
  operator delete(v13);
LABEL_29:
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
        v14);
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v12, v7, *a6);
  }
  return (unsigned int)v14;
}
