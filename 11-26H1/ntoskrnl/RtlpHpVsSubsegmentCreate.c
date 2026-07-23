/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x14024C60C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpVsSubsegmentInitialize @ 0x14049010C (RtlpHpVsSubsegmentInitialize.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2)
{
  int v2; // edi
  char v3; // r15
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  ULONG_PTR v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rdi
  int v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+10h]
  int v17; // [rsp+70h] [rbp+18h]

  v16 = 0;
  v2 = 16 * a2;
  v3 = 0;
  v4 = 32 * a2 + 48;
  v15 = 0;
  v17 = 0;
  v5 = (v2 + 4143) & 0xFFFFF000;
  if ( ((v4 - 1) & v4) != 0 )
  {
    _BitScanReverse(&v7, v4);
    v4 = 1 << (v7 + 1);
  }
  v8 = 0x10000;
  if ( v4 > 0x10000 )
  {
    v8 = v4;
    if ( v4 >= 0x40000 )
      v8 = 0x40000;
  }
  while ( 1 )
  {
    v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, v8, &v15);
    v10 = v9;
    v11 = v9;
    if ( v9 )
      break;
    v8 = v16;
    if ( v16 < v5 )
      return 0LL;
  }
  v12 = 4096;
  if ( (v15 & 1) != 0 )
    v12 = v8;
  if ( (RtlpHpLfhPerfFlags & 0x20000) == 0 )
    goto LABEL_10;
  if ( !byte_140FC8BD8 || (int)KasanTrackAddressNoInline(v9, v8, 0LL) >= 0 )
  {
    v3 = 1;
LABEL_10:
    if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, v10, v12) >= 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), (unsigned __int64)v12 >> 12);
      RtlpHpVsSubsegmentInitialize(v10, v8, v12);
      return v10;
    }
    v13 = 0LL;
    if ( v3 && byte_140FC8BD8 )
      KasanMarkAddressValidNoInline(v11, v8);
    goto LABEL_22;
  }
  v13 = 0LL;
LABEL_22:
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, v10, v8);
  return v13;
}
