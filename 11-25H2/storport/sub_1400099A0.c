/*
 * XREFs of sub_1400099A0 @ 0x1400099A0
 * Callers:
 *     sub_140009700 @ 0x140009700 (sub_140009700.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 * Callees:
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 */

__int64 __fastcall sub_1400099A0(__int64 a1)
{
  signed __int32 v2; // edi
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *i; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 988));
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
      sub_140021810(i - 8, 4LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v3 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v4 = *(_DWORD *)(a1 + 4932);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 4936);
        if ( v5 )
        {
          v6 = v5 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v4);
          *(_DWORD *)v6 = 6;
          *(_QWORD *)(v6 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v6 + 8) = retaddr;
          *(_QWORD *)(v6 + 16) = v2;
          *(_QWORD *)(v6 + 24) = a1;
          *(_QWORD *)(v6 + 32) = v3;
        }
      }
    }
  }
  return (unsigned int)v2;
}
