/*
 * XREFs of PnpBuildCmResourceList @ 0x140AFB1F0
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x1407A8B3C (IopAllocateBootResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x1407B6158 (PnpBuildCmResourceLists.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopParentToRawTranslation @ 0x1407A5818 (IopParentToRawTranslation.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     IopWriteResourceList @ 0x140AFB6B4 (IopWriteResourceList.c)
 *     IopChildToRootTranslation @ 0x140AFB894 (IopChildToRootTranslation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpBuildCmResourceList(__int64 a1, ULONG a2)
{
  __int64 v2; // r15
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  __int64 *v6; // rcx
  unsigned int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _DWORD *v11; // r12
  _DWORD *Pool2; // rax
  _DWORD *v13; // r13
  __int64 v14; // r14
  int v15; // eax
  _DWORD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  _WORD *v27; // rsi
  int v28; // edi
  __int16 v29; // ax
  int v30; // eax
  __int64 v31; // r14
  HANDLE v32; // rsi
  int v33; // r14d
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD Destination[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v37[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle[2]; // [rsp+88h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-20h] BYREF
  char v44; // [rsp+F8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = a1;
  v38[0] = a1;
  Disposition = a2;
  v5 = 0;
  P[0] = 0LL;
  v6 = **(__int64 ***)(v2 + 16);
  KeyHandle[0] = v6;
  v7 = *((_DWORD *)v6 + 5);
  if ( !v7 )
    goto LABEL_42;
  v8 = v6 + 3;
  v9 = v7;
  do
  {
    v10 = *v8++;
    v5 += *(_DWORD *)(v10 + 276) + 1;
    --v9;
  }
  while ( v9 );
  if ( !v5 )
  {
LABEL_42:
    *(_DWORD *)(v4 + 56) = -1073741595;
    goto LABEL_43;
  }
  v41 = (unsigned int)(20 * (v5 + 1));
  Destination[1] = ExAllocatePool2(0x100uLL);
  v11 = (_DWORD *)Destination[1];
  if ( !Destination[1] )
  {
LABEL_6:
    *(_DWORD *)(v4 + 56) = -1073741670;
LABEL_43:
    *(_QWORD *)(v4 + 48) = 0LL;
    goto LABEL_44;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( !Pool2 )
  {
    ExFreePoolWithTag((PVOID)Destination[1], 0);
    goto LABEL_6;
  }
  v14 = Destination[1] + 20LL;
  *(_DWORD *)Destination[1] = 1;
  v11[1] = *(_DWORD *)v2;
  v11[2] = *(_DWORD *)(v2 + 4);
  v11[3] = 65537;
  v11[4] = v5;
  *Pool2 = 1;
  Pool2[1] = *(_DWORD *)v2;
  v15 = *(_DWORD *)(v2 + 4);
  v16 = v13 + 5;
  v13[2] = v15;
  v17 = 0LL;
  v13[3] = 65537;
  v13[4] = v5;
  while ( 1 )
  {
    LODWORD(Destination[0]) = v17;
    if ( (unsigned int)v17 >= *((_DWORD *)KeyHandle[0] + 5) )
      break;
    v18 = *((_QWORD *)KeyHandle[0] + v17 + 3);
    if ( !*(_BYTE *)(v18 + 8) )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v18 + 136);
      v16[4] = *(_DWORD *)(v18 + 152);
      *(_OWORD *)v14 = *(_OWORD *)(v18 + 136);
      v25 = *(_DWORD *)(v18 + 152);
      goto LABEL_24;
    }
    v19 = *(_QWORD *)(v18 + 32);
    v37[0] = v19;
    if ( *(_DWORD *)(v19 + 128) == 2 )
    {
      v20 = *(_QWORD *)(v19 + 112);
    }
    else
    {
      v34 = IopParentToRawTranslation(v19);
      if ( v34 < 0 )
        goto LABEL_30;
      v20 = *(_QWORD *)(v18 + 112);
      v19 = v37[0];
    }
    *(_OWORD *)v16 = *(_OWORD *)v20;
    v16[4] = *(_DWORD *)(v20 + 16);
    if ( *(_DWORD *)(v19 + 128) == 2 )
    {
      v24 = *(_QWORD *)(v19 + 112);
      *(_OWORD *)v14 = *(_OWORD *)v24;
      v25 = *(_DWORD *)(v24 + 16);
LABEL_24:
      *(_DWORD *)(v14 + 16) = v25;
      goto LABEL_25;
    }
    v21 = *(_QWORD *)(v18 + 72);
    if ( v21 )
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
    else
      LODWORD(v22) = 0;
    v34 = IopChildToRootTranslation(
            v22,
            *(_DWORD *)v18,
            *(_DWORD *)(v18 + 4),
            *(_DWORD *)(v18 + 80),
            v18 + 136,
            (__int64)P);
    if ( v34 < 0 )
    {
LABEL_30:
      ExFreePoolWithTag(v11, 0);
      ExFreePoolWithTag(v13, 0);
      v30 = -1073741267;
      if ( v34 != -1073741267 )
        v30 = -1073741670;
      *(_DWORD *)(v4 + 56) = v30;
      goto LABEL_44;
    }
    v23 = P[0];
    *(_OWORD *)v14 = *(_OWORD *)P[0];
    *(_DWORD *)(v14 + 16) = v23[4];
    ExFreePoolWithTag(v23, 0);
LABEL_25:
    v26 = *(_DWORD *)(v18 + 276);
    v16 += 5;
    v14 += 20LL;
    if ( v26 )
    {
      v27 = (_WORD *)(*(_QWORD *)(v18 + 280) + 8LL);
      v28 = v26;
      do
      {
        *(_BYTE *)v16 = -127;
        *(_BYTE *)v14 = -127;
        *((_BYTE *)v16 + 1) = 1;
        *(_BYTE *)(v14 + 1) = 1;
        v29 = *(v27 - 2);
        *((_WORD *)v16 + 1) = v29;
        *(_WORD *)(v14 + 2) = v29;
        memmove(v16 + 1, v27, 0xCuLL);
        memmove((void *)(v14 + 4), v27, 0xCuLL);
        v27 += 16;
        v16 += 5;
        v14 += 20LL;
        --v28;
      }
      while ( v28 );
      v4 = v38[0];
      v11 = (_DWORD *)Destination[1];
    }
    v17 = (unsigned int)(LODWORD(Destination[0]) + 1);
  }
  if ( Disposition )
  {
    v31 = *(_QWORD *)v4;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.Header.WaitListHead;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    Disposition = 0;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)KeyHandle = 0LL;
    *(_OWORD *)P = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle[1], 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition) >= 0 )
    {
      v32 = KeyHandle[1];
      v37[1] = L"PnP Manager";
      v34 = 0;
      v38[1] = L"PnpManager";
      v37[0] = 1572886LL;
      v38[0] = 1441812LL;
      *(_OWORD *)&Destination[1] = 0LL;
      if ( (int)ObQueryNameStringMode(v31, (__int64)&v43, 0x200u, &v34, 0) >= 0 )
      {
        WORD1(v43) = 496;
        if ( !(_WORD)v43 )
          *((_QWORD *)&v43 + 1) = &v44;
        *(_OWORD *)&Destination[1] = v43;
        RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Raw");
        v33 = v41;
        if ( (int)IopWriteResourceList(v32, v37, v38, &Destination[1], v13, v41) >= 0 )
        {
          *(_OWORD *)&Destination[1] = v43;
          RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Translated");
          IopWriteResourceList(v32, v37, v38, &Destination[1], v11, v33);
        }
      }
      ZwClose(v32);
    }
  }
  *(_QWORD *)(v4 + 48) = v11;
  v3 = v13;
LABEL_44:
  *(_QWORD *)(v4 + 40) = v3;
}
