/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14095D738
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140A87C38 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiVadSupportsPrivateCommit @ 0x1403BBFA4 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403BC004 (MiVadMapsLargeImage.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14095D964 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiCheckSecuredVad @ 0x14095DB28 (MiCheckSecuredVad.c)
 *     MiIsRangeFullyCommitted @ 0x14095DDE4 (MiIsRangeFullyCommitted.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  _KPROCESS *Process; // r13
  ULONG_PTR v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // ecx
  int VadFlags; // ebx
  __int64 v14; // rcx
  int OnlyOnSectionView; // [rsp+30h] [rbp-88h] BYREF
  struct _KPROCESS *v17; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v17 = a1;
  OnlyOnSectionView = 0;
  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = a3;
  v5 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v6 = 0LL;
  v7 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == a1 )
    Process = 0LL;
  else
    KeStackAttachProcess(a1, &ApcState);
  v9 = MiObtainReferencedVadEx(v3, 0LL, &OnlyOnSectionView);
  v10 = v9;
  if ( v9 )
  {
    if ( v7 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      if ( (unsigned int)MiVadSupportsPrivateCommit(v9) )
      {
        VadFlags = MiReadVadFlags(v11);
        if ( (VadFlags & 2) == 0
          || (OnlyOnSectionView = MiCheckSecuredVad(v12, v5, v4, 1, 0, 0LL), OnlyOnSectionView >= 0) )
        {
          if ( (VadFlags & 0x80000) == 0
            && (MiReadVadFlags2(v10) & 4) == 0
            && (MmCompatibleProtectionMask[(unsigned __int8)VadFlags >> 5] | 0x702) == (MmCompatibleProtectionMask[(unsigned __int8)VadFlags >> 5] | 0x700)
            && ((*(_DWORD *)(**(_QWORD **)(v10 + 80) + 56LL) & 0xA0) == 0x80
             || !(unsigned int)MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v14, v3, v7)) )
          {
            OnlyOnSectionView = MiSetReadOnlyOnSectionView((__int64)v17, v10, v3, v7);
            if ( OnlyOnSectionView >= 0 )
            {
              v6 = MiAddSecureEntry(v10, v3, v7, -1073741823, 0);
              if ( !v6 )
                MiUnsecureVirtualMemoryAgainstWrites(v10, v3, v7);
            }
          }
        }
      }
    }
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v6 )
    return qword_140E2D640 ^ v6;
  return v6;
}
