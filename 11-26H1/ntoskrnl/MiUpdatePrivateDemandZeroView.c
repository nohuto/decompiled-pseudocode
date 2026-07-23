/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1404E06A4
 * Callers:
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebx
  _QWORD *ProtoPteAddress; // r14
  unsigned __int64 v9; // r9
  unsigned int *v10; // rbp
  ULONG_PTR v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdi
  unsigned int v24; // r15d
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  KIRQL v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r14
  KIRQL v32; // bp
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // [rsp+20h] [rbp-78h]
  unsigned int *v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  unsigned __int64 v40; // [rsp+40h] [rbp-58h]
  unsigned int *v41; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+10h]
  int v43; // [rsp+B0h] [rbp+18h]
  _QWORD *v44; // [rsp+B8h] [rbp+20h]

  v43 = a3;
  v42 = a2;
  v41 = 0LL;
  v4 = *(unsigned int *)(a2 + 28);
  v5 = 0LL;
  v6 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v37 = a1 + 1024;
  v7 = *(unsigned __int8 *)(a2 + 33);
  ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(a2, v6, 6u, &v41);
  v44 = ProtoPteAddress;
  v9 = *(_QWORD *)(a2 + 88) + 8 * ((v4 | ((unsigned __int64)v7 << 32)) - v6);
  v40 = v9;
  v10 = v41;
  v11 = 8 * (v6 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v38 = v41;
  if ( v41 )
  {
    while ( 1 )
    {
      v12 = v9;
      v13 = v5;
      if ( *((_QWORD *)v10 + 1) + 8 * ((unsigned __int64)v10[11] - 1) <= v9 )
        v12 = *((_QWORD *)v10 + 1) + 8 * (v10[11] - 1LL);
      if ( (v10[8] & 0x20000) == 0 && ((v10[8] & 0xA) == 10 || (v10[8] & 8) == 0) )
      {
        v14 = v10[10];
        v15 = v14 ? *((_QWORD *)v10 + 1) + 8 * (((unsigned __int64)((v14 << 9) - 1) >> 12) + 1) : *((_QWORD *)v10 + 1);
        if ( v15 <= v12 )
          break;
      }
LABEL_9:
      v16 = 8LL * (unsigned int)((__int64)(v12 - (_QWORD)ProtoPteAddress + 8) >> 3);
      ProtoPteAddress = (_QWORD *)((char *)ProtoPteAddress + v16);
      v11 += v16;
      v44 = ProtoPteAddress;
      if ( (unsigned __int64)ProtoPteAddress <= v9 )
      {
        v38 = (unsigned int *)*((_QWORD *)v10 + 2);
        v10 = v38;
        if ( v38 )
          continue;
      }
      return v5;
    }
    if ( (unsigned __int64)ProtoPteAddress < v15 )
    {
      v44 = (_QWORD *)v15;
      v18 = v15 - (_QWORD)ProtoPteAddress;
      ProtoPteAddress = (_QWORD *)v15;
      v11 += 8 * (v18 >> 3);
    }
    if ( (unsigned __int64)ProtoPteAddress <= v9 )
    {
      v19 = 0LL;
      if ( (unsigned __int64)ProtoPteAddress <= v12 )
      {
        do
        {
          v20 = *ProtoPteAddress;
          if ( (*ProtoPteAddress & 1) != 0 )
          {
            LODWORD(v21) = v10[8] >> 1;
          }
          else
          {
            if ( !v20 )
              break;
            v21 = v20 >> 5;
          }
          if ( (v21 & 0x1F) == 0x18 )
            break;
          v19 = (unsigned int)(v19 + 1);
          ++ProtoPteAddress;
        }
        while ( (unsigned __int64)ProtoPteAddress <= v12 );
        v44 = ProtoPteAddress;
      }
      v5 += v19;
      if ( (v10[8] & 0xA) == 0xA )
        v5 = v13;
      v39 = v5;
      if ( !v43 || !(_DWORD)v19 )
      {
        v11 += 8 * v19;
        goto LABEL_9;
      }
      v22 = (v10[8] >> 1) & 0x1F;
      if ( ((v10[8] >> 1) & 4) != 0 )
        LOBYTE(v22) = (v10[8] >> 1) & 2 | 4;
      v23 = 0LL;
      v24 = 0;
      DemandZeroPte = MiMakeDemandZeroPte(v22);
      v28 = MiLockWorkingSetShared(v37, v26, v27);
      v31 = v42;
      v32 = v28;
      LOBYTE(v41) = v28;
      while ( 1 )
      {
        if ( !v23 )
          goto LABEL_36;
        if ( (v11 & 0xFFF) == 0 )
          break;
LABEL_40:
        *(_QWORD *)v11 = DemandZeroPte;
        ++v24;
        v11 += 8LL;
        LODWORD(v19) = v19 - 1;
        if ( !(_DWORD)v19 )
        {
          ProtoPteAddress = v44;
          v10 = v38;
          if ( v23 )
          {
            if ( v24 )
              MiIncreaseUsedPtes(v30, v23, v24, 2);
            v36 = v37;
            MiUnlockPageTableInternal(v37, v23);
          }
          else
          {
            v36 = v37;
          }
          LOBYTE(v29) = (_BYTE)v41;
          MiUnlockWorkingSetShared(v36, v29);
          v9 = v40;
          v5 = v39;
          goto LABEL_9;
        }
      }
      if ( v24 )
      {
        MiIncreaseUsedPtes(v30, v23, v24, 2);
        v24 = 0;
      }
      MiUnlockPageTableInternal(v37, v23);
LABEL_36:
      if ( MiWorkingSetIsContended(v37, 0) || KeShouldYieldProcessor() )
      {
        LOBYTE(v33) = v32;
        MiUnlockWorkingSetShared(v37, v33);
        MiLockWorkingSetShared(v37, v34, v35);
      }
      MiMakeSystemAddressValid(v11, (*(_DWORD *)(v31 + 48) >> 10) & 0x7F, v32, 0);
      v23 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      goto LABEL_40;
    }
  }
  return v5;
}
