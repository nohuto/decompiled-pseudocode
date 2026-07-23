/*
 * XREFs of SepReadAndInsertCaps @ 0x14081D06C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14063F8C0 (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x14045F470 (RtlInsertEntryHashTable.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     SepRmCapPoolExpand @ 0x14063FACC (SepRmCapPoolExpand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     SepReadSingleCap @ 0x14081DAF0 (SepReadSingleCap.c)
 *     SepRegOpenKey @ 0x140AB4194 (SepRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReadAndInsertCaps(HANDLE KeyHandle, int a2, __int64 a3)
{
  ULONG v3; // esi
  ULONG v4; // r15d
  int v5; // eax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // r14
  unsigned int *Pool2; // rdi
  NTSTATUS v10; // ebx
  NTSTATUS v11; // eax
  ULONG v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  int SingleCap; // eax
  __int64 v16; // rdx
  ULONG_PTR v17; // r8
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v21; // [rsp+40h] [rbp-C0h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  wchar_t pszDest[344]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = a2 + 50;
  v4 = 0;
  v24 = *(_QWORD *)(a3 + 56);
  v5 = *(_DWORD *)(a3 + 48);
  Entry = 0LL;
  KeyHandlea = 0LL;
  v8 = 0LL;
  Length = 0;
  v23 = v5;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_2;
  v11 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, v3, &Length);
  v10 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -2147483643 && v11 != -1073741789 )
    {
LABEL_29:
      if ( v8 )
        ExFreePoolWithTag(v8, 0x70536553u);
      goto LABEL_31;
    }
    Pool2 = (unsigned int *)SepRmCapPoolExpand(Pool2);
    if ( !Pool2 )
    {
LABEL_2:
      v10 = -1073741670;
      goto LABEL_31;
    }
    v3 = Length;
    v10 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, Length, &Length);
    if ( v10 < 0 )
    {
LABEL_31:
      if ( KeyHandlea )
        ZwClose(KeyHandlea);
      goto LABEL_33;
    }
  }
  v12 = Pool2[5];
  v21 = v12;
  while ( v4 < v12 )
  {
    v13 = ZwEnumerateKey(KeyHandle, v4, KeyBasicInformation, Pool2, v3, &Length);
    v10 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -2147483643 && v13 != -1073741789 )
        goto LABEL_29;
      Pool2 = (unsigned int *)SepRmCapPoolExpand(Pool2);
      if ( !Pool2 )
        goto LABEL_2;
      v3 = Length;
      v10 = ZwEnumerateKey(KeyHandle, v4, KeyBasicInformation, Pool2, Length, &Length);
      if ( v10 < 0 )
        goto LABEL_31;
    }
    *((_WORD *)Pool2 + ((unsigned __int64)Pool2[3] >> 1) + 8) = 0;
    v10 = RtlStringCchPrintfW(
            pszDest,
            0x156uLL,
            L"%s\\%s",
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
            Pool2 + 4);
    if ( v10 < 0 )
      goto LABEL_31;
    v10 = SepRegOpenKey(pszDest, 0x201u, &KeyHandlea);
    if ( v10 < 0 )
      goto LABEL_31;
    v14 = ZwQueryKey(KeyHandlea, KeyFullInformation, Pool2, v3, &Length);
    v10 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -2147483643 && v14 != -1073741789 )
        goto LABEL_29;
      Pool2 = (unsigned int *)SepRmCapPoolExpand(Pool2);
      if ( !Pool2 )
        goto LABEL_2;
      v3 = Length;
      v10 = ZwQueryKey(KeyHandlea, KeyFullInformation, Pool2, Length, &Length);
      if ( v10 < 0 )
        goto LABEL_31;
    }
    SingleCap = SepReadSingleCap(KeyHandlea, (__int64)&Entry);
    v8 = Entry;
    v10 = SingleCap;
    if ( SingleCap < 0 )
      goto LABEL_29;
    Entry[1].Linkage.Blink = (struct _LIST_ENTRY *)a3;
    v16 = *((unsigned int *)&v8[1].Linkage.Flink->Flink + (unsigned int)BYTE1(v8[1].Linkage.Flink->Flink) + 1);
    v17 = v16 + 1;
    if ( (_DWORD)v16 )
      v17 = *((unsigned int *)&v8[1].Linkage.Flink->Flink + (unsigned int)BYTE1(v8[1].Linkage.Flink->Flink) + 1);
    if ( !RtlInsertEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)a3, v8, v17, 0LL) )
    {
      v10 = -1073741670;
      goto LABEL_29;
    }
    v8 = 0LL;
    Entry = 0LL;
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    ++v4;
    v12 = v21;
  }
  if ( v10 < 0 )
    goto LABEL_29;
LABEL_33:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x70536553u);
  return (unsigned int)v10;
}
