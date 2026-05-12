/*
 * XREFs of sub_140027FB4 @ 0x140027FB4
 * Callers:
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 * Callees:
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 *     sub_14002871C @ 0x14002871C (sub_14002871C.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 *     sub_140028D98 @ 0x140028D98 (sub_140028D98.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

NTSTATUS __fastcall sub_140027FB4(__int64 a1, _QWORD *a2)
{
  __int64 RecommendedSharedDataAlignment; // rdi
  ULONG MaximumProcessorCount; // eax
  __int64 v6; // rsi
  int v7; // r14d
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  __int64 v10; // rbp
  size_t v11; // rsi
  __int64 v12; // rdi
  void *v13; // rcx
  void *v14; // rcx
  char v15; // al
  int v16; // edi
  __int64 v17; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = MaximumProcessorCount;
  v7 = (*(_BYTE *)(a1 + 112) & 2) != 0 ? RecommendedSharedDataAlignment + 216 : 0;
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + v7 + ((MaximumProcessorCount + 57) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    sub_140028D98(DeviceExtension);
    v10 = (unsigned int)RecommendedSharedDataAlignment;
    v11 = v6 << 6;
    v12 = ~(RecommendedSharedDataAlignment - 1);
    v13 = (void *)(v12 & (unsigned __int64)&DeviceExtension[v10 + 3647]);
    *((_QWORD *)DeviceExtension + 5) = v13;
    memset_0(v13, 0, v11);
    if ( v7 )
    {
      v14 = (void *)(v12 & (v10 + v11 + *((_QWORD *)DeviceExtension + 5) - 1LL));
      *((_QWORD *)DeviceExtension + 4) = v14;
      memset_0(v14, 0, 0xD8uLL);
    }
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = DeviceObject;
    *(_WORD *)(DeviceExtension + 1861) = 256;
    DeviceExtension[1863] = 1;
    DeviceObject->Flags |= 0x10u;
    DeviceObject->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 14) = 0;
    v15 = (*(_BYTE *)(a1 + 4892) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4892) + 3) & 0xFFFFFFFC) > 0xFF )
      v15 = -1;
    DeviceExtension[1860] = v15;
    v16 = sub_1400281F4(DeviceExtension);
    if ( v16 >= 0 )
    {
      sub_14002871C(DeviceExtension);
      DeviceExtension[757] = 1;
      sub_140028D00(DeviceExtension + 720, 0LL);
      sub_140021810((__int64)DeviceExtension, 1);
      v17 = *((_QWORD *)DeviceExtension + 3);
      DeviceExtension[505] &= ~0x80u;
      *((_QWORD *)DeviceExtension + 234) = 0LL;
      DeviceExtension[504] &= ~0x80u;
      if ( *(_QWORD *)(v17 + 4960)
        && (*(_BYTE *)(v17 + 108) & 8) == 0
        && !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 902, 1, 0) )
      {
        sub_1400212C0(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
      }
      *((_DWORD *)DeviceExtension + 482) = 10;
      *((_DWORD *)DeviceExtension + 483) = 25;
      *((_DWORD *)DeviceExtension + 484) = 125;
      *a2 = DeviceExtension;
    }
    else
    {
      IoDeleteDevice(DeviceObject);
    }
    return v16;
  }
  return result;
}
