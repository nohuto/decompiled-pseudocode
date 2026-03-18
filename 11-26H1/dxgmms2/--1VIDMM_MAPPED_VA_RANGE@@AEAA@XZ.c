/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140129B90
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x14003A4B0 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037EF8 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004DCBC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  char *v5; // rsi
  _QWORD *VidMmGlobalAllocFromOwner; // rbx
  __int64 v7; // rdx
  char **v8; // rax

  v1 = (_QWORD *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 )
      goto LABEL_15;
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_15;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  if ( (*((_DWORD *)this + 18) & 0x4000) != 0 )
  {
    RtlAvlRemoveNode(
      *(_QWORD *)this + 24 * ((((unsigned __int64)*((unsigned int *)this + 18) >> 4) & 0x3F) + 4),
      (char *)this + 8);
    *(_OWORD *)((char *)this + 8) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline() )
        --*(_DWORD *)(*(_QWORD *)this + 76LL);
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x2000) == 0 )
  {
    v5 = (char *)this + 48;
    if ( *((_QWORD *)this + 6) )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(*((_DWORD *)this + 18) & 0xF, *((_QWORD **)this + 8));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 24, 0LL);
      v7 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 )
      {
        v8 = (char **)*((_QWORD *)this + 7);
        if ( *v8 == v5 )
        {
          *v8 = (char *)v7;
          *(_QWORD *)(v7 + 8) = v8;
          *(_QWORD *)v5 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 24, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
      }
LABEL_15:
      __fastfail(3u);
    }
  }
}
