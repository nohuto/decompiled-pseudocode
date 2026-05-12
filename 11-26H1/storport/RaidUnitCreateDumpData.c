/*
 * XREFs of RaidUnitCreateDumpData @ 0x140183460
 * Callers:
 *     RaidUnitCreateDumpInfo @ 0x1401B9A8C (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitCreateDumpData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *Pool; // rax
  unsigned int v7; // esi
  _DWORD *v8; // rbx
  void *v9; // rcx
  _DWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  Pool = (_DWORD *)RaidAllocatePool(64LL, 96LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    *Pool = 1145917490;
    Pool[1] = 4098;
    Pool[2] = 72;
    v9 = *(void **)(a1 + 8);
    *a3 = 96;
    v10 = Pool + 18;
    ObfReferenceObject(v9);
    *((_QWORD *)v8 + 2) = a1;
    *((_BYTE *)v8 + 48) = *(_BYTE *)(a1 + 104);
    *((_BYTE *)v8 + 49) = *(_BYTE *)(a1 + 105);
    *((_BYTE *)v8 + 50) = *(_BYTE *)(a1 + 106);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1872)) >= 0 )
      {
        *(_BYTE *)v10 = 1;
        v11 = **(_QWORD **)(a1 + 1872);
        *((_QWORD *)v10 + 2) = a1 + 1862;
        *((_QWORD *)v10 + 1) = v11;
        *((_QWORD *)v8 + 3) = a1 + 1863;
        *((_QWORD *)v8 + 4) = StorDumpDiskPowerOn;
        *((_QWORD *)v8 + 5) = v10;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    }
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = *(_QWORD *)(a1 + 3608);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 48);
        if ( v13 )
          *((_QWORD *)v8 + 8) = v13;
      }
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
