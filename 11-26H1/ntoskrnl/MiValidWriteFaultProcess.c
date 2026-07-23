/*
 * XREFs of MiValidWriteFaultProcess @ 0x1403A9440
 * Callers:
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiPromoteVirtualizationFault @ 0x1407044DC (MiPromoteVirtualizationFault.c)
 * Callees:
 *     MiCheckAndUpdateIoAttribution @ 0x14026D4A0 (MiCheckAndUpdateIoAttribution.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiPfnIsActivePageTable @ 0x1403A9508 (MiPfnIsActivePageTable.c)
 *     MiPfnIsPageTable @ 0x1403A9540 (MiPfnIsPageTable.c)
 */

void __fastcall MiValidWriteFaultProcess(signed __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int16 v9; // cx
  __int64 v10; // r8

  v2 = (a2 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 <= qword_140E2D920 )
  {
    v4 = (_QWORD *)(48 * v2 - 0x220000000000LL);
    if ( (v4[5] & 0x40000000000000LL) != 0 )
    {
      if ( (unsigned int)MiPfnIsPageTable(48 * v2 - 0x220000000000LL) )
      {
        v8 = v4[1];
        MiLockNestedPageTable(a1, v8);
        if ( !(unsigned int)MiPfnIsActivePageTable(v4)
          && MiInvalidPteConforms(v4[2])
          && (v9 & 0x400) == 0
          && (v9 & 8) != 0 )
        {
          MiLockPageAndSetDirty((ULONG_PTR)v4, 1, v10);
        }
        MiUnlockPageTableInternal(a1, v8);
      }
      else if ( MiInvalidPteConforms(v4[2]) && (v6 & 0x400) == 0 && (v6 & 8) != 0 )
      {
        MiLockPageAndSetDirty((ULONG_PTR)v4, 1, v7);
      }
      if ( (__int64)v4[5] < 0 && (v4[2] & 0x400LL) != 0 )
        MiCheckAndUpdateIoAttribution((__int64)v4, v5);
    }
  }
}
