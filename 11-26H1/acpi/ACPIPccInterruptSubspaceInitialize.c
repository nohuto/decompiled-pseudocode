/*
 * XREFs of ACPIPccInterruptSubspaceInitialize @ 0x1400B2C6C
 * Callers:
 *     ACPIPccInterruptInitialize @ 0x1400B2BE0 (ACPIPccInterruptInitialize.c)
 * Callees:
 *     ACPIPccInterruptBuildDeviceExtension @ 0x1400651B0 (ACPIPccInterruptBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIPccInterruptSubspaceInitialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v5; // ecx
  __int64 v6; // rax
  int v7; // r15d
  int v8; // esi
  __int64 Pool2; // rbx
  __int64 *v10; // rax

  v2 = 0;
  if ( *(_BYTE *)a2 == 3 || *(_BYTE *)a2 == 4 )
  {
    v5 = *(_DWORD *)(a2 + 200);
    if ( v5 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
      {
        v6 = AcpiPccPlatformInterruptList;
        v7 = (*(_BYTE *)(a2 + 132) & 1) + 1;
        v8 = (*(unsigned __int8 *)(a2 + 132) >> 1) & 1;
        while ( (__int64 *)v6 != &AcpiPccPlatformInterruptList )
        {
          if ( *(_DWORD *)(v6 + 16) == v5 )
            return v2;
          v6 = *(_QWORD *)v6;
        }
        Pool2 = ExAllocatePool2(64LL, 80LL, 1299211073LL);
        *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a2 + 200);
        *(_DWORD *)(Pool2 + 20) = v7;
        *(_DWORD *)(Pool2 + 24) = v8;
        *(_DWORD *)(Pool2 + 64) = 0;
        KeInitializeEvent((PRKEVENT)(Pool2 + 40), NotificationEvent, 0);
        v2 = ACPIPccInterruptBuildDeviceExtension(a1, Pool2);
        v10 = (__int64 *)qword_14008E990;
        if ( *(__int64 **)qword_14008E990 != &AcpiPccPlatformInterruptList )
          __fastfail(3u);
        ++AcpiPccPlatformInterruptCount;
        *(_QWORD *)Pool2 = &AcpiPccPlatformInterruptList;
        *(_QWORD *)(Pool2 + 8) = v10;
        *v10 = Pool2;
        qword_14008E990 = Pool2;
      }
    }
  }
  return v2;
}
