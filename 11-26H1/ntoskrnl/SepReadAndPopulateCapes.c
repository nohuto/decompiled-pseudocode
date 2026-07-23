/*
 * XREFs of SepReadAndPopulateCapes @ 0x14081D3BC
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14063F8C0 (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     SepRmCapPoolExpand @ 0x14063FACC (SepRmCapPoolExpand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeValidSecurityDescriptor @ 0x140A8DAC0 (SeValidSecurityDescriptor.c)
 *     SepRegOpenKey @ 0x140AB4194 (SepRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReadAndPopulateCapes(HANDLE KeyHandle, int a2, _DWORD *a3, _QWORD *a4)
{
  char *v4; // r14
  _DWORD *v5; // r15
  ULONG *Pool2; // rdi
  ULONG v8; // r12d
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  char v12; // r12
  ULONG v13; // eax
  __int64 v14; // r13
  char *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // eax
  NTSTATUS v18; // eax
  ULONG v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // esi
  ULONG v22; // esi
  unsigned int v23; // esi
  __int64 v24; // r12
  char *v25; // rax
  char *v26; // rsi
  unsigned int v27; // r12d
  __int64 v28; // r12
  char *v29; // rsi
  __int16 v30; // ax
  char *v31; // rsi
  __int64 v32; // rcx
  char *v33; // rsi
  char *v34; // rsi
  void *v35; // rdx
  __int64 v36; // rcx
  char *v37; // rsi
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  char v40; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+34h] [rbp-CCh] BYREF
  ULONG v42; // [rsp+38h] [rbp-C8h]
  HANDLE KeyHandlea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h]
  ULONG v45; // [rsp+4Ch] [rbp-B4h]
  char *v46; // [rsp+50h] [rbp-B0h]
  _QWORD *v47; // [rsp+58h] [rbp-A8h]
  _DWORD *v48; // [rsp+60h] [rbp-A0h]
  wchar_t pszDest[344]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyInformation[560]; // [rsp+320h] [rbp+220h] BYREF

  v47 = a4;
  v4 = 0LL;
  Length = 0;
  v40 = 0;
  v5 = KeyInformation;
  Pool2 = 0LL;
  KeyHandlea = 0LL;
  v48 = a3;
  v8 = 560;
  v10 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x230u, &Length);
  v11 = v10;
  if ( v10 >= 0 )
  {
LABEL_7:
    v13 = v5[5];
    v45 = v13;
    if ( !v13 )
    {
      LODWORD(v14) = 0;
      v15 = 0LL;
      goto LABEL_58;
    }
    v16 = 56 * v13;
    v42 = a2 + 18;
    Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v14 = v45;
      v17 = 0;
      while ( 1 )
      {
        v44 = v17;
        if ( v17 >= (unsigned int)v14 )
          break;
        LODWORD(ResultLength) = v17;
        v11 = RtlStringCbPrintfW(
                pszDest,
                0x157uLL,
                L"%s\\%d",
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                ResultLength);
        if ( v11 < 0 )
          goto LABEL_59;
        v11 = SepRegOpenKey(pszDest, 0x201u, &KeyHandlea);
        if ( v11 < 0 )
          goto LABEL_59;
        v18 = ZwQueryKey(KeyHandlea, KeyFullInformation, v5, v8, &Length);
        v11 = v18;
        if ( v18 < 0 )
        {
          if ( v18 != -2147483643 && v18 != -1073741789 )
            goto LABEL_59;
          v12 = v40;
          if ( v40 )
            ExFreePoolWithTag(v5, 0x70536553u);
          v5 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( !v5 )
          {
            v11 = -1073741670;
            goto LABEL_60;
          }
          v8 = Length;
          v40 = 1;
          v11 = ZwQueryKey(KeyHandlea, KeyFullInformation, v5, Length, &Length);
          if ( v11 < 0 )
            goto LABEL_59;
        }
        v19 = v42;
        v20 = v5[10] + 18;
        if ( v20 > v42 )
        {
          Pool2 = (ULONG *)SepRmCapPoolExpand(Pool2);
          if ( !Pool2 )
            goto LABEL_10;
          v19 = v20;
          v42 = v20;
        }
        v11 = ZwQueryValueKey(
                KeyHandlea,
                (PUNICODE_STRING)&ExpPlatformBinaryLock.LastXStateSaveDebugInfo,
                KeyValuePartialInformation,
                Pool2,
                v19,
                &Length);
        if ( v11 < 0 )
          goto LABEL_59;
        v21 = Pool2[2] + ((v16 + 1) & 0xFFFFFFFE);
        v11 = ZwQueryValueKey(KeyHandlea, &CapePredicate, KeyValuePartialInformation, Pool2, v42, &Length);
        if ( v11 < 0 )
          goto LABEL_59;
        v22 = Pool2[2] + v21;
        v11 = ZwQueryValueKey(KeyHandlea, &CapeSD, KeyValuePartialInformation, Pool2, v42, &Length);
        if ( v11 < 0 )
          goto LABEL_59;
        v23 = Pool2[2] + ((v22 + 7) & 0xFFFFFFF8);
        v11 = ZwQueryValueKey(KeyHandlea, &CapeStagedSD, KeyValuePartialInformation, Pool2, v42, &Length);
        if ( v11 < 0 )
          goto LABEL_59;
        v16 = Pool2[2] + ((v23 + 7) & 0xFFFFFFF8);
        ZwClose(KeyHandlea);
        v17 = v44 + 1;
        KeyHandlea = 0LL;
      }
      v24 = v16;
      v25 = (char *)ExAllocatePool2(0x100uLL);
      v4 = v25;
      if ( v25 )
      {
        memset_0(v25, 0, v16);
        v26 = &v4[56 * v14];
        v46 = &v4[v24];
        v27 = 0;
        while ( 1 )
        {
          v44 = v27;
          if ( v27 >= (unsigned int)v14 )
            break;
          LODWORD(ResultLength) = v27;
          v11 = RtlStringCbPrintfW(
                  pszDest,
                  0x157uLL,
                  L"%s\\%d",
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                  ResultLength);
          if ( v11 < 0 )
            goto LABEL_59;
          v11 = SepRegOpenKey(pszDest, 0x201u, &KeyHandlea);
          if ( v11 < 0 )
            goto LABEL_59;
          v11 = ZwQueryValueKey(KeyHandlea, &CapeFlags, KeyValuePartialInformation, Pool2, v42, &Length);
          if ( v11 < 0 )
            goto LABEL_59;
          if ( Pool2[2] != 4 )
          {
            v11 = -1073741811;
            goto LABEL_59;
          }
          v28 = 56LL * v27;
          *(_DWORD *)&v4[v28 + 48] = Pool2[3];
          v11 = ZwQueryValueKey(
                  KeyHandlea,
                  (PUNICODE_STRING)&ExpPlatformBinaryLock.LastXStateSaveDebugInfo,
                  KeyValuePartialInformation,
                  Pool2,
                  v42,
                  &Length);
          if ( v11 < 0 )
            goto LABEL_59;
          v29 = (char *)((unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
          if ( &v29[Pool2[2]] > v46 )
            goto LABEL_55;
          v30 = *((_WORD *)Pool2 + 4);
          *(_WORD *)&v4[v28 + 2] = v30;
          *(_WORD *)&v4[v28] = v30;
          *(_QWORD *)&v4[v28 + 8] = v29;
          memmove(v29, Pool2 + 3, Pool2[2]);
          v31 = &v29[Pool2[2]];
          v11 = ZwQueryValueKey(KeyHandlea, &CapePredicate, KeyValuePartialInformation, Pool2, v42, &Length);
          if ( v11 < 0 )
            goto LABEL_59;
          v32 = Pool2[2];
          if ( &v31[v32] > v46 )
            goto LABEL_55;
          *(_DWORD *)&v4[v28 + 16] = v32;
          if ( Pool2[2] )
          {
            *(_QWORD *)&v4[v28 + 24] = v31;
            memmove(v31, Pool2 + 3, Pool2[2]);
          }
          else
          {
            *(_QWORD *)&v4[v28 + 24] = 0LL;
          }
          v33 = &v31[Pool2[2]];
          v11 = ZwQueryValueKey(KeyHandlea, &CapeSD, KeyValuePartialInformation, Pool2, v42, &Length);
          if ( v11 < 0 )
            goto LABEL_59;
          v34 = (char *)((unsigned __int64)(v33 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          if ( &v34[Pool2[2]] > v46 )
            goto LABEL_55;
          *(_QWORD *)&v4[v28 + 32] = v34;
          memmove(v34, Pool2 + 3, Pool2[2]);
          v35 = *(void **)&v4[v28 + 32];
          v45 = Pool2[2];
          if ( !SeValidSecurityDescriptor(v45, v35) )
            goto LABEL_52;
          v11 = ZwQueryValueKey(KeyHandlea, &CapeStagedSD, KeyValuePartialInformation, Pool2, v42, &Length);
          if ( v11 < 0 )
            goto LABEL_59;
          v36 = Pool2[2];
          v37 = (char *)((unsigned __int64)&v34[v45 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          if ( &v37[v36] > v46 )
          {
LABEL_55:
            v11 = -1073741789;
            goto LABEL_59;
          }
          if ( (_DWORD)v36 )
          {
            *(_QWORD *)&v4[v28 + 40] = v37;
            memmove(v37, Pool2 + 3, Pool2[2]);
            if ( !SeValidSecurityDescriptor(Pool2[2], *(PSECURITY_DESCRIPTOR *)&v4[v28 + 40]) )
            {
LABEL_52:
              v11 = -1073741703;
              goto LABEL_59;
            }
          }
          else
          {
            *(_QWORD *)&v4[v28 + 40] = 0LL;
          }
          v26 = &v37[Pool2[2]];
          ZwClose(KeyHandlea);
          v27 = v44 + 1;
          KeyHandlea = 0LL;
        }
        v15 = v4;
LABEL_58:
        *v47 = v15;
        *v48 = v14;
        if ( v11 >= 0 )
        {
          v12 = v40;
          goto LABEL_65;
        }
        goto LABEL_59;
      }
    }
LABEL_10:
    v11 = -1073741670;
LABEL_59:
    v12 = v40;
    goto LABEL_60;
  }
  if ( v10 != -2147483643 && v10 != -1073741789 )
    goto LABEL_59;
  v5 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( v5 )
  {
    v8 = Length;
    v40 = 1;
    v11 = ZwQueryKey(KeyHandle, KeyFullInformation, v5, Length, &Length);
    if ( v11 < 0 )
      goto LABEL_59;
    goto LABEL_7;
  }
  v11 = -1073741670;
  v12 = 0;
LABEL_60:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
LABEL_65:
  if ( v12 && v5 )
    ExFreePoolWithTag(v5, 0x70536553u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x70536553u);
  return (unsigned int)v11;
}
