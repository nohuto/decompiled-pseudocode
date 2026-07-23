/*
 * XREFs of HaliPciInterfaceReadConfig @ 0x14042C850
 * Callers:
 *     HaliHandlePCIConfigSpaceAccess @ 0x14059C2E0 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdReadPCIConfig @ 0x1405A8090 (HalpKdReadPCIConfig.c)
 * Callees:
 *     HalpPCIAcquireConfigSpaceLock @ 0x14042CB64 (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPCIReleaseConfigSpaceLock @ 0x14042D150 (HalpPCIReleaseConfigSpaceLock.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x14042D1B8 (HalpPciMapMmConfigPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpPciAccessIoConfigSpace @ 0x14058E828 (HalpPciAccessIoConfigSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HaliPciInterfaceReadConfig(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        ULONG_PTR BugCheckParameter3,
        size_t Size)
{
  ULONG_PTR v6; // rbp
  unsigned __int8 v7; // si
  unsigned int v8; // r14d
  __int64 v10; // r8
  ULONG_PTR *v11; // rcx
  ULONG_PTR *v12; // rbx
  size_t v13; // rdi
  ULONG_PTR v14; // r12
  int v15; // eax
  __int64 v18; // r9
  unsigned int i; // eax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r14
  int v24; // ebx
  _WORD *j; // rbp
  unsigned int v26; // eax
  int v27; // ebx
  signed __int32 v36[8]; // [rsp+0h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  int v38; // [rsp+28h] [rbp-60h]
  int v39; // [rsp+30h] [rbp-58h]
  _WORD *v40; // [rsp+38h] [rbp-50h]
  char v41; // [rsp+98h] [rbp+10h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = (unsigned int)a2 >> 8;
  v10 = 1LL;
  v41 = 0;
  if ( !HalpIommuSkipPciConfigDisabled )
  {
    v11 = (ULONG_PTR *)HalpIommuList;
    LOBYTE(a2) = 0;
    if ( (ULONG_PTR *)HalpIommuList != &HalpIommuList )
    {
      do
      {
        v12 = v11;
        v11 = (ULONG_PTR *)*v11;
        if ( (v12[58] & 8) != 0 && *((_DWORD *)v12 + 118) == (unsigned __int16)v8 && *((_DWORD *)v12 + 119) == v7 )
        {
          v27 = *((_DWORD *)v12 + 120);
          if ( (((unsigned __int8)v6 ^ (unsigned __int8)v27) & 0x1F) == 0 )
          {
            a2 = (unsigned __int8)a2;
            if ( (((unsigned __int8)v6 ^ (unsigned __int8)v27) & 0xE0) == 0 )
              a2 = 1LL;
          }
        }
      }
      while ( v11 != &HalpIommuList );
      if ( (_BYTE)a2 )
      {
        LODWORD(v13) = Size;
        memset_0(a4, 255, (unsigned int)Size);
        goto LABEL_8;
      }
    }
  }
  v13 = (unsigned int)Size;
  v14 = (unsigned int)BugCheckParameter3;
  if ( qword_140FBB4A8 )
  {
    v40 = a4;
    v39 = Size;
    v38 = BugCheckParameter3;
    LODWORD(BugCheckParameter4) = (unsigned __int8)v6 >> 5;
    v15 = guard_dispatch_icall_no_overrides(0LL, (unsigned __int16)v8);
    if ( v15 >= 0 )
      goto LABEL_8;
    if ( v15 != -1073741822 )
      KeBugCheckEx(0xC0u, v7, v6, v14, v15);
  }
  HalpPCIAcquireConfigSpaceLock(&v41, a2, v10);
  if ( (unsigned int)(v14 + v13) <= 0x1000 )
  {
    if ( HalpPciAmdK8SpecialLocationHack == -1 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      if ( (_DWORD)_RBX != 1752462657 )
        goto LABEL_47;
      if ( (_DWORD)_RDX != 1769238117 )
        goto LABEL_47;
      if ( (_DWORD)_RCX != 1145913699 )
        goto LABEL_47;
      _RAX = 1LL;
      __asm { cpuid }
      if ( (_RAX & 0xF00) != 0xF00 || (_RAX & 0xFF00000) != 0 )
      {
LABEL_47:
        HalpPciAmdK8SpecialLocationHack = 0;
        goto LABEL_17;
      }
      HalpPciAmdK8SpecialLocationHack = 1;
    }
    else if ( HalpPciAmdK8SpecialLocationHack != 1 )
    {
      goto LABEL_17;
    }
    if ( !(_WORD)v8 && !v7 && (v6 & 0x1F) >= 0x18 )
      goto LABEL_38;
LABEL_17:
    for ( i = 0; i < HalpPciMcfgTableCount; ++i )
    {
      v20 = 16LL * i;
      if ( (_WORD)v8 == *(_WORD *)(v20 + HalpPciMcfgTable + 52)
        && v7 >= *(_BYTE *)(v20 + HalpPciMcfgTable + 54)
        && v7 <= *(_BYTE *)(v20 + HalpPciMcfgTable + 55) )
      {
        _RDX = (unsigned __int8)v6 >> 5;
        v21 = *(_QWORD *)(v20 + HalpPciMcfgTable + 44) + ((_RDX + 8 * ((v6 & 0x1F) + 32LL * v7)) << 12);
        if ( !v21 )
          break;
        v23 = HalpPciMapMmConfigPhysicalAddress(v21, _RDX, HalpPciMcfgTable, v18);
        v24 = v13;
        for ( j = a4; v24; v24 -= v26 )
        {
          v26 = guard_dispatch_icall_no_overrides(v23, j);
          v22 = v26;
          LODWORD(v14) = v26 + v14;
          j = (_WORD *)((char *)j + v26);
        }
        _InterlockedOr(v36, 0);
        goto LABEL_26;
      }
    }
  }
LABEL_38:
  LOBYTE(_RDX) = v7;
  if ( !(unsigned __int8)HalpPciAccessIoConfigSpace((unsigned __int16)v8, _RDX, v6, (_DWORD)a4, v14, v13, 0) )
    memset_0(a4, 255, v13);
LABEL_26:
  LOBYTE(v22) = v41;
  HalpPCIReleaseConfigSpaceLock(v22);
LABEL_8:
  if ( (unsigned int)v13 >= 2 && *a4 != 0xFFFF && v7 > (unsigned int)HalpMaxPciBus )
    HalpMaxPciBus = v7;
  return (unsigned int)v13;
}
