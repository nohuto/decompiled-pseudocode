/*
 * XREFs of MiImagePageOk @ 0x1402D91C0
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // r14
  __int64 v9; // rbx
  __int64 Address; // rax
  __int64 v12; // rdx
  int v13; // eax

  v4 = a4;
  if ( *(__int64 *)(a2 + 40) >= 0 || (*(_QWORD *)(a2 + 16) & 0x400LL) == 0 || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    return 1LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( qword_140E2D8C0 && (v6 & 0x10) == 0 )
    v6 &= qword_140E2D8C8;
  v7 = (v6 >> 12) & 0x3FFFFFFFFFFLL;
  v8 = v7 ? (_DWORD *)(qword_140E37D10 - 8 + 8 * v7) : 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 56LL) & 0x20) == 0 )
    return 1LL;
  v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v8 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
  if ( !v9 || (v9 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL || (v9 & 3) == 2 )
    return 1LL;
  if ( a1 < 0xFFFF800000000000uLL )
  {
    if ( a4 )
    {
LABEL_22:
      v13 = *(_DWORD *)(v4 + 48);
      return (v13 & 0x1C) == 8
          && ((v13 & 0x3E0) == 0x20
           || (*(_DWORD *)(v4 + 72) & 8) != 0 && (v9 & 4) == 0
           || (MiFlags & 0x1000) != 0 && (v8[8] & 0x20000) != 0);
    }
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a1);
    LOBYTE(v12) = 17;
    v4 = Address;
    MiUnlockVadTree(1LL, v12);
  }
  else if ( (MiFlags & 0x20000) == 0 || (*(_BYTE *)(a2 + 16) & 0x40) == 0 )
  {
    return 1LL;
  }
  if ( v4 )
    goto LABEL_22;
  return 0LL;
}
