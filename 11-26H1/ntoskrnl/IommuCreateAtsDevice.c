/*
 * XREFs of IommuCreateAtsDevice @ 0x14059DE70
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuLocateFromDevice @ 0x140784EE0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall IommuCreateAtsDevice(_BYTE *Src, void *a2, _DWORD *a3, __int64 *a4)
{
  int v5; // ecx
  __int64 result; // rax
  unsigned int *i; // rcx
  __int64 v11; // r9
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v5 = *(_DWORD *)Src;
  v17[0] = 0LL;
  if ( v5 != 4 && (v5 != 1 || (Src[4] & 1) != 0 || (Src[10] & 3) != 0) || (*a3 & 1) == 0 )
    return 3221225659LL;
  if ( v5 == 4 )
  {
LABEL_16:
    v11 = 1LL;
    if ( (*a3 & 6) != 6 )
      v11 = 3LL;
    result = HalpIommuCreateDevice((__int64)Src, a2, 0LL, (struct _KLOCK_ENTRIES *)v11, &v18);
    v12 = result;
    if ( (int)result < 0 )
      return result;
    if ( HalpHvIommu )
    {
      if ( *(_DWORD *)Src == 4 )
        goto LABEL_25;
      v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v18 + 32), 26LL);
    }
    else
    {
      v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(v18 + 32) + 16LL), *(_QWORD *)(v18 + 40));
    }
    v12 = v13;
    if ( v13 < 0 )
    {
      HalpIommuDeleteDevice((__int64 *)v18, v14, v15, v16);
      return v12;
    }
LABEL_25:
    if ( !HalpHvIommu )
    {
      *(_DWORD *)(v18 + 60) = (*a3 >> 12) & 0x1F;
      *(_QWORD *)(v18 + 64) = 0LL;
      ++*(_DWORD *)(v18 + 56);
    }
    *a4 = v18;
    return v12;
  }
  if ( (unsigned int)HalpIommuLocateFromDevice(Src, v17) == -1073741275 )
    return 3221226537LL;
  for ( i = *(unsigned int **)&HalpDeviceBlockUnblockPushLock.CurrentRunTime;
        i != &HalpDeviceBlockUnblockPushLock.CurrentRunTime;
        i = *(unsigned int **)i )
  {
    if ( *((_WORD *)i + 12) == *((_WORD *)Src + 4) && *((_WORD *)i + 14) == *((_WORD *)Src + 6) )
      goto LABEL_16;
  }
  return 3221226021LL;
}
