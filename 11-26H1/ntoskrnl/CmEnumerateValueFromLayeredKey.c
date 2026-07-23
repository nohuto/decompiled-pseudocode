/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x1409426FC
 * Callers:
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryInitialize @ 0x1404C8430 (CmpValueEnumStackEntryInitialize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpQueryKeyValueData @ 0x140941E50 (CmpQueryKeyValueData.c)
 *     CmpValueEnumStackAdvance @ 0x140942ABC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140943268 (CmpValueEnumStackCleanup.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AFC1F0 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        size_t a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // r15
  char v8; // r12
  char *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r14
  int started; // ebx
  __int16 v16; // cx
  char v17; // dl
  struct _PRIVILEGE_SET *v18; // rsi
  int *v19; // r8
  signed __int64 v20; // r9
  int *v21; // rax
  __int64 v22; // rdi
  __int64 KeyNodeForKcb; // rax
  ULONG_PTR v24; // rcx
  __int64 v25; // rdx
  __int64 CellFlat; // rax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rcx
  ULONG_PTR v30; // rcx
  __int64 CellPaged; // rax
  __int64 v32; // r15
  int KeyValueData; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int i; // edi
  bool v38; // cc
  __int64 v39; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+50h] [rbp-99h] BYREF
  int v42; // [rsp+58h] [rbp-91h]
  int v43[4]; // [rsp+60h] [rbp-89h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-79h]
  __int64 v45; // [rsp+80h] [rbp-69h]
  size_t Size; // [rsp+88h] [rbp-61h]
  int v47; // [rsp+90h] [rbp-59h] BYREF
  _BYTE v48[2]; // [rsp+94h] [rbp-55h] BYREF
  __int16 v49; // [rsp+96h] [rbp-53h]
  char v50; // [rsp+A0h] [rbp-49h] BYREF

  v45 = a6;
  v42 = a3;
  v7 = a2;
  Size = a4;
  *(_OWORD *)v43 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v8 = 0;
  *(_OWORD *)Privileges = 0LL;
  HIWORD(v43[0]) = -1;
  memset_0(v48, 0, 0x54uLL);
  v9 = &v50;
  v47 = -1;
  do
  {
    CmpValueEnumStackEntryInitialize(v9);
    v9 = (char *)(v10 + 32);
  }
  while ( v11 != v12 );
  HvpGetCellContextInitialize(&v41);
  v13 = 0LL;
  v14 = 0LL;
  HvpGetCellContextInitialize(&v39);
  HvpGetCellContextInitialize(&v40);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v43, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
    goto LABEL_53;
  CmpLockKcbStackShared(v43);
  v8 = 1;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_53;
  }
  v16 = HIWORD(v43[0]);
  v17 = 0;
  v18 = Privileges[1];
  if ( SHIWORD(v43[0]) > 0 )
  {
    v19 = &v43[2 * SHIWORD(v43[0]) + 2];
    v20 = (char *)Privileges[1] - (char *)&v43[2];
    do
    {
      if ( (unsigned __int16)v16 >= 2u )
        v21 = (int *)((char *)v19 + v20 - 16);
      else
        v21 = v19;
      v13 = *(_QWORD *)v21;
      if ( *(_DWORD *)(*(_QWORD *)v21 + 40LL) != -1 )
        v17 = 1;
      --v16;
      v19 -= 2;
    }
    while ( v16 > 0 );
    if ( v17 )
    {
      started = CmpValueEnumStackStartFromKcbStack(&v47, v43, a1, v20);
      if ( started >= 0 )
      {
        started = CmpValueEnumStackAdvance(&v47);
        if ( started >= 0 )
        {
          for ( i = 0; i < (unsigned int)v7; ++i )
          {
            started = CmpValueEnumStackAdvance(&v47);
            if ( started < 0 )
              goto LABEL_53;
          }
          v28 = v47;
          v38 = v49 < 2;
          v18 = Privileges[1];
          _mm_lfence();
          if ( v38 )
            v22 = *(_QWORD *)&v43[2 * v49 + 2];
          else
            v22 = *((_QWORD *)Privileges[1] + v49 - 2);
          goto LABEL_21;
        }
      }
LABEL_53:
      v18 = Privileges[1];
      goto LABEL_28;
    }
  }
  v13 = *(_QWORD *)&v43[2];
  v22 = *(_QWORD *)&v43[2];
  KeyNodeForKcb = CmpGetKeyNodeForKcb(*(__int64 *)&v43[2], (unsigned int *)&v39, 0);
  v14 = KeyNodeForKcb;
  if ( (*(_BYTE *)(KeyNodeForKcb + 2) & 0x40) != 0 )
  {
    started = -1073741816;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
  {
    started = -2147483622;
    goto LABEL_28;
  }
  v24 = *(_QWORD *)(v13 + 32);
  v25 = *(unsigned int *)(KeyNodeForKcb + 40);
  if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v24, v25, (unsigned int *)&v40);
  else
    CellFlat = HvpGetCellPaged(v24, v25);
  v27 = *(_QWORD *)(v13 + 32);
  v28 = *(_DWORD *)(CellFlat + 4 * v7);
  if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v27, (__int64)&v40);
  else
    HvpReleaseCellPaged(v27, (unsigned int *)&v40);
  v29 = *(_QWORD *)(v13 + 32);
  if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v29, (__int64)&v39);
  else
    HvpReleaseCellPaged(v29, (unsigned int *)&v39);
LABEL_21:
  v30 = *(_QWORD *)(v22 + 32);
  if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v30, v28, (unsigned int *)&v41);
  else
    CellPaged = HvpGetCellPaged(v30, v28);
  v32 = CellPaged;
  KeyValueData = CmpQueryKeyValueData(v22, v28, CellPaged, v42, (_DWORD *)Size, a5, (unsigned int *)v45);
  started = 0;
  v14 = 0LL;
  if ( KeyValueData < 0 )
    started = KeyValueData;
  if ( v32 )
  {
    v34 = *(_QWORD *)(v22 + 32);
    if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v34, (__int64)&v41);
    else
      HvpReleaseCellPaged(v34, (unsigned int *)&v41);
  }
LABEL_28:
  CmpValueEnumStackCleanup(&v47);
  if ( v14 )
  {
    v35 = *(_QWORD *)(v13 + 32);
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v35, (__int64)&v39);
    else
      HvpReleaseCellPaged(v35, (unsigned int *)&v39);
  }
  if ( v8 )
    CmpUnlockKcbStack((__int64)v43);
  if ( v18 )
    CmSiFreeMemory(v18);
  return (unsigned int)started;
}
