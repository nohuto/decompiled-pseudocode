/*
 * XREFs of MmProtectVirtualMemory @ 0x140A03E98
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     KiTpWriteUmMemory @ 0x1405FF2E8 (KiTpWriteUmMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1402E8CA4 (MiAllowProtectionChange.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiGetVadPageSize @ 0x1404479B0 (MiGetVadPageSize.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x140706C04 (MiProtectAweRegion.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MiIsRangeFullyCommitted @ 0x140A036A4 (MiIsRangeFullyCommitted.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r15d
  unsigned int v9; // edi
  int ProtectionMask; // r13d
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  volatile signed __int32 *v13; // rbx
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // r15
  unsigned int VadFlags; // ebx
  __int64 v17; // rcx
  char v18; // r8
  int v19; // r9d
  unsigned __int64 v20; // r10
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  volatile signed __int32 *v24; // rcx
  __int64 result; // rax
  volatile signed __int32 *v26; // rcx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  __int16 v30; // ax
  char v31; // al
  __int64 VadPageSize; // rax
  unsigned int v33; // [rsp+60h] [rbp-B8h] BYREF
  char v34; // [rsp+64h] [rbp-B4h]
  unsigned int v35; // [rsp+68h] [rbp-B0h]
  int v36; // [rsp+70h] [rbp-A8h] BYREF
  int v37; // [rsp+74h] [rbp-A4h]
  unsigned int v38; // [rsp+78h] [rbp-A0h]
  unsigned int v39; // [rsp+7Ch] [rbp-9Ch]
  int v40; // [rsp+80h] [rbp-98h] BYREF
  int v41; // [rsp+84h] [rbp-94h]
  unsigned __int64 v42; // [rsp+88h] [rbp-90h]
  unsigned __int64 v43; // [rsp+90h] [rbp-88h]
  int v44; // [rsp+98h] [rbp-80h]
  __int64 v45; // [rsp+A0h] [rbp-78h]
  _QWORD *Teb; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v47; // [rsp+B0h] [rbp-68h]
  __int64 v48[2]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 ULong64FromUser; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v51; // [rsp+D8h] [rbp-40h]
  __int64 v53; // [rsp+128h] [rbp+10h]
  char v56[8]; // [rsp+140h] [rbp+28h]

  v53 = a2;
  v33 = 0;
  v36 = 0;
  *a6 = 1;
  v40 = 0;
  v37 = 0;
  v44 = 0;
  v34 = 1;
  v6 = *a3;
  v42 = v6;
  v47 = v6;
  v7 = *a4;
  v45 = v7;
  v48[0] = v7;
  if ( (a5 & 0x7F800) != 0 )
    return 3221225541LL;
  v38 = a5 >> 31;
  v35 = a5 >> 31;
  v8 = a5 & 0xB0000000;
  v39 = a5 & 0xB0000000;
  v9 = a5 & 0x4FFFFFFF;
  if ( (a5 & 0x40000000) != 0 )
  {
    if ( (a5 & 0xF0) == 0 )
      return 3221225714LL;
    v9 = a5 & 0xFFFFFFF;
    v34 = 0;
  }
  if ( v9 )
  {
    ProtectionMask = MiMakeProtectionMask(v9);
    v41 = ProtectionMask;
    if ( ProtectionMask != -1 )
    {
      a2 = v53;
      goto LABEL_6;
    }
    return 3221225541LL;
  }
  if ( v8 != 0x80000000 && v8 != 0x10000000 )
    return 3221225541LL;
  ProtectionMask = 24;
  v41 = 24;
LABEL_6:
  v11 = (v7 + v6 - 1) | 0xFFF;
  v51 = v11;
  v12 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v50 = v6 & 0xFFFFFFFFFFFFF000uLL;
  Teb = 0LL;
  v43 = 0LL;
  ULong64FromUser = 0LL;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    if ( !*(_QWORD *)(a2 + 784)
      || ((v30 = *(_WORD *)(a2 + 1772), v30 == 332) || v30 == 452 ? (v31 = 1) : (v31 = 0), !v31) )
    {
      Teb = KeGetCurrentThread()->Teb;
      ULong64FromUser = RtlReadULong64FromUser(Teb + 2);
      v43 = ULong64FromUser & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  v13 = 0LL;
  v48[0] = v11 >> 12;
  v14 = MiObtainReferencedVadEx(v12, 0LL, (int *)&v33);
  v15 = v14;
  v47 = v14;
  if ( !v14 )
  {
    result = v33;
    if ( v33 == -1073741664 )
    {
      result = 3221225496LL;
      v33 = -1073741800;
    }
    goto LABEL_38;
  }
  VadFlags = MiReadVadFlags(v14);
  if ( v48[0] > (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) )
    goto LABEL_35;
  v18 = 0;
  v56[0] = 0;
  if ( (ProtectionMask & 2) != 0 )
  {
    result = MiAllowProtectionChange(v53, a1, v15, ProtectionMask, v12, v11);
    v33 = result;
    if ( (int)result < 0 )
      goto LABEL_37;
    if ( (VadFlags & 0x40) != 0 || !v34 )
    {
      v29 = v37;
    }
    else
    {
      v27 = HalSystemVectorDispatchEntry();
      v29 = v28 | 4;
      if ( !v27 )
        v29 = v28;
      v37 = v29;
    }
    if ( v29 )
    {
      if ( (VadFlags & 2) != 0 )
      {
        result = MiCheckSecuredVad(v15, v42, v45, ProtectionMask, KeGetCurrentThread()->PreviousMode, 0LL);
        v33 = result;
        if ( (int)result < 0 )
          goto LABEL_37;
        v56[0] = 1;
        LOBYTE(v29) = v37;
      }
      v48[0] = v12;
      v48[1] = v11;
      result = MiCommitVadMetadataBits(v15, v48, v29);
      v33 = result;
      if ( (int)result < 0 )
        goto LABEL_37;
    }
    v18 = v56[0];
  }
  v19 = 0x80000;
  if ( (VadFlags & 0x80000) != 0 && ((VadFlags & 0x200000) != 0 || (VadFlags & 0x60000) >= 0x40000)
    || (VadFlags & 0x1C) == 0x14 )
  {
    if ( (VadFlags & 0x80000) == 0 || (VadFlags & 0x200000) == 0 )
    {
      if ( ProtectionMask == ((VadFlags >> 5) & 0x1F) )
      {
        v24 = (volatile signed __int32 *)v15;
        goto LABEL_58;
      }
      goto LABEL_35;
    }
    VadPageSize = MiGetVadPageSize(VadFlags);
    v20 = v42;
    if ( ((v11 + 1) & ((VadPageSize << 12) - 1)) != 0 || (((VadPageSize << 12) - 1) & v42) != 0 )
      goto LABEL_35;
  }
  else
  {
    v20 = v42;
  }
  if ( (VadFlags & 0x880000) != 0x880000 )
  {
    if ( (v39 & 0x5FFFFFFF) != 0 || !v9 )
      goto LABEL_80;
    v21 = VadFlags & 0x1C;
    if ( v21 == 12 )
    {
      v33 = MiProtectAweRegion(v12, v11, ProtectionMask, &v36);
      if ( (v33 & 0x80000000) == 0 )
      {
        MiUnlockAndDereferenceVad((volatile signed __int32 *)v15);
        *a4 = v11 - v12 + 1;
        *a3 = v12;
        *a6 = v36;
        return v33;
      }
    }
    else if ( v21 != 4 )
    {
      v22 = v38;
      if ( v38 && ((VadFlags & v19) != 0 || (*(_DWORD *)(**(_QWORD **)(v15 + 80) + 56LL) & 0x20) != 0) )
        goto LABEL_61;
      if ( (VadFlags & 2) != 0 && !v18 )
      {
        result = MiCheckSecuredVad(v15, v20, v45, ProtectionMask, KeGetCurrentThread()->PreviousMode, 0LL);
        v33 = result;
        if ( (int)result < 0 )
          goto LABEL_37;
        v22 = v38;
        v19 = 0x80000;
      }
      if ( (VadFlags & v19) == 0 )
      {
        if ( (v9 & 0x600) == 0 )
        {
          if ( (VadFlags & 0x1C) == 8 )
          {
            if ( (v9 & 4) != 0 )
              v9 = v9 & 0xFFFFFFF3 | 8;
            if ( (v9 & 0x40) != 0 )
              v9 = v9 & 0xFFFFFF3F | 0x80;
          }
          v23 = MmCompatibleProtectionMask[(unsigned __int8)VadFlags >> 5] | 0x700;
          if ( (v9 | v23) != v23 )
          {
            result = 3221225550LL;
            goto LABEL_36;
          }
          if ( (*(_DWORD *)(**(_QWORD **)(v15 + 80) + 56LL) & 0xA0) == 0x80 )
            goto LABEL_33;
          if ( !(unsigned int)MiVadMapsLargeImage(v15) )
          {
            if ( !(unsigned int)MiIsRangeFullyCommitted((__int64)v24, v12, v11) )
            {
              result = 3221225517LL;
              goto LABEL_36;
            }
LABEL_33:
            result = MiSetProtectionOnSection(v53, v15, v12, v11, v9, v38, &v36, &v40);
            v33 = result;
            if ( (int)result < 0 )
            {
LABEL_37:
              v13 = (volatile signed __int32 *)v15;
LABEL_38:
              if ( !v13 )
                return result;
              v26 = v13;
              goto LABEL_40;
            }
LABEL_34:
            MiUnlockAndDereferenceVad((volatile signed __int32 *)v15);
            *a4 = v11 - v12 + 1;
            *a3 = v12;
            *a6 = v36;
            return v40 != 0 ? 0x40000017 : 0;
          }
          if ( v9 != 128 && v9 != 8 )
          {
            result = 3221225550LL;
            v33 = -1073741746;
            v13 = v24;
            goto LABEL_38;
          }
LABEL_58:
          MiUnlockAndDereferenceVad(v24);
          *a4 = v11 - v12 + 1;
          *a3 = v12;
          *a6 = MmProtectToValue[ProtectionMask];
          return 0LL;
        }
LABEL_61:
        result = 3221225714LL;
        goto LABEL_36;
      }
      if ( (v9 & 0x88) != 0 || v22 )
        goto LABEL_61;
      if ( (VadFlags & 0x1C) != 0x10 )
      {
LABEL_46:
        result = MiProtectPrivateMemory(v15, v12, v11, ProtectionMask, v9, &v36, &v40);
        v33 = result;
        if ( (int)result < 0 )
          goto LABEL_37;
        if ( v43
          && v43 < v11
          && v43 >> 12 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
          && v43 >> 12 <= (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32))
          && (v11 + 1) >> 12 <= (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
        {
          RtlWriteULong64ToUser(Teb + 2, v11 + 1);
        }
        goto LABEL_34;
      }
      if ( (v9 & 0xFFFFF9F9) == 0 )
      {
        v9 &= 0x7FFFF9FFu;
        if ( (VadFlags & 0xE0) != 0 && (VadFlags & 0x300) == 768 )
        {
          v9 |= 0x400u;
        }
        else if ( (VadFlags & 0x300) == 0x100 )
        {
          v9 |= 0x200u;
        }
        ProtectionMask = MiMakeProtectionMask(v9);
        goto LABEL_46;
      }
LABEL_80:
      result = 3221225541LL;
      goto LABEL_36;
    }
LABEL_35:
    result = 3221225496LL;
LABEL_36:
    v33 = result;
    goto LABEL_37;
  }
  v33 = MiProtectEnclavePages(v53, a1, v15, v12, v11, v9, ProtectionMask, v39, a6, a3, a4);
  v26 = (volatile signed __int32 *)v15;
LABEL_40:
  MiUnlockAndDereferenceVad(v26);
  return v33;
}
