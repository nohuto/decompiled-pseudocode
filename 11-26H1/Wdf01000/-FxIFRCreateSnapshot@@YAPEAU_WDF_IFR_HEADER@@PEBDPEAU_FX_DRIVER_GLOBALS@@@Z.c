/*
 * XREFs of ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008CE58
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x14008D21C (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     FxIsEqualGuid @ 0x1400422A4 (FxIsEqualGuid.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400845D8 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ds @ 0x14008D7D4 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x14008D908 (WPP_IFR_SF_s.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

_WDF_IFR_HEADER *__fastcall FxIFRCreateSnapshot(const char *DriverName, _FX_DRIVER_GLOBALS *FxGlobalsForTracing)
{
  char *v3; // rsi
  int v4; // ebx
  KIRQL v6; // al
  unsigned int v7; // r8d
  _FX_DRIVER_GLOBALS *Flink; // rdi
  KIRQL v9; // r15
  signed __int32 WdfLogHeaderRefCount; // eax
  signed __int32 v11; // ecx
  signed __int32 v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  size_t v15; // rbx
  char *Pool2; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_1400C9010);
  Flink = (_FX_DRIVER_GLOBALS *)qword_1400C9018;
  v9 = v6;
  while ( 1 )
  {
    if ( Flink == (_FX_DRIVER_GLOBALS *)&qword_1400C9018 )
    {
      WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xAu, traceGuid, DriverName);
      WPP_IFR_SF_(FxGlobalsForTracing, 3u, 0x16u, 0xBu, WPP_TracingIfrReplay_cpp_Traceguids);
      goto LABEL_31;
    }
    if ( !_stricmp(Flink->Public.DriverName, DriverName) )
      break;
    Flink = (_FX_DRIVER_GLOBALS *)Flink->Linkage.Flink;
  }
  if ( !Flink->WdfLogHeader )
  {
    WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xCu, traceGuid, DriverName);
    goto LABEL_31;
  }
  WdfLogHeaderRefCount = Flink->WdfLogHeaderRefCount;
  while ( WdfLogHeaderRefCount > 0 )
  {
    v11 = WdfLogHeaderRefCount;
    v12 = WdfLogHeaderRefCount + 1;
    WdfLogHeaderRefCount = _InterlockedCompareExchange(
                             &Flink->WdfLogHeaderRefCount,
                             WdfLogHeaderRefCount + 1,
                             WdfLogHeaderRefCount);
    if ( v11 == WdfLogHeaderRefCount )
      goto LABEL_12;
  }
  v12 = WdfLogHeaderRefCount;
LABEL_12:
  if ( v12 )
  {
    v13 = *((_DWORD *)Flink->WdfLogHeader + 6);
    v14 = v13 + 72;
    if ( (unsigned int)v14 < v13 )
    {
      v4 = -1073741675;
      goto $DoneReleaseLock;
    }
    if ( v13 - 4024 > 0xF000 )
    {
      v4 = -1073741306;
      goto $DoneReleaseLock;
    }
    v15 = (unsigned int)v14;
    Pool2 = (char *)ExAllocatePool2(64LL, v14, 1733064774LL);
    v3 = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
$DoneReleaseLock:
      FxIFRStop(Flink);
      goto LABEL_31;
    }
    memmove(Pool2, Flink->WdfLogHeader, v15);
    *((_QWORD *)v3 + 2) = v3 + 72;
    v17 = *((_DWORD *)v3 + 6);
    if ( v17 + 72 < v17 )
    {
      v4 = -1073741675;
    }
    else if ( v17 - 4024 > 0xF000 )
    {
      v4 = -1073741306;
    }
    else
    {
      if ( FxIsEqualGuid((const _GUID *)v3, &WdfTraceGuid) )
      {
        v18 = *((_DWORD *)v3 + 6);
        if ( *((unsigned __int16 *)v3 + 14) <= v18 && *((unsigned __int16 *)v3 + 15) <= v18 )
        {
          v4 = 0;
          goto $DoneReleaseLock;
        }
      }
      v4 = -1073741823;
    }
    ExFreePoolWithTag(v3, 0x674C7846u);
    v3 = 0LL;
    goto $DoneReleaseLock;
  }
LABEL_31:
  KeReleaseSpinLock(&qword_1400C9010, v9);
  if ( v4 < 0 )
    WPP_IFR_SF_ds(FxGlobalsForTracing, v19, v20, v21, traceGuid, v4, DriverName);
  return (_WDF_IFR_HEADER *)v3;
}
