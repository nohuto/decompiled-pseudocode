/*
 * XREFs of sub_1400406A0 @ 0x1400406A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140010540 @ 0x140010540 (sub_140010540.c)
 *     sub_140021150 @ 0x140021150 (sub_140021150.c)
 *     sub_1400395B0 @ 0x1400395B0 (sub_1400395B0.c)
 */

void __fastcall sub_1400406A0(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char *DeviceExtension; // rbx
  char *v3; // rdi
  __int64 v4; // r8
  KIRQL v5; // al
  KIRQL v6; // di
  unsigned int LockArray_high; // r9d
  int v8; // r8d
  __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 ***v11; // rdx
  __int64 **v12; // rcx
  _QWORD *v13; // rax
  ULONG MaximumProcessorCount; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v21; // [rsp+38h] [rbp-8h]
  unsigned __int8 v22; // [rsp+50h] [rbp+10h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v22 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 0x10) == 0 )
  {
    v3 = DeviceExtension + 505;
    if ( DeviceExtension[504] < 0 || (v4 = 1LL, (*v3 & 1) != 0) )
      v4 = 2LL;
    sub_140021150((__int64)DeviceExtension, 0, v4, &v22);
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) = *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 0xFFFFFFFD | (2 * (v22 & 1));
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) = *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 0xFFFFFFFB | (4 * ((v22 >> 1) & 1));
    if ( DeviceExtension[759] && *v3 >= 0 )
      sub_1400395B0((__int64)DeviceExtension);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL));
  v6 = v5;
  *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) &= ~0x10u;
  if ( DeviceExtension[759] )
  {
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL), v5);
  }
  else
  {
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v21 = &v20;
    v8 = 0;
    v20 = (__int64 *)&v20;
    while ( 1 )
    {
      v9 = *((_QWORD *)DeviceExtension + 4);
      v10 = (__int64 **)(v9 + 32);
      v11 = *(__int64 ****)(v9 + 32);
      if ( v11 == (__int64 ***)(v9 + 32) )
        break;
      if ( v11[1] != v10 )
        goto LABEL_28;
      v12 = *v11;
      if ( (*v11)[1] != (__int64 *)v11 )
        goto LABEL_28;
      *v10 = (__int64 *)v12;
      v12[1] = (__int64 *)v10;
      if ( (*(_DWORD *)(*((_QWORD *)DeviceExtension + 4) + 80LL) & 1) != 0 )
        *((_DWORD *)v11 - 30) = LockArray_high;
      v13 = v21;
      if ( *v21 != (__int64 *)&v20 )
LABEL_28:
        __fastfail(3u);
      v11[1] = v21;
      *v11 = &v20;
      ++v8;
      *v13 = v11;
      v21 = (__int64 **)v11;
    }
    if ( (*(_DWORD *)(v9 + 80) & 1) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)v9, 4);
      _InterlockedAdd(
        (volatile signed __int32 *)(((unsigned __int64)LockArray_high << 6) + *((_QWORD *)DeviceExtension + 5) + 4),
        2 * v8);
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)v9, 4 * v8);
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
      if ( MaximumProcessorCount )
      {
        v15 = 0LL;
        v16 = MaximumProcessorCount;
        do
        {
          v15 += 64LL;
          _InterlockedExchange((volatile __int32 *)(v15 + *((_QWORD *)DeviceExtension + 5) - 60), 0);
          --v16;
        }
        while ( v16 );
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)DeviceExtension + 4) + 24LL), v6);
    while ( 1 )
    {
      v17 = v20;
      if ( v20 == (__int64 *)&v20 )
        break;
      if ( (__int64 **)v20[1] != &v20 )
        goto LABEL_28;
      v18 = (__int64 *)*v20;
      if ( *(__int64 **)(*v20 + 8) != v20 )
        goto LABEL_28;
      v20 = (__int64 *)*v20;
      v18[1] = (__int64)&v20;
      sub_140010540((__int64)DeviceExtension, (__int64)(v17 - 21), 0);
    }
    v19 = *((_QWORD *)DeviceExtension + 4);
    if ( (*(_DWORD *)(v19 + 80) & 1) == 0 )
      KeSetCoalescableTimer((PKTIMER)(v19 + 88), (LARGE_INTEGER)-20000000LL, 0, 0x12Cu, (PKDPC)(v19 + 152));
  }
}
