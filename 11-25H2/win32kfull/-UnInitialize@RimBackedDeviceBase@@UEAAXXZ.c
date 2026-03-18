/*
 * XREFs of ?UnInitialize@RimBackedDeviceBase@@UEAAXXZ @ 0x1402EFB40
 * Callers:
 *     ??1InkDevice@@UEAA@XZ @ 0x1402EE8E4 (--1InkDevice@@UEAA@XZ.c)
 *     ??_ERimBackedDeviceBase@@UEAAPEAXI@Z @ 0x1402EE950 (--_ERimBackedDeviceBase@@UEAAPEAXI@Z.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1402EFAB0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall RimBackedDeviceBase::UnInitialize(RimBackedDeviceBase *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(RimBackedDeviceBase *))(*(_QWORD *)this + 32LL))(this);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    RawInputManagerDeviceObjectDereference(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
