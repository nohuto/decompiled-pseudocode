/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x1408B8450
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B7C80 (CmpVirtualBranchIsReplicated.c)
 *     CmpFindPathByNameEx @ 0x1408B7F30 (CmpFindPathByNameEx.c)
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __m128i *a2, _DWORD *a3, UNICODE_STRING *a4, int *a5)
{
  void *v6; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // r14
  void *v10; // r15
  void *i; // rcx
  __int64 NextHive; // rax
  void *v13; // rbx
  __int64 v14; // rcx
  char PathByName; // al
  char v16; // r15
  __int64 CellFlat; // rax
  void *v18; // rbx
  int v19; // ebx
  wchar_t *Buffer; // rcx
  void *j; // rcx
  char v23[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v24 = 0;
  v25 = 0LL;
  DestinationString = 0LL;
  v23[0] = 0;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  HvpGetCellContextInitialize(&v25);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (unsigned __int8)CmpIsKeyDeleted(a1, 0LL) )
  {
    v16 = 0;
  }
  else
  {
    v10 = *(void **)(a1 + 32);
    for ( i = 0LL; ; i = v13 )
    {
      NextHive = CmpGetNextHive(i);
      v13 = (void *)NextHive;
      if ( !NextHive )
        break;
      if ( v10 == (void *)NextHive || !v10 )
      {
        CmpReferenceHive(NextHive);
        HvLockHiveFlusherExclusive(v14);
        if ( v10 == v13 )
        {
          CmpDereferenceHive(v13);
          goto LABEL_9;
        }
      }
    }
    if ( v10 )
    {
      v19 = -1073741772;
      goto LABEL_23;
    }
LABEL_9:
    v6 = *(void **)(a1 + 32);
    PathByName = CmpFindPathByNameEx(a1, a2, 0LL, 0, &v24, &BugCheckParameter3);
    v8 = BugCheckParameter3;
    v16 = PathByName;
    if ( PathByName )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v24, (unsigned int *)&v25);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v7 = CellFlat;
      if ( !CellFlat )
      {
        v19 = -1073741670;
        goto LABEL_23;
      }
      if ( (*(_DWORD *)(CellFlat + 52) & 0x200000) != 0 )
        goto LABEL_22;
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v8, &v25);
      else
        HvpReleaseCellPaged(v8, &v25);
    }
    v18 = *(void **)(a1 + 32);
    if ( v18 )
    {
      HvUnlockHiveFlusherExclusive(*(_QWORD *)(a1 + 32));
    }
    else
    {
      for ( j = 0LL; ; j = v18 )
      {
        v18 = (void *)CmpGetNextHive(j);
        HvUnlockHiveFlusherExclusive(v18);
        CmpDereferenceHive(v18);
        if ( !v18 )
          break;
      }
    }
    CmpDereferenceHive(v18);
  }
  v6 = 0LL;
  v7 = 0LL;
  v19 = CmRealKCBToVirtualPath(a1, (UNICODE_STRING *)a2, a5, &DestinationString);
  if ( v19 >= 0 )
  {
    *a3 |= 8u;
    if ( CmpVirtualBranchIsReplicated(0LL, &DestinationString, v23) || (*a3 & 1) != 0 && !v16 && v23[0] )
    {
      Buffer = a4->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v19 = 260;
    }
    else
    {
LABEL_22:
      v19 = -1073741199;
    }
  }
LABEL_23:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v8, &v25);
    else
      HvpReleaseCellPaged(v8, &v25);
  }
  if ( v6 )
  {
    HvUnlockHiveFlusherExclusive(v6);
    CmpDereferenceHive(v6);
  }
  return (unsigned int)v19;
}
