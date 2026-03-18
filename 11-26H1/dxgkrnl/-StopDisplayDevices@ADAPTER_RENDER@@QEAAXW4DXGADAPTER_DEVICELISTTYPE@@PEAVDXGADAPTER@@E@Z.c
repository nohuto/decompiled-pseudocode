/*
 * XREFs of ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1401A9D9C
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1401A6D40 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1401A6EA0 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401C383C (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14042B790 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_RENDER::StopDisplayDevices(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  char v6; // r13
  struct DXGDEVICE **v7; // r15
  struct DXGDEVICE *i; // rdi
  struct DXGDEVICE *result; // rax
  struct DXGDEVICE *v10; // rbx
  char *v11; // rsi
  ADAPTER_DISPLAY *v12; // rbp
  unsigned int v13; // esi
  unsigned int v14; // r14d
  _BYTE v15[160]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = 160LL;
  v6 = a4;
  if ( a2 != 1 )
    v4 = 144LL;
  v7 = (struct DXGDEVICE **)(a1 + v4);
  for ( i = *v7; ; i = *(struct DXGDEVICE **)i )
  {
    result = 0LL;
    if ( i != (struct DXGDEVICE *)v7 )
      result = i;
    if ( !result )
      break;
    v10 = i;
    if ( i == (struct DXGDEVICE *)v7 )
      v10 = 0LL;
    v11 = (char *)v10 + 1896;
    if ( !a3 || a3 == *(_QWORD *)v11 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, (__int64)v10, 2, a4, 0);
      if ( v6 || (int)COREDEVICEACCESS::AcquireExclusive((__int64)v15, 1LL) >= 0 )
      {
        if ( *(_QWORD *)v11 )
        {
          v12 = *(ADAPTER_DISPLAY **)(*(_QWORD *)v11 + 3160LL);
          v13 = 0;
          v14 = *((_DWORD *)v12 + 24);
          if ( v14 )
          {
            do
            {
              if ( v10 == ADAPTER_DISPLAY::GetVidPnSourceOwner(v12, v13) )
                ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v12, v10);
              ++v13;
            }
            while ( v13 < v14 );
          }
        }
        DXGDEVICE::Reset(v10, 0);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v15);
    }
  }
  return result;
}
