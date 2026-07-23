/*
 * XREFs of MiStoreContractVirtualPagefileApc @ 0x1404B5E00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040353C (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1404A5504 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreCheckContractPageFile @ 0x1404DEAE8 (MiStoreCheckContractPageFile.c)
 *     MiAttemptChangePagingFileMaximum @ 0x1406FD33C (MiAttemptChangePagingFileMaximum.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiStoreContractVirtualPagefileApc(__int64 a1, struct _KEVENT *a2)
{
  struct _KEVENT *v2; // r15
  int v3; // eax
  int *v4; // rcx
  int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  unsigned int v9; // r11d
  unsigned int v10; // edx
  unsigned int v11; // r15d
  unsigned __int64 v12; // r9
  bool v13; // al
  _DWORD *v14; // r8
  int v15; // r12d
  _DWORD *v16; // r10
  bool j; // zf
  _DWORD *v18; // r8
  int v19; // r9d
  _DWORD *v20; // r10
  unsigned int v21; // edx
  int v22; // eax
  bool i; // zf
  ULONG v24; // edi
  KIRQL v25; // al
  KIRQL v26; // bp
  volatile LONG *v27; // rcx
  int *v28; // rax
  __int128 v30; // [rsp+20h] [rbp-68h] BYREF
  __int128 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+40h] [rbp-48h]

  v30 = 0LL;
  v2 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v3 = MiStoreCheckContractPageFile(a1);
  if ( !v3 )
    return KeSetEvent(v2, 0, 0);
  v5 = v4[1];
  v6 = *v4;
  v7 = (v5 - v3 + 0x3FFFF) & 0xFFFC0000;
  v8 = (v5 - 0x40000) & 0xFFFC0000;
  if ( v8 < v7 )
    return KeSetEvent(v2, 0, 0);
  MiRefPageFileSpaceBitmaps(v4, (__int64)&v30);
  v9 = 0;
  while ( 1 )
  {
    if ( v8 >= v6 )
      goto LABEL_31;
    v10 = v6 - v8;
    if ( v8 >= DWORD2(v30) )
      goto LABEL_32;
    if ( v10 > 1 )
      break;
    if ( v10 != 1 )
      goto LABEL_32;
    v11 = v6 - 1;
    v12 = 4 * ((unsigned __int64)v8 >> 5);
    v13 = !_bittest((const signed __int32 *)(v12 + v31), v8 & 0x1F);
LABEL_17:
    if ( !v13 || v8 >= DWORD2(v31) )
      goto LABEL_32;
    if ( v10 > 1 )
    {
      if ( DWORD2(v31) - v8 < v10 )
        goto LABEL_32;
      v18 = (_DWORD *)(v12 + v32);
      v19 = *(_DWORD *)(v12 + v32);
      v20 = (_DWORD *)(v32 + 4 * ((unsigned __int64)v11 >> 5));
      if ( v18 != v20 )
      {
        for ( i = ((-1 << v8) & v19) == -1 << v8; i; i = *v18 == -1 )
        {
          if ( ++v18 == v20 )
          {
            v21 = 0xFFFFFFFF >> ~(_BYTE)v11;
            v22 = *v18 & v21;
            goto LABEL_30;
          }
        }
        goto LABEL_32;
      }
      v21 = 0xFFFFFFFF >> (32 - v10) << v8;
      v22 = v19 & v21;
LABEL_30:
      if ( v22 != v21 )
        goto LABEL_32;
    }
    else if ( !_bittest((const signed __int32 *)(v12 + v32), v8 & 0x1F) )
    {
      goto LABEL_32;
    }
LABEL_31:
    v9 = v5 - v8;
    v8 -= 0x40000;
    if ( v8 < v7 )
      goto LABEL_32;
  }
  if ( DWORD2(v30) - v8 < v10 )
    goto LABEL_32;
  v11 = v6 - 1;
  v12 = 4 * ((unsigned __int64)v8 >> 5);
  v14 = (_DWORD *)(v12 + v31);
  v15 = *(_DWORD *)(v12 + v31);
  v16 = (_DWORD *)(v31 + 4 * ((unsigned __int64)(v6 - 1) >> 5));
  if ( (_DWORD *)(v12 + v31) == v16 )
  {
    v13 = ((0xFFFFFFFF >> (32 - v10) << v8) & v15) == 0;
    goto LABEL_17;
  }
  for ( j = ((-1 << v8) & v15) == 0; j; j = *v14 == 0 )
  {
    if ( ++v14 == v16 )
    {
      v13 = ((0xFFFFFFFF >> ~(_BYTE)v11) & *v14) == 0;
      goto LABEL_17;
    }
  }
LABEL_32:
  if ( v9 )
  {
    v24 = v5 - v9;
    if ( v24 < v6 )
    {
      v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
      *(_DWORD *)a1 = v24;
      v26 = v25;
      *(_DWORD *)(a1 + 12) = v24 + *(_DWORD *)(a1 + 12) - v6;
      *(_DWORD *)(a1 + 20) = v24 + *(_DWORD *)(a1 + 20) - v6;
      RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 80) + 8LL), v24, v6 - v24);
      v27 = (volatile LONG *)(a1 + 200);
      if ( v26 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v27);
      else
        ExReleaseSpinLockExclusive(v27, v26);
    }
    MiAttemptChangePagingFileMaximum(a1, v24);
  }
  v28 = MiDerefPageFileSpaceBitmaps(a1, (int **)&v30, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  v2 = a2;
  return KeSetEvent(v2, 0, 0);
}
