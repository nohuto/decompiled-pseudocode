/*
 * XREFs of ?Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1400A2A20
 * Callers:
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x1400A293C (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1403F4984 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkGetSharedSyncObjectType @ 0x14040B050 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipAwayFence::Initialize(CFlipAwayFence *this, HANDLE *a2)
{
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v5; // edx
  HANDLE v6; // rax
  _QWORD v8[13]; // [rsp+30h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF

  Object = 0LL;
  SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
  v5 = ObReferenceObjectByHandle(a2[1], 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
  *((_QWORD *)this + 6) = Object;
  if ( v5 >= 0 )
  {
    memset(v8, 0, 0x58uLL);
    v6 = a2[1];
    HIDWORD(v8[1]) |= 0x83u;
    v8[0] = v6;
    LODWORD(v8[1]) = *((_DWORD *)this + 4);
    v5 = DxgkOpenSyncObjectFromNtHandle2Internal(v8, 0LL, 0LL);
    if ( v5 >= 0 )
      *((_DWORD *)this + 10) = v8[2];
  }
  return (unsigned int)v5;
}
