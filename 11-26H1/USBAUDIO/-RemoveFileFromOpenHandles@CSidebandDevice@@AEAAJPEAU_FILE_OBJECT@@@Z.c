/*
 * XREFs of ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1400138A0
 * Callers:
 *     ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400127A0 (-IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x14000ED98 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CSidebandDevice::RemoveFileFromOpenHandles(CSidebandDevice *this, struct _FILE_OBJECT *a2)
{
  KIRQL v4; // si
  _QWORD *v5; // r9
  _QWORD *i; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  int v9; // edx
  int v10; // r8d

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)this + 5) + 240LL));
  v5 = (_QWORD *)(*((_QWORD *)this + 5) + 224LL);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = (_QWORD *)*i;
    if ( (struct _FILE_OBJECT *)*(i - 1) == a2 )
    {
      if ( (_QWORD *)v7[1] != i || (v8 = (_QWORD *)i[1], (_QWORD *)*v8 != i) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      operator delete(i - 1);
      break;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 5) + 240LL), v4);
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}
