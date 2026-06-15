/*
 * XREFs of ?Initialize@CBtAudioResourceManagerBase@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800E45B8
 * Callers:
 *     ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F6CF8 (--$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoo.c)
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F6DDC (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluet.c)
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtAudioResourceManagerBase::Initialize(
        CBtAudioResourceManagerBase *this,
        struct _GUID *a2,
        struct IBluetoothResourceArbitrator *a3)
{
  __int64 v4; // rbx
  int Buf2; // [rsp+30h] [rbp+8h] BYREF
  int Buf1; // [rsp+38h] [rbp+10h] BYREF

  *(struct _GUID *)((char *)this + 40) = *a2;
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IBluetoothResourceArbitrator *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Buf1 = 0;
  Buf2 = 0;
  memcmp_0(&Buf1, &Buf2, 4uLL);
  memset_0((char *)this + 304, 0, 0x60uLL);
  Buf1 = 0;
  Buf2 = 0;
  memcmp_0(&Buf1, &Buf2, 4uLL);
  memset_0((char *)this + 400, 0, 0x60uLL);
  return 0LL;
}
