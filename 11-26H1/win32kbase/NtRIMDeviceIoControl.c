/*
 * XREFs of NtRIMDeviceIoControl @ 0x1401AE6F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMDeviceIoControl @ 0x14005E7A0 (RIMDeviceIoControl.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtRIMDeviceIoControl(
        char *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        ULONG Size,
        char *Src,
        ULONG a7,
        __int64 a8,
        int a9)
{
  int v10; // ebx
  void *v11; // rsi
  void *v12; // rdi
  unsigned int v14; // [rsp+60h] [rbp-48h] BYREF
  void *v15; // [rsp+68h] [rbp-40h]
  void *v16; // [rsp+70h] [rbp-38h]
  ULONG v19; // [rsp+C0h] [rbp+18h]

  v19 = a3;
  v10 = 0;
  v11 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v16 = 0LL;
  v14 = 0;
  if ( Size )
  {
    v11 = (void *)Win32AllocPoolZInitImpl(256LL, Size, 0x706D7452u);
    v15 = v11;
    if ( v11 )
    {
      if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      RtlCopyVolatileMemory(v11, a4, Size);
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v10 >= 0 )
  {
    if ( a7 )
    {
      v12 = (void *)Win32AllocPoolZInitImpl(256LL, a7, 0x706D7452u);
      v16 = v12;
      if ( v12 )
      {
        if ( &Src[a7] < Src || (unsigned __int64)&Src[a7] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        RtlCopyVolatileMemory(v12, Src, a7);
      }
      else
      {
        v10 = -1073741801;
      }
    }
    if ( v10 >= 0 )
    {
      v10 = RIMDeviceIoControl(a1, a2, v19, v11, Size, v12, a7, &v14, 0LL, 0, a9, 0);
      if ( v10 >= 0 )
      {
        if ( v12 )
          RtlCopyToUser(Src, v12, a7);
        if ( a8 )
          RtlWriteULongToUser(a8, v14);
      }
    }
  }
  if ( v11 )
    GreDeleteFastMutex((char *)v11, a2, a3, (__int64)a4);
  if ( v12 )
    GreDeleteFastMutex((char *)v12, a2, a3, (__int64)a4);
  return (unsigned int)v10;
}
