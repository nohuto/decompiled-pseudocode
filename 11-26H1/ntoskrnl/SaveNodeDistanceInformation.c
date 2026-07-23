/*
 * XREFs of SaveNodeDistanceInformation @ 0x140D10214
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     KeQueryNumaCosts @ 0x140CCEB5C (KeQueryNumaCosts.c)
 */

void SaveNodeDistanceInformation()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 *v2; // r8
  __int64 v3; // r9
  _WORD *v4; // rax
  unsigned int v5; // edi
  _QWORD *v6; // r13
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  ULONG v13; // r14d
  _DWORD *Pool2; // rax
  _DWORD *v15; // r15
  __int64 v16; // r11
  _DWORD *v17; // r10
  unsigned int v18; // r8d
  __int64 *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  _WORD *v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int64 v31; // r8
  __int64 *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 *v35; // r14
  __int64 v36; // r9
  __int64 v37; // r12
  unsigned __int16 *v38; // r10
  int v39; // r8d
  unsigned int i; // edx
  _DWORD *v41; // r12
  __int64 *v42; // rdi
  __int64 v43; // r11
  int v44; // eax
  __int64 v45; // r15
  int v46; // ecx
  __int64 v47; // rdx
  __int16 v48; // ax
  __int64 v49; // rcx
  unsigned int j; // edx
  __int64 v51; // rax
  unsigned int v52; // esi
  unsigned int v53; // r9d
  __int64 *v54; // r10
  unsigned int k; // r8d
  int v56; // edx
  unsigned int v57; // edi
  int v58; // eax
  int v59; // r15d
  unsigned int v60; // edi
  __int64 *v61; // r11
  __int64 v62; // r12
  unsigned __int16 *v63; // r8
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // rdx
  __int64 *v67; // rsi
  unsigned __int16 v68; // r10
  __int64 v69; // rcx
  int v70; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  int v72; // [rsp+50h] [rbp-71h]
  ULONG v73; // [rsp+54h] [rbp-6Dh]
  ULONG ResultLength; // [rsp+58h] [rbp-69h] BYREF
  PVOID P; // [rsp+60h] [rbp-61h]
  __int64 *v76; // [rsp+68h] [rbp-59h]
  __int64 v77; // [rsp+70h] [rbp-51h]
  _DWORD *v78; // [rsp+78h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-41h] BYREF
  _QWORD *NumaCosts; // [rsp+90h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp+7h] BYREF
  char KeyValueInformation[4]; // [rsp+D8h] [rbp+17h] BYREF
  int v84; // [rsp+DCh] [rbp+1Bh]
  int v85; // [rsp+E0h] [rbp+1Fh]
  unsigned int v86; // [rsp+E4h] [rbp+23h]

  v0 = (unsigned __int16)KeNumberNodes;
  ResultLength = 0;
  KeyHandle = (HANDLE)-1LL;
  v1 = 0;
  v72 = (unsigned __int16)KeNumberNodes;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( !KeNumberNodes )
    goto LABEL_7;
  v2 = KeNodeBlock;
  v3 = (unsigned __int16)KeNumberNodes;
  do
  {
    v4 = (_WORD *)*v2;
    v5 = v1++;
    ++v2;
    if ( *v4 != v4[1] )
      v1 = v5;
    --v3;
  }
  while ( v3 );
  if ( v1 != 1 )
  {
LABEL_7:
    NumaCosts = KeQueryNumaCosts();
    v6 = NumaCosts;
    if ( !NumaCosts )
    {
LABEL_102:
      if ( KeyHandle != (HANDLE)-1LL )
        ZwClose(KeyHandle);
      return;
    }
    v7 = 0;
    if ( (_DWORD)v0 != 1 )
    {
      do
      {
        v8 = v7 + 1;
        v9 = v7 + 1;
        if ( v7 + 1 < (unsigned int)v0 )
        {
          v10 = v8 + v7 * (_DWORD)v0;
          do
          {
            v11 = v6[v10];
            if ( v11 != -1LL )
            {
              v12 = (v6[v7 + v9 * (unsigned int)v0] >> 1) + (v11 >> 1);
              v6[v10] = v12;
              v6[v7 + v9 * (unsigned int)v0] = v12;
            }
            ++v9;
            v10 = (unsigned int)(v10 + 1);
          }
          while ( v9 < (unsigned int)v0 );
        }
        ++v7;
      }
      while ( v8 < (int)v0 - 1 );
    }
    v13 = 2 * v1 * (v1 + 2) + 4;
    v73 = v13;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v13, 0x2020654Bu);
    P = Pool2;
    v15 = Pool2;
    if ( !Pool2 )
    {
LABEL_100:
      ExFreePoolWithTag(v6, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_102;
    }
    *Pool2 = v1;
    v16 = v1 + 1;
    v17 = &Pool2[v16];
    v18 = 1;
    v78 = v17;
    if ( (_DWORD)v0 )
    {
      v19 = KeNodeBlock;
      v20 = v0;
      do
      {
        if ( *(_WORD *)*v19 == *(_WORD *)(*v19 + 2) )
        {
          v21 = v18++;
          Pool2[v21] = *(_DWORD *)(*v19 + 4);
        }
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    if ( v1 * v1 )
    {
      v22 = v1 * v1;
      v23 = &Pool2[v16];
      while ( v22 )
      {
        *v23++ = -1;
        --v22;
      }
    }
    v24 = 1LL;
    v25 = v0 * v0;
    if ( !((_DWORD)v0 * (_DWORD)v0) )
      goto LABEL_37;
    v26 = v6;
    v27 = v25;
    v28 = v25;
    do
    {
      if ( v24 < *v26 && *v26 != -1LL )
        v24 = *v26;
      ++v26;
      --v28;
    }
    while ( v28 );
    if ( v24 > 0x1000000000000LL )
    {
      v29 = v24 >> 16;
      v30 = v6;
      do
      {
        if ( *v30 != -1LL )
          *v30 >>= 16;
        ++v30;
        --v27;
      }
      while ( v27 );
      v31 = 0x8000000000000000uLL / v29;
    }
    else
    {
LABEL_37:
      v31 = 0x8000000000000000uLL / v24;
      if ( !v25 )
      {
LABEL_43:
        if ( (_DWORD)v0 )
        {
          v35 = KeNodeBlock;
          v77 = v0;
          v76 = KeNodeBlock;
          v36 = v0;
          v37 = v0;
          do
          {
            v38 = (unsigned __int16 *)*v35;
            if ( *(_WORD *)*v35 == *(_WORD *)(*v35 + 2) )
            {
              v39 = 0;
              for ( i = 0; i < v1; ++i )
              {
                if ( v15[i + 1] == *((_DWORD *)v38 + 1) )
                {
                  v39 = v1 * i;
                  break;
                }
              }
              v41 = v78;
              v42 = KeNodeBlock;
              v43 = v36;
              do
              {
                v44 = *(unsigned __int16 *)*v42;
                if ( (_WORD)v44 == *(_WORD *)(*v42 + 2) )
                {
                  v45 = v44 + (unsigned int)v0 * *v38;
                  if ( v6[v45] != 0xFFFFLL )
                  {
                    v46 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v47 = (unsigned int)(v46 + 1);
                        if ( *((_DWORD *)P + v47) == *(_DWORD *)(*v42 + 4) )
                          break;
                        ++v46;
                      }
                      while ( (unsigned int)v47 < v1 );
                      LODWORD(v0) = v72;
                      v6 = NumaCosts;
                    }
                    v48 = v6[v45];
                    v49 = (unsigned int)(v39 + v46);
                    *((_WORD *)v41 + v49) = v48;
                    if ( !v48 )
                      *((_WORD *)v41 + v49) = 2;
                  }
                }
                ++v42;
                --v43;
              }
              while ( v43 );
              v35 = v76;
              v37 = v77;
              v15 = P;
              v36 = (unsigned int)v0;
            }
            ++v35;
            --v37;
            v76 = v35;
            v77 = v37;
          }
          while ( v37 );
          v17 = v78;
          LODWORD(v16) = v1 + 1;
          v13 = v73;
        }
        for ( j = 0; j < v1; *((_WORD *)v17 + v51) = 0 )
        {
          v51 = j * (unsigned int)v16;
          ++j;
        }
        v52 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) < 0 )
        {
          KeyHandle = (HANDLE)-1LL;
        }
        else if ( ZwQueryValueKey(
                    KeyHandle,
                    &ValueName,
                    KeyValuePartialInformation,
                    KeyValueInformation,
                    0x14u,
                    &ResultLength) >= 0
               && v84 == 4
               && v85 == 4 )
        {
          v52 = v86;
          if ( v86 > 0x32 || !v86 )
            v52 = 10;
        }
        v53 = 0;
        if ( (_DWORD)v0 )
        {
          v54 = KeNodeBlock;
          do
          {
            if ( *(_WORD *)*v54 == *(_WORD *)(*v54 + 2) )
            {
              for ( k = 0; k < (unsigned int)v0; ++k )
              {
                if ( *(_WORD *)KeNodeBlock[k] == *(_WORD *)(KeNodeBlock[k] + 2) && v53 != k )
                {
                  v56 = v6[v53 * (_DWORD)v0 + k];
                  v57 = *((_DWORD *)KeNodeDistance + k + v53 * (unsigned __int16)KeNumberNodes);
                  v58 = v57 - v56;
                  if ( (int)(v56 - v57) >= 0 )
                    v58 = v56 - v57;
                  if ( 100 * v58 / v52 > v57 )
                  {
                    if ( KeyHandle != (HANDLE)-1LL )
                    {
                      RtlInitUnicodeString(&ValueName, L"Node Distance");
                      ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, v15, v13);
                    }
                    v59 = (unsigned __int16)KeNumberNodes;
                    v60 = 0;
                    v61 = KeNodeBlock;
                    v62 = (unsigned int)v0;
                    do
                    {
                      v63 = (unsigned __int16 *)*v61;
                      v64 = *(unsigned __int16 *)(*v61 + 2);
                      if ( *(_WORD *)*v61 != (_WORD)v64 )
                        v63 = (unsigned __int16 *)KeNodeBlock[v64];
                      v65 = v62;
                      v66 = v59 * v60;
                      v67 = KeNodeBlock;
                      do
                      {
                        v68 = *(_WORD *)*v67;
                        v69 = *(unsigned __int16 *)(*v67 + 2);
                        if ( v68 != (_WORD)v69 )
                          v68 = *(_WORD *)KeNodeBlock[v69];
                        v70 = *v63;
                        if ( (_WORD)v70 == v68 )
                          *((_DWORD *)KeNodeDistance + v66) = 0;
                        else
                          *((_DWORD *)KeNodeDistance + v66) = v6[(unsigned int)v68 + (_DWORD)v0 * v70];
                        v66 = (unsigned int)(v66 + 1);
                        ++v67;
                        --v65;
                      }
                      while ( v65 );
                      ++v60;
                      v62 = (unsigned int)v0;
                      ++v61;
                    }
                    while ( v60 < (unsigned int)v0 );
                    goto LABEL_100;
                  }
                }
              }
            }
            ++v53;
            ++v54;
          }
          while ( v53 < (unsigned int)v0 );
        }
        goto LABEL_100;
      }
    }
    v32 = v6;
    v33 = v25;
    do
    {
      if ( *v32 == -1 )
        v34 = 0xFFFFLL;
      else
        v34 = (v31 * *v32) >> 48;
      *v32++ = v34;
      --v33;
    }
    while ( v33 );
    goto LABEL_43;
  }
}
