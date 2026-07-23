/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x1409EF464
 * Callers:
 *     MmAllocateUserStack @ 0x1409EE7D8 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1409EF150 (NtAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiHugePagesSupported @ 0x1404C9454 (MiHugePagesSupported.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiGetUserReservationHighestAddress @ 0x14099C5B0 (MiGetUserReservationHighestAddress.c)
 *     MiValidateAllocationType @ 0x1409F0360 (MiValidateAllocationType.c)
 *     MiValidateZeroBits @ 0x1409F0710 (MiValidateZeroBits.c)
 */

__int64 MiAllocateVirtualMemoryPrepare(ULONG_PTR a1, unsigned __int64 a2, ...)
{
  __int64 v2; // r10
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  _QWORD *p_Lock; // rax
  int v8; // ebx
  int v9; // r8d
  int v10; // edi
  int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rbp
  int v17; // edx
  _QWORD *v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  int v21; // ebp
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  PVOID v27; // rcx
  char v28; // al
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  bool v34; // zf
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v36; // [rsp+48h] [rbp-60h]
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h]
  _QWORD *v39; // [rsp+B8h] [rbp+10h]
  __int64 v40; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  __int64 v42; // [rsp+C8h] [rbp+20h]
  __int64 v43; // [rsp+D0h] [rbp+28h]
  __int64 v44; // [rsp+D8h] [rbp+30h]
  __int64 v45; // [rsp+E0h] [rbp+38h]
  __int64 v46; // [rsp+E8h] [rbp+40h]
  __int64 v47; // [rsp+F0h] [rbp+48h]
  __int64 v48; // [rsp+F8h] [rbp+50h]
  __int64 v49; // [rsp+100h] [rbp+58h]
  __int64 v50; // [rsp+108h] [rbp+60h]
  _QWORD *v51; // [rsp+110h] [rbp+68h]
  va_list va1; // [rsp+118h] [rbp+70h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v40 = va_arg(va1, _QWORD);
  v42 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, _QWORD *);
  v2 = v42;
  v3 = v50;
  v4 = v40;
  v5 = v45;
  v6 = a2;
  v37 = a2;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  v39 = p_Lock;
  *(_QWORD *)(v50 + 96) = p_Lock;
  Object = 0LL;
  if ( a1 != -1LL )
  {
    v8 = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, v46, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v8 < 0 )
      goto LABEL_63;
    p_Lock = Object;
    v2 = v42;
    v39 = Object;
  }
  v9 = v44;
  *(_QWORD *)(v3 + 88) = p_Lock;
  *(_QWORD *)(v3 + 32) = v2;
  if ( (v9 & 0x7F800) != 0 )
  {
    v8 = -1073741755;
    goto LABEL_63;
  }
  v10 = v43;
  v36 = *(_QWORD *)(v5 + 56);
  v8 = MiValidateAllocationType((unsigned int)v43, (unsigned int)v47);
  if ( v8 >= 0 )
  {
    if ( (v10 & 0x1000) != 0 && !v6 )
      v10 |= 0x2000u;
    if ( (v13 & 0xFFFFFFFFFFFFFF25uLL) != 0
      || *(_QWORD *)(v5 + 24)
      && (v10 & 0x20400000) != 0x20000000
      && ((v10 & 0x20400000) != 0x20400000 || (v13 & 2) == 0) )
    {
      goto LABEL_62;
    }
    if ( (v11 & 0xF0) != 0 )
      *(_DWORD *)(v3 + 56) |= 8u;
    v14 = 0;
    v38 = 0;
    if ( (v11 & 0x40000000) != 0 )
    {
      if ( (v11 & 0xF0) == 0 )
        goto LABEL_62;
      v11 &= ~0x40000000u;
      v14 = 2;
      LODWORD(v44) = v11;
      v38 = 2;
    }
    if ( (v13 & 0x40) != 0 )
    {
      if ( (v11 & 0xF0) == 0 )
        goto LABEL_62;
      v38 = v14 | 8;
    }
    v15 = v10 & 0x20400000;
    v16 = 0x200000LL;
    if ( (v10 & 0x20400000) != 0x20000000 )
      v16 = 0x10000LL;
    v17 = v13 & 0x1A;
    LODWORD(v50) = v17;
    if ( (v13 & 0x1A) == 0 )
      goto LABEL_18;
    if ( ((v17 - 1) & v17) != 0 )
      goto LABEL_62;
    if ( (v17 & 2) != 0 )
    {
      v34 = ((v15 - 0x400000) & 0xDFFFFFFF) == 0;
    }
    else
    {
      if ( (v17 & 0x10) != 0 )
      {
        if ( !(unsigned int)MiHugePagesSupported() )
          goto LABEL_148;
        v16 = 0x40000000LL;
      }
      else if ( (v17 & 8) != 0 )
      {
        v16 = 0x200000LL;
      }
      if ( v15 == 0x20000000 )
      {
LABEL_18:
        if ( (v13 & 0x80u) == 0LL )
        {
          if ( v15 == 0x400000 && (v13 & 0xFFFFFFFFFFFFFFE5uLL) != 0 )
            goto LABEL_62;
          goto LABEL_20;
        }
        if ( (v10 & 0x42000) != 0x2000 )
          goto LABEL_62;
        if ( !v17 && v15 != 541065216 && v15 != 0x20000000 && v15 != 0x400000 && (v10 & 0x800000) == 0 )
        {
LABEL_20:
          if ( ((v10 & 0x2000) == 0 || v6) && (*(_QWORD *)v5 || *(_QWORD *)(v5 + 8) || *(_QWORD *)(v5 + 16)) )
            goto LABEL_62;
          if ( v4 )
          {
            v8 = MiValidateZeroBits((__int64 *)va);
            if ( v8 < 0 )
              goto LABEL_63;
            if ( (v10 & 0x2000) != 0 )
            {
              v18 = v39;
              if ( !v6 )
                *(_QWORD *)(v5 + 8) = MiGetUserReservationHighestAddress((__int64)v39, v40);
              v17 = v50;
              v12 = v42;
              LOWORD(v13) = v36;
              LOWORD(v11) = v44;
LABEL_24:
              if ( (v10 & 0x40000) != 0 )
              {
                *(_DWORD *)(v3 + 60) |= 0x8000000u;
              }
              else if ( (v10 & 0x4000) != 0 )
              {
                if ( *(_QWORD *)v5 || *(_QWORD *)(v5 + 8) || *(_QWORD *)(v5 + 16) )
                  goto LABEL_62;
                *(_DWORD *)(v3 + 60) |= 0x4000000u;
                goto LABEL_92;
              }
              if ( (v10 & 0x4000) == 0 )
              {
                if ( (v10 & 0x2000) == 0 )
                {
LABEL_28:
                  v16 = 4096LL;
                  goto LABEL_29;
                }
                if ( (v10 & 0x40000000) != 0 )
                {
                  if ( (v10 & 0x20400000) == 0x20400000 || (v10 & 0x20400000) == 0x20000000 )
                    goto LABEL_62;
                  goto LABEL_28;
                }
LABEL_29:
                v19 = *(_QWORD *)(v5 + 16);
                if ( v19 )
                {
                  if ( v19 < v16
                    || ((v19 - 1) & v19) != 0
                    || v19 >= 0x7FFFFFFF0000LL
                    || (v10 & 0x40000000) != 0 && v19 != 4096 )
                  {
                    goto LABEL_62;
                  }
                }
                else
                {
                  *(_QWORD *)(v5 + 16) = v16;
                }
                if ( !v12
                  || (v10 & 0x2000) != 0
                  && ((v10 & 0x20400000) == 0x20400000 || (v10 & 0x20400000) == 0x20000000)
                  && ((v10 & 0x20400000) != 541065216 && (v10 & 0x1000) == 0 && !v17 || ((v16 - 1) & v12) != 0) )
                {
                  goto LABEL_62;
                }
                v20 = v6 + v12;
                if ( v6 + v12 > 0x7FFFFFFF0000LL || v20 <= v6 )
                  goto LABEL_62;
                if ( (v10 & 0x2000) != 0 )
                {
                  if ( (v10 & 0x40000000) != 0 )
                  {
                    v33 = (((unsigned __int16)v6 | (unsigned __int16)v12) & 0xFFF) == 0;
                  }
                  else
                  {
                    if ( (v10 & 0x4000) == 0 )
                    {
                      v6 &= -(__int64)v16;
                      if ( (v10 & 0x20400000) == 0x20400000 || (v10 & 0x20400000) == 0x20000000 )
                        v20 = v6 + v12;
                      else
                        v20 = (v20 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_43:
                      if ( (v13 & 0x100) != 0 )
                      {
                        if ( (v10 & 0x800000) != 0 )
                          goto LABEL_62;
                        if ( (v10 & 0x20400000) == 0x400000 )
                          goto LABEL_62;
                        v21 = v47;
                        if ( (v47 & 0x40000000) != 0 || (v11 & 0x600) != 0 )
                          goto LABEL_62;
                      }
                      else
                      {
                        v21 = v47;
                      }
                      v22 = v37;
                      v23 = v20 - v6;
                      if ( v37 )
                        *(_QWORD *)v5 = v6;
                      v24 = *(_QWORD *)v5;
                      if ( ((*(_QWORD *)(v5 + 16) - 1LL) & *(_QWORD *)v5) != 0 )
                        goto LABEL_62;
                      v25 = *(_QWORD *)(v5 + 8);
                      if ( v25 )
                      {
                        if ( MmIsUserAddress(*(_QWORD *)(v5 + 8)) && ((*(_DWORD *)(v5 + 8) + 1) & 0xFFF) == 0 )
                          goto LABEL_55;
                      }
                      else
                      {
                        if ( (v10 & 0x2000) != 0 && !v22 && (v10 & 0x4000) == 0 )
                        {
                          v25 = v18[109] - 1LL;
                          if ( v25 >= 0x7FFFFFFEFFFFLL )
                            v25 = 0x7FFFFFFEFFFFLL;
                          *(_QWORD *)(v5 + 8) = v25;
                          if ( v17 && (v17 & 2) == 0 )
                          {
                            if ( (v17 & 8) != 0 )
                            {
                              v32 = -2097152LL;
                              goto LABEL_159;
                            }
                            if ( (v17 & 0x10) != 0 )
                            {
                              v32 = -1073741824LL;
LABEL_159:
                              v25 = (v32 & v25) - 1;
                              *(_QWORD *)(v5 + 8) = v25;
                            }
                          }
LABEL_55:
                          v26 = *(_QWORD *)v5;
                          if ( *(_QWORD *)v5 < v25
                            && v25 - v26 + 1 >= v23
                            && (v10 & 0x7F) == 0
                            && *(_DWORD *)(v5 + 32) <= (unsigned int)(unsigned __int16)KeNumberNodes
                            && (!*(_BYTE *)(v5 + 49) || (_DWORD)v50 || (v10 & 0x20400000) == 0x20000000) )
                          {
                            *(_QWORD *)v3 = v26;
                            v27 = Object;
                            *(_QWORD *)(v3 + 8) = *(_QWORD *)(v5 + 8);
                            *(_QWORD *)(v3 + 16) = *(_QWORD *)(v5 + 16);
                            *(_DWORD *)(v3 + 44) = v44;
                            *(_QWORD *)(v3 + 24) = v23;
                            *(_DWORD *)(v3 + 40) = v10 & 0xFFFBBFFF;
                            *(_DWORD *)(v3 + 48) = *(_DWORD *)(v5 + 32);
                            v28 = *(_BYTE *)(v5 + 49);
                            *(_DWORD *)(v3 + 60) |= v21;
                            *(_BYTE *)(v3 + 52) = v28;
                            *(_BYTE *)(v3 + 53) = v46;
                            *(_DWORD *)(v3 + 64) = v48;
                            *(_QWORD *)(v3 + 72) = v49;
                            *(_QWORD *)(v3 + 104) = *(_QWORD *)(v5 + 40);
                            *(_QWORD *)(v3 + 112) = *(_QWORD *)(v5 + 56);
                            *(_DWORD *)(v3 + 120) = v38;
                            *v51 = v27;
                            return 0LL;
                          }
                          goto LABEL_62;
                        }
                        if ( v24 + v23 >= v24 )
                        {
                          v25 = v24 + v23 - 1;
                          *(_QWORD *)(v5 + 8) = v25;
                          if ( MmIsUserAddress(v25) )
                            goto LABEL_55;
                        }
                      }
LABEL_62:
                      v8 = -1073741811;
                      goto LABEL_63;
                    }
                    v33 = ((v12 | v6) & (v16 - 1)) == 0;
                  }
                  if ( !v33 )
                    goto LABEL_62;
                  goto LABEL_43;
                }
                if ( v10 == 0x80000 || v10 == 0x1000000 )
                {
                  v31 = ~(v16 - 1);
                  v6 = v31 & (v16 + v6 - 1);
                  v20 &= v31;
                  if ( v6 >= v20 )
                  {
                    v8 = -1073741800;
                    goto LABEL_63;
                  }
                }
                else
                {
                  v30 = ~(v16 - 1);
                  v6 &= v30;
                  v20 = v30 & (v16 + v20 - 1);
                }
                goto LABEL_43;
              }
LABEL_92:
              if ( !v17 && (v10 & 0x20400000) != 0x20000000 )
                goto LABEL_28;
              goto LABEL_29;
            }
            v17 = v50;
            v12 = v42;
            LOWORD(v13) = v36;
            LOWORD(v11) = v44;
          }
          v18 = v39;
          goto LABEL_24;
        }
LABEL_148:
        v8 = -1073741637;
        goto LABEL_63;
      }
      v34 = v15 == 0x400000;
    }
    if ( !v34 )
      goto LABEL_62;
    goto LABEL_18;
  }
LABEL_63:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v8;
}
