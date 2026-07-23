/*
 * XREFs of ViAllocateMapRegisterFile @ 0x140C2BF88
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfHalAllocateMapRegisters @ 0x140C2B0B0 (VfHalAllocateMapRegisters.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     ExInterlockedInsertHeadList @ 0x1403E15C0 (ExInterlockedInsertHeadList.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViAllocateFromContiguousMemory @ 0x140C2BEEC (ViAllocateFromContiguousMemory.c)
 *     ViFreeToContiguousMemory @ 0x140C2CEE0 (ViFreeToContiguousMemory.c)
 *     ViInitializePadding @ 0x140C2D6D0 (ViInitializePadding.c)
 */

char *__fastcall ViAllocateMapRegisterFile(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  ULONG_PTR Pool2; // rax
  char *v5; // rbx
  PMDL Mdl; // rsi
  ULONG_PTR v7; // rax
  struct _MDL *v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PVOID v14; // rax
  int v16; // edi
  PVOID *v17; // r14
  void *v18; // rcx

  v3 = a2;
  if ( a2 + *(_DWORD *)(a1 + 192) <= 0x20 )
  {
    if ( a2 )
    {
      Pool2 = ExAllocatePool2(64LL, 32 * (a2 - 1) + 120, 0x566C6148u);
      v5 = (char *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 28) = v3;
        Mdl = IoAllocateMdl(0LL, v3 << 12, 0, 0, 0LL);
        if ( Mdl )
        {
          v7 = ExAllocatePool2(64LL, (unsigned __int64)v3 << 12, 0x566C6148u);
          *((_QWORD *)v5 + 9) = v7;
          if ( v7 )
          {
            v8 = Mdl + 1;
            v9 = v5 + 104;
            while ( v3 )
            {
              v10 = ViAllocateFromContiguousMemory(a1, *((_DWORD *)v5 + 7) - v3);
              *v9 = v10;
              if ( v10 )
              {
                v11 = 344LL;
              }
              else
              {
                v12 = ExAllocatePool2(72LL, 0x3000uLL, 0x566C6148u);
                *v9 = v12;
                if ( !v12 )
                  goto LABEL_15;
                v11 = 348LL;
              }
              _InterlockedIncrement((volatile signed __int32 *)(v11 + a1));
              ViInitializePadding(*v9, 12288LL, 0LL, 0LL);
              PhysicalAddress = MmGetPhysicalAddress((PVOID)(*v9 + 4096LL));
              --v3;
              v9 += 4;
              v8->Next = (struct _MDL *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
              v8 = (struct _MDL *)((char *)v8 + 8);
            }
            Mdl->MdlFlags |= 2u;
            v14 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
            *((_QWORD *)v5 + 8) = v14;
            if ( v14 )
            {
              *((_QWORD *)v5 + 7) = Mdl;
              *(_DWORD *)v5 = -1393569779;
              *((_QWORD *)v5 + 10) = 0LL;
              ExInterlockedInsertHeadList((PLIST_ENTRY)(a1 + 136), (PLIST_ENTRY)(v5 + 8), (PKSPIN_LOCK)(a1 + 152));
              return v5;
            }
          }
        }
LABEL_15:
        v16 = *((_DWORD *)v5 + 7);
        if ( v16 )
        {
          v17 = (PVOID *)(v5 + 104);
          do
          {
            if ( !*v17 )
              break;
            if ( !(unsigned int)ViFreeToContiguousMemory(a1, *v17, (unsigned int)(*((_DWORD *)v5 + 7) - v16)) )
              ExFreePoolWithTag(*v17, 0);
            v17 += 4;
            --v16;
          }
          while ( v16 );
        }
        if ( Mdl )
          IoFreeMdl(Mdl);
        v18 = (void *)*((_QWORD *)v5 + 9);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        ExFreePoolWithTag(v5, 0);
      }
    }
  }
  return 0LL;
}
