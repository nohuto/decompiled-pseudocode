/*
 * XREFs of MiCreateSection @ 0x14098B4B4
 * Callers:
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x14098B2D0 (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B458 (MmCreateCacheManagerSection.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiLogSectionObjectEvent @ 0x14077DED8 (MiLogSectionObjectEvent.c)
 *     MiCreatePagingFileMap @ 0x14098989C (MiCreatePagingFileMap.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B6D4 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x14098BADC (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 */

__int64 __fastcall MiCreateSection(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12,
        __int64 a13)
{
  int i; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  __int64 v20; // rsi
  _QWORD *v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v27[10]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  PVOID Object; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+138h] [rbp+30h]

  for ( i = 0; ; i = ((v27[0] >> 23) & 1) << 23 )
  {
    memset_0(v27, 0, 0xC8uLL);
    SectionPacket = MiInitializeCreateSectionPacket(
                      (unsigned int)v27,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13);
    if ( SectionPacket < 0 )
      break;
    v27[0] |= i;
    if ( !v28 && !v29 )
    {
      SectionPacket = MiCreatePagingFileMap((__int64)v27);
LABEL_7:
      if ( SectionPacket >= 0 )
      {
        SectionPacket = MiFinishCreateSection(v27);
        if ( SectionPacket >= 0 )
        {
          v20 = v30;
          v21 = Object;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v30 + 24LL), -1LL, -1LL);
          v23 = v22;
          if ( ((*(_DWORD *)(v20 + 56) & 0x20) != 0 || (v27[0] & 9) != 0 || (*(_DWORD *)(v20 + 56) & 0x8000) == 0)
            && v21[6] <= v22
            || (v24 = v21[6],
                v21[6] = v23,
                v26 = v24,
                SectionPacket = MmExtendSection(v21, &v26, v27[0] & 1),
                SectionPacket >= 0) )
          {
            *a1 = v21;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v20 + 64) )
              MiLogSectionObjectEvent((__int64)v21);
          }
          else
          {
            ObfDereferenceObjectWithTag(v21, 0x43536D4Du);
          }
        }
      }
      break;
    }
    ImageOrDataSection = MiCreateImageOrDataSection(v27);
    SectionPacket = ImageOrDataSection;
    if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
      goto LABEL_7;
    if ( v32 )
      PsDereferencePartition(v32);
  }
  if ( v32 )
    PsDereferencePartition(v32);
  return (unsigned int)SectionPacket;
}
