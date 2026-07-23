/*
 * XREFs of BiBuildIdentifierList @ 0x1409A5E6C
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x14089A258 (BiExportStoreAlterationsToEfi.c)
 *     BiBindEfiNamespaceObjects @ 0x1409A4844 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     BiEnumerateBootEntries @ 0x1409A1444 (BiEnumerateBootEntries.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     BiFreeIdentifierList @ 0x1409A38EC (BiFreeIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A5200 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BcdGetElementData @ 0x1409A5B40 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     BiGetSavedBootEntry @ 0x140B4E6F0 (BiGetSavedBootEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBuildIdentifierList(HANDLE BcdStoreHandle, __int64 a2, _QWORD *a3)
{
  int v3; // r14d
  PCWSTR *v6; // rsi
  int v7; // ebx
  PCWSTR *v8; // r13
  ULONG i; // r15d
  __int64 v10; // r8
  HANDLE v11; // rsi
  int v12; // r14d
  __int64 Pool2; // rax
  __int64 v14; // rbx
  GUID v15; // xmm0
  int v16; // eax
  __int64 *v17; // rax
  int v18; // eax
  _BYTE *v19; // r12
  __int64 v20; // rbx
  unsigned int *j; // rsi
  __int64 v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // rbx
  _QWORD *v25; // r14
  PVOID *v26; // rcx
  _QWORD *v27; // rsi
  _QWORD *v28; // rdx
  PVOID *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *k; // rcx
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  __int64 *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // r15
  unsigned int v43; // eax
  __int64 v44; // rax
  PVOID *v46; // rax
  PVOID v47; // rcx
  int v48; // eax
  _QWORD *v49; // rcx
  __int64 *v50; // rax
  PVOID *v51; // rcx
  PVOID *v52; // rax
  _QWORD *v53; // rdx
  __int64 *v54; // rax
  __int16 Buffer[2]; // [rsp+20h] [rbp-79h] BYREF
  ULONG v56; // [rsp+24h] [rbp-75h] BYREF
  _QWORD *v57; // [rsp+28h] [rbp-71h] BYREF
  __int64 *v58; // [rsp+30h] [rbp-69h]
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  PVOID *p_P; // [rsp+40h] [rbp-59h]
  _QWORD *v61; // [rsp+48h] [rbp-51h] BYREF
  __int64 *v62; // [rsp+50h] [rbp-49h]
  PCWSTR *v63; // [rsp+58h] [rbp-41h] BYREF
  ULONG v64; // [rsp+60h] [rbp-39h] BYREF
  ULONG BufferSize; // [rsp+64h] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  HANDLE BcdObjectHandle; // [rsp+70h] [rbp-29h] BYREF
  __int64 v68; // [rsp+78h] [rbp-21h] BYREF
  PVOID v69; // [rsp+80h] [rbp-19h] BYREF
  PVOID v70; // [rsp+88h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  GUID Guid; // [rsp+A0h] [rbp+7h] BYREF

  v3 = 0;
  a3[1] = a3;
  *a3 = a3;
  v69 = 0LL;
  v62 = (__int64 *)&v61;
  v56 = 0;
  v61 = &v61;
  v68 = 0LL;
  p_P = &P;
  BcdObjectHandle = 0LL;
  P = &P;
  Buffer[0] = 0;
  v58 = (__int64 *)&v57;
  v64 = 0;
  v57 = &v57;
  v6 = 0LL;
  Guid = 0LL;
  v70 = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v63 = 0LL;
  v7 = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &Handle);
  if ( v7 < 0 )
    goto LABEL_59;
  v7 = BiEnumerateSubKeys((unsigned __int64)Handle, &v63, &v64);
  if ( v7 < 0 )
    goto LABEL_58;
  v8 = v63;
  for ( i = 0; i < v64; ++i )
  {
    RtlInitUnicodeString(&DestinationString, v8[i]);
    if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
      && BcdOpenObject(BcdStoreHandle, &Guid, &BcdObjectHandle) >= 0 )
    {
      v11 = BcdObjectHandle;
      if ( (int)BiGetObjectDescription(BcdObjectHandle, &v68, v10) >= 0 )
      {
        if ( (HIDWORD(v68) & 0xF0000000) != 0x10000000
          || (HIDWORD(v68) & 0xF00000) != 0x100000
          || (v12 = HIDWORD(v68) & 0xFFFFF, (HIDWORD(v68) & 0xFFFFF) == 1) )
        {
          BcdCloseObject(v11);
          v3 = 0;
          continue;
        }
        Pool2 = ExAllocatePool2(0x102uLL);
        v14 = Pool2;
        if ( !Pool2 )
        {
          BcdCloseObject(v11);
          v7 = -1073741670;
          goto LABEL_58;
        }
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        v15 = Guid;
        v16 = *(_DWORD *)(Pool2 + 48) | 4;
        *(_DWORD *)(v14 + 48) = v16;
        *(GUID *)(v14 + 16) = v15;
        if ( v12 == 0xFFFFF )
        {
          *(_DWORD *)(v14 + 48) = v16 | 8;
          v46 = p_P;
          if ( *p_P != &P )
            goto LABEL_34;
          *(_QWORD *)(v14 + 8) = p_P;
          *(_QWORD *)v14 = &P;
          *v46 = (PVOID)v14;
          p_P = (PVOID *)v14;
        }
        else
        {
          v17 = v62;
          if ( (_QWORD **)*v62 != &v61 )
            goto LABEL_34;
          *(_QWORD *)(v14 + 8) = v62;
          *(_QWORD *)v14 = &v61;
          *v17 = v14;
          v62 = (__int64 *)v14;
        }
        BufferSize = 2;
        v3 = 0;
        if ( BcdGetElementData(v11, 0x16000082u, Buffer, &BufferSize) >= 0 && LOBYTE(Buffer[0]) )
          *(_DWORD *)(v14 + 48) |= 0x10u;
        if ( (int)BiGetSavedBootEntry(v11, &v69) >= 0 )
        {
          v47 = v69;
          v48 = *((_DWORD *)v69 + 2);
          *(_DWORD *)(v14 + 48) |= 2u;
          *(_DWORD *)(v14 + 32) = v48;
          ExFreePoolWithTag(v47, 0x4B444342u);
        }
      }
      BcdCloseObject(v11);
    }
  }
  v18 = BiEnumerateBootEntries(&v70, &v56);
  v19 = v70;
  v7 = v18;
  if ( v18 >= 0 )
  {
    v20 = 0LL;
    for ( j = (unsigned int *)v70; (char *)j - v19 < (unsigned __int64)v56; j = (unsigned int *)((char *)j + v44) )
    {
      if ( (int)BiGetObjectReferenceFromEfiEntry((__int64)(j + 1), &Guid) < 0 )
        goto LABEL_21;
      for ( k = v61; ; k = (_QWORD *)*k )
      {
        if ( k == &v61 )
        {
          v37 = -1073741275;
          goto LABEL_47;
        }
        v35 = *((_DWORD *)k + 12);
        if ( (v35 & 4) != 0 )
        {
          v36 = *(_QWORD *)&Guid.Data1 - k[2];
          if ( *(_QWORD *)&Guid.Data1 == k[2] )
            v36 = *(_QWORD *)Guid.Data4 - k[3];
          if ( !v36 && (v35 & 3) != 0 && *((_DWORD *)k + 8) == j[3] )
            break;
        }
      }
      v20 = (__int64)k;
      v37 = 0;
LABEL_47:
      v3 = 32;
      if ( v37 < 0 )
      {
LABEL_21:
        v22 = ExAllocatePool2(0x102uLL);
        v20 = v22;
        if ( !v22 )
          goto LABEL_55;
        *(_OWORD *)v22 = 0LL;
        *(_OWORD *)(v22 + 16) = 0LL;
        *(_OWORD *)(v22 + 32) = 0LL;
        *(_QWORD *)(v22 + 48) = 0LL;
        *(_DWORD *)(v22 + 48) |= 8u;
        v23 = v58;
        if ( (_QWORD **)*v58 != &v57 )
          goto LABEL_34;
        *(_QWORD *)(v20 + 8) = v58;
        *(_QWORD *)v20 = &v57;
        *v23 = v20;
        v58 = (__int64 *)v20;
      }
      else
      {
        v38 = *(_QWORD **)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20
          || (v39 = *(_QWORD **)(v20 + 8), *v39 != v20)
          || (*v39 = v38, v38[1] = v39, v40 = (__int64 *)a3[1], (_QWORD *)*v40 != a3) )
        {
LABEL_34:
          __fastfail(3u);
        }
        *(_QWORD *)v20 = a3;
        *(_QWORD *)(v20 + 8) = v40;
        *v40 = v20;
        a3[1] = v20;
      }
      v41 = (_DWORD *)ExAllocatePool2(0x102uLL);
      v42 = v41;
      if ( !v41 )
      {
LABEL_55:
        v7 = -1073741670;
        goto LABEL_56;
      }
      memmove(v41, j + 1, j[2]);
      *(_QWORD *)(v20 + 40) = v42;
      *(_DWORD *)(v20 + 32) = v42[2];
      v43 = v3 | *(_DWORD *)(v20 + 48) & 0xFFFFFFDF;
      v3 = 0;
      *(_DWORD *)(v20 + 48) = v43 | 1;
      v44 = *j;
      if ( !(_DWORD)v44 )
        break;
    }
    v24 = v57;
    while ( v24 != &v57 )
    {
      v25 = v24;
      v26 = (PVOID *)P;
      v27 = v24;
      while ( 1 )
      {
        if ( v26 == &P )
        {
          v24 = (_QWORD *)*v24;
          goto LABEL_73;
        }
        if ( ((_DWORD)v26[6] & 3) != 0 && *((_DWORD *)v26 + 8) == *((_DWORD *)v24 + 8) )
          break;
        v26 = (PVOID *)*v26;
      }
      v28 = *v26;
      v24 = (_QWORD *)*v24;
      if ( *((PVOID **)*v26 + 1) != v26 )
        goto LABEL_34;
      v29 = (PVOID *)v26[1];
      if ( *v29 != v26 )
        goto LABEL_34;
      *v29 = v28;
      v28[1] = v29;
      v30 = *((_DWORD *)v27 + 12);
      *((_OWORD *)v27 + 1) = *((_OWORD *)v26 + 1);
      *((_DWORD *)v27 + 12) = v30 ^ (*((_DWORD *)v26 + 12) ^ v30) & 2;
      ExFreePoolWithTag(v26, 0x4B444342u);
      *((_DWORD *)v27 + 12) |= 4u;
      v31 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v27 )
        goto LABEL_34;
      v32 = (_QWORD *)v27[1];
      if ( (_QWORD *)*v32 != v27 )
        goto LABEL_34;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      v33 = (_QWORD *)a3[1];
      if ( (_QWORD *)*v33 != a3 )
        goto LABEL_34;
      *v25 = a3;
      v27[1] = v33;
      *v33 = v27;
      a3[1] = v27;
LABEL_73:
      ;
    }
    if ( v61 != &v61 )
    {
      v49 = (_QWORD *)a3[1];
      *v49 = v61;
      v50 = v62;
      a3[1] = v62;
      *v50 = (__int64)a3;
      v61[1] = v49;
    }
    if ( P != &P )
    {
      v51 = (PVOID *)a3[1];
      *v51 = P;
      v52 = p_P;
      a3[1] = p_P;
      *v52 = a3;
      *((_QWORD *)P + 1) = v51;
    }
    if ( v57 != &v57 )
    {
      v53 = (_QWORD *)a3[1];
      *v53 = v57;
      v54 = v58;
      a3[1] = v58;
      *v54 = (__int64)a3;
      v57[1] = v53;
    }
    v7 = 0;
  }
LABEL_56:
  if ( v19 )
    ExFreePoolWithTag(v19, 0x4B444342u);
LABEL_58:
  v6 = v63;
LABEL_59:
  if ( Handle )
    BiCloseKey(Handle);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 )
  {
    BiFreeIdentifierList(&v57);
    BiFreeIdentifierList(&P);
    BiFreeIdentifierList(&v61);
    BiFreeIdentifierList(a3);
    BiLogMessage(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v7);
  }
  return (unsigned int)v7;
}
