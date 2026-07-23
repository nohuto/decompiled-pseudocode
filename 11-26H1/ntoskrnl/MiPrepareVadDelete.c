/*
 * XREFs of MiPrepareVadDelete @ 0x140A941FC
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 * Callees:
 *     MiLockAddressSpaceToo @ 0x140317094 (MiLockAddressSpaceToo.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 */

__int64 __fastcall MiPrepareVadDelete(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  bool v7; // zf
  struct _KTHREAD *CurrentThread; // rcx
  __int64 VadFlags; // rax
  struct _KLOCK_ENTRIES *v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // r11
  struct _KTHREAD *v15; // rcx

  if ( a3 == (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    && a4 == (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    v7 = *a2 == 0;
    *a5 = 0;
    if ( !v7 )
    {
      CurrentThread = KeGetCurrentThread();
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
      *a2 = 0;
    }
    return 0LL;
  }
  VadFlags = MiReadVadFlags(a1);
  if ( (VadFlags & 0x180000) == 0x180000 )
    return 3221225631LL;
  if ( (VadFlags & 0x1C) != 0 )
  {
    if ( (VadFlags & 0x1C) == 0x10 )
      goto LABEL_10;
    return 3221225631LL;
  }
  if ( (VadFlags & 0x80000) != 0 && ((VadFlags & 0x200000) != 0 || ((unsigned int)VadFlags & 0x60000) >= 0x40000) )
    return 3221225631LL;
LABEL_10:
  if ( v11 == v13 )
    *a5 = 1;
  else
    *a5 = (v12 != v10) + 2;
  if ( *a2 )
    return 0LL;
  v15 = KeGetCurrentThread();
  *a2 = 1;
  if ( (unsigned int)MiLockAddressSpaceToo((__int64)v15->ApcState.Process, a1, 0LL, v12) )
    return 0LL;
  return (unsigned int)MiVadDeleted(a1) != 0 ? -1073741664 : -1073741267;
}
