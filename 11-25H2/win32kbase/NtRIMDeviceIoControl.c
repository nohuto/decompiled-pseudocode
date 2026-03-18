/*
 * XREFs of NtRIMDeviceIoControl @ 0x14017E770
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x1401D7B10 (Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtRIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char *a4,
        unsigned int Size,
        char *Src,
        unsigned int a7,
        _DWORD *a8,
        int a9)
{
  int v13; // ebx
  void *v14; // r14
  void *v15; // rdi
  ULONG64 v16; // rcx
  _DWORD **v17; // rsi
  _DWORD *v18; // rcx
  int v20; // [rsp+60h] [rbp-58h] BYREF
  void *v21; // [rsp+68h] [rbp-50h]
  void *v22; // [rsp+70h] [rbp-48h]

  if ( !(unsigned int)Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline() )
    return RIMDeviceIoControl(a1, a2, a3, a4, Size, Src, a7, a8, 0LL, 0, a9, 1);
  v13 = 0;
  v14 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  v22 = 0LL;
  v20 = 0;
  if ( Size )
  {
    v14 = (void *)Win32AllocPoolZInitImpl(256LL, Size, 0x706D7452u);
    v21 = v14;
    if ( v14 )
    {
      if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      RtlCopyVolatileMemory(v14, a4, Size);
    }
    else
    {
      v13 = -1073741801;
    }
  }
  if ( v13 >= 0 )
  {
    if ( a7 )
    {
      v15 = (void *)Win32AllocPoolZInitImpl(256LL, a7, 0x706D7452u);
      v22 = v15;
      if ( v15 )
      {
        if ( &Src[a7] < Src || (unsigned __int64)&Src[a7] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        RtlCopyVolatileMemory(v15, Src, a7);
      }
      else
      {
        v13 = -1073741801;
      }
    }
    if ( v13 >= 0 )
    {
      v13 = RIMDeviceIoControl(a1, a2, a3, v14, Size, v15, a7, &v20, 0LL, 0, a9, 0);
      if ( v13 >= 0 )
      {
        if ( v15 )
        {
          v16 = (ULONG64)&Src[a7];
          v17 = (_DWORD **)MmUserProbeAddress;
          if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)Src )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
            v17 = (_DWORD **)MmUserProbeAddress;
          }
          memmove(Src, v15, a7);
        }
        else
        {
          v17 = (_DWORD **)MmUserProbeAddress;
        }
        v18 = a8;
        if ( a8 )
        {
          if ( a8 >= *v17 )
            v18 = *v17;
          *v18 = v20;
        }
      }
    }
  }
  if ( v14 )
    GreDeleteFastMutex((char *)v14);
  if ( v15 )
    GreDeleteFastMutex((char *)v15);
  return (unsigned int)v13;
}
