/*
 * XREFs of sub_1401A7724 @ 0x1401A7724
 * Callers:
 *     sub_140063E68 @ 0x140063E68 (sub_140063E68.c)
 *     sub_140192B10 @ 0x140192B10 (sub_140192B10.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 *     sub_1401316E4 @ 0x1401316E4 (sub_1401316E4.c)
 *     sub_1401A7A14 @ 0x1401A7A14 (sub_1401A7A14.c)
 */

__int64 __fastcall sub_1401A7724(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 result; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  v3 = 0;
  v5 = sub_14013115C((__int64)DeviceObject);
  if ( !v5 )
  {
    result = sub_1401A7A14(DeviceObject);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v5 = sub_14013115C((__int64)DeviceObject);
    if ( !v5 )
      return 3221225860LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 24), 1u);
  if ( *(_BYTE *)(v5 + 1) < 8u )
  {
    v7 = sub_1401316E4(v5, (_QWORD *)(a2 + 40));
    v8 = v7;
    if ( v7 )
    {
      if ( (v7[4] & 1) != 0 )
      {
        v3 = -1073741725;
        goto LABEL_16;
      }
    }
    else
    {
      v9 = sub_1400143E0(64LL, 176LL, 1313169746LL, (__int64)DeviceObject);
      v8 = (_QWORD *)v9;
      if ( !v9 )
      {
        v3 = -1073741670;
        goto LABEL_16;
      }
      KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 144));
      v8[20] = v8 + 19;
      v8[19] = v8 + 19;
      IoCsqInitialize(
        (PIO_CSQ)(v8 + 10),
        (PIO_CSQ_INSERT_IRP)CsqInsertIrp,
        (PIO_CSQ_REMOVE_IRP)CsqRemoveIrp,
        (PIO_CSQ_PEEK_NEXT_IRP)CsqPeekNextIrp,
        (PIO_CSQ_ACQUIRE_LOCK)CsqAcquireLock,
        (PIO_CSQ_RELEASE_LOCK)CsqReleaseLock,
        (PIO_CSQ_COMPLETE_CANCELED_IRP)CsqCompleteCanceledIrp);
      v10 = *(_QWORD **)(v5 + 16);
      if ( *v10 != v5 + 8 )
        __fastfail(3u);
      *v8 = v5 + 8;
      v8[1] = v10;
      *v10 = v8;
      *(_QWORD *)(v5 + 16) = v8;
      ++*(_BYTE *)(v5 + 1);
    }
    v11 = *(_OWORD *)(a2 + 40);
    v8[21] = DeviceObject;
    *((_OWORD *)v8 + 1) = v11;
    v12 = *(_OWORD *)(a2 + 24);
    *((_WORD *)v8 + 16) |= 1u;
    *((_OWORD *)v8 + 3) = v12;
    *((_WORD *)v8 + 18) = 0;
    *((_WORD *)v8 + 17) = *(unsigned __int8 *)(a2 + 16);
    goto LABEL_16;
  }
  v3 = -1073741756;
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v5 + 24));
  KeLeaveCriticalRegion();
  return v3;
}
