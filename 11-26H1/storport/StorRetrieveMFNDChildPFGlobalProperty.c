/*
 * XREFs of StorRetrieveMFNDChildPFGlobalProperty @ 0x14019473C
 * Callers:
 *     StorMFNDNameSpaceReadWrite @ 0x140192278 (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1401940C4 (StorQueryMFNDNamespacePageMap.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorRetrieveMFNDChildPFGlobalProperty(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 Pool; // rax
  void *v5; // rdi
  _DWORD v6[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+88h] [rbp-20h]
  int v8; // [rsp+C0h] [rbp+18h] BYREF

  memset_0(v6, 0, 0x40uLL);
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 40LL) )
      return 0LL;
    Pool = RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v5 = (void *)Pool;
    if ( Pool )
    {
      v6[0] = 10;
      v7 = v7 & 0xFFFFFF00 | 0xD2;
      v8 = StorSendMFNDCommand(a1, Pool, 0, 512, (__int64)v6);
      v2 = v8;
      if ( v8 < 0 )
      {
        StorMapMFNDErrorToNtStatus(0, &v8);
        ExFreePoolWithTag(v5, 0x464D6152u);
        return (unsigned int)v8;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 40LL) = v5;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
