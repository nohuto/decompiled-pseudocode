/*
 * XREFs of WmipLinkDataSourceToList @ 0x140A0CC1C
 * Callers:
 *     WmipUpdateAddGuid @ 0x140824088 (WmipUpdateAddGuid.c)
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 * Callees:
 *     WmipRegisterEtwProvider @ 0x140823D44 (WmipRegisterEtwProvider.c)
 *     WmipAllocGuidEntry @ 0x140A0B548 (WmipAllocGuidEntry.c)
 *     WmipFindGEByGuid @ 0x140A0E624 (WmipFindGEByGuid.c)
 */

__int64 __fastcall WmipLinkDataSourceToList(_QWORD *a1, char a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  _QWORD *GEByGuid; // rcx
  _QWORD *v11; // rdx
  _QWORD *AbWaitObject; // rax
  void *volatile *v13; // rcx
  __int64 *KernelShadowStackInitial; // rax
  __int64 v16; // rdx

  v3 = a1 + 5;
  v5 = (_QWORD *)a1[5];
  v8 = 0;
  while ( v5 != v3 )
  {
    v9 = v5 - 5;
    if ( (*(_DWORD *)(v5 - 3) & 8) != 0 )
    {
      GEByGuid = (_QWORD *)WmipFindGEByGuid(v9[7], 0LL);
      if ( !GEByGuid )
      {
        GEByGuid = WmipAllocGuidEntry();
        if ( !GEByGuid )
          return (unsigned int)-1073741670;
        KernelShadowStackInitial = (__int64 *)EtwpSecurityLock.KernelShadowStackInitial;
        *(_OWORD *)(GEByGuid + 9) = *(_OWORD *)v9[7];
        v16 = *KernelShadowStackInitial;
        if ( *(__int64 **)(*KernelShadowStackInitial + 8) != KernelShadowStackInitial )
          goto LABEL_6;
        *GEByGuid = v16;
        GEByGuid[1] = KernelShadowStackInitial;
        *(_QWORD *)(v16 + 8) = GEByGuid;
        *KernelShadowStackInitial = (__int64)GEByGuid;
      }
      *((_DWORD *)v9 + 4) &= ~8u;
      v9[7] = GEByGuid;
      v11 = (_QWORD *)GEByGuid[8];
      if ( (_QWORD *)*v11 != GEByGuid + 7 )
        goto LABEL_6;
      *v9 = GEByGuid + 7;
      v9[1] = v11;
      *v11 = v9;
      GEByGuid[8] = v9;
      ++*((_DWORD *)GEByGuid + 9);
      if ( (v9[2] & 0x80000) != 0 )
        WmipRegisterEtwProvider((__int64)(v5 - 5), a3);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( a2 )
  {
    AbWaitObject = EtwpSecurityLock.AbWaitObject;
    *((_DWORD *)a1 + 4) |= 0x40000000u;
    v13 = (void *volatile *)AbWaitObject[1];
    if ( *(_QWORD **)v13 != AbWaitObject )
LABEL_6:
      __fastfail(3u);
    *a1 = AbWaitObject;
    a1[1] = v13;
    *v13 = a1;
    AbWaitObject[1] = a1;
  }
  return v8;
}
