/*
 * XREFs of MiValidWriteFaultProcess @ 0x1403A76E0
 * Callers:
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MiPromoteVirtualizationFault @ 0x1406FF80C (MiPromoteVirtualizationFault.c)
 * Callees:
 *     MiCheckAndUpdateIoAttribution @ 0x14026DF30 (MiCheckAndUpdateIoAttribution.c)
 *     MiLockNestedPageTable @ 0x14029EBE0 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiInvalidPteConforms @ 0x1402F4430 (MiInvalidPteConforms.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiPfnIsActivePageTable @ 0x1403A77A8 (MiPfnIsActivePageTable.c)
 *     MiPfnIsPageTable @ 0x1403A77E0 (MiPfnIsPageTable.c)
 */

void __fastcall MiValidWriteFaultProcess(signed __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int16 v6; // cx
  unsigned __int64 v7; // rdi
  __int16 v8; // cx

  v2 = (a2 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 <= qword_140E2D7A0 )
  {
    v4 = (_QWORD *)(48 * v2 - 0x220000000000LL);
    if ( (v4[5] & 0x40000000000000LL) != 0 )
    {
      if ( (unsigned int)MiPfnIsPageTable(48 * v2 - 0x220000000000LL) )
      {
        v7 = v4[1];
        MiLockNestedPageTable(a1, v7);
        if ( !(unsigned int)MiPfnIsActivePageTable(v4)
          && MiInvalidPteConforms(v4[2])
          && (v8 & 0x400) == 0
          && (v8 & 8) != 0 )
        {
          MiLockPageAndSetDirty((ULONG_PTR)v4, 1);
        }
        MiUnlockPageTableInternal(a1, v7);
      }
      else if ( MiInvalidPteConforms(v4[2]) && (v6 & 0x400) == 0 && (v6 & 8) != 0 )
      {
        MiLockPageAndSetDirty((ULONG_PTR)v4, 1);
      }
      if ( (__int64)v4[5] < 0 && (v4[2] & 0x400LL) != 0 )
        MiCheckAndUpdateIoAttribution((__int64)v4, v5);
    }
  }
}
