/*
 * XREFs of GetLongPathNameW @ 0x14001C804
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001B504 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     InternalGetFileAttributesW @ 0x14001BBC8 (InternalGetFileAttributesW.c)
 *     FindLFNorSFN_U @ 0x14001C750 (FindLFNorSFN_U.c)
 *     SkipPathTypeIndicator_U @ 0x14001CC94 (SkipPathTypeIndicator_U.c)
 *     SetErrorMode @ 0x14001D490 (SetErrorMode.c)
 *     FindClose @ 0x14001D5F0 (FindClose.c)
 *     InternalFindFirstFileExW @ 0x14001D704 (InternalFindFirstFileExW.c)
 *     memmove_0 @ 0x14001E837 (memmove_0.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall GetLongPathNameW(WCHAR *Name, WCHAR *a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v6; // edi
  void *v7; // r12
  WCHAR *v8; // r15
  unsigned int v10; // r13d
  __int16 *v11; // rax
  SIZE_T v12; // r13
  WCHAR *Heap; // rax
  __int16 *v14; // r13
  WCHAR *v15; // r15
  PVOID v16; // rax
  _BYTE *v17; // r14
  __int64 v18; // rax
  unsigned int v19; // edi
  size_t v20; // rbx
  __int16 v21; // bx
  void *FirstFile; // rax
  __int64 v23; // rax
  size_t v24; // rbx
  int v25; // eax
  unsigned int v26; // [rsp+34h] [rbp-2E4h]
  const WCHAR *Src; // [rsp+38h] [rbp-2E0h]
  void *v28; // [rsp+40h] [rbp-2D8h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-2D0h]
  char *v30; // [rsp+50h] [rbp-2C8h] BYREF
  WCHAR *v31; // [rsp+58h] [rbp-2C0h]
  PVOID v32; // [rsp+60h] [rbp-2B8h]
  SIZE_T v33; // [rsp+68h] [rbp-2B0h]
  void *v34; // [rsp+70h] [rbp-2A8h]
  char v35[44]; // [rsp+80h] [rbp-298h] BYREF
  wchar_t Str[274]; // [rsp+ACh] [rbp-26Ch] BYREF

  v3 = a3;
  v29 = a3;
  v6 = 0;
  v28 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  memset_0(v35, 0, 0x250uLL);
  if ( !Name )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  v10 = SetErrorMode(32769LL);
  v26 = v10;
  if ( (unsigned int)InternalGetFileAttributesW(Name) != -1 )
  {
    v11 = (__int16 *)SkipPathTypeIndicator_U(Name);
    if ( !v11 || !*v11 || !(unsigned int)FindLFNorSFN_U(v11, &v28, (__int16 **)&v30) )
    {
      v6 = wcslen(Name);
      if ( (unsigned int)v3 > v6 && a2 )
      {
        if ( a2 != Name )
          memmove_0(a2, Name, 2LL * (v6 + 1));
      }
      else
      {
        ++v6;
      }
      goto LABEL_46;
    }
    v12 = 2LL * ((unsigned int)wcslen(Name) + 1);
    v33 = v12;
    Heap = (WCHAR *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      KernelBaseGlobalData + 0x200000,
                      v12);
    v8 = Heap;
    Src = Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8u);
LABEL_45:
      v10 = v26;
      goto LABEL_46;
    }
    memmove_0(Heap, Name, v12);
    v28 = &v8[((_BYTE *)v28 - (_BYTE *)Name) >> 1];
    v14 = (__int16 *)&v8[(v30 - (char *)Name) >> 1];
    v30 = (char *)v14;
    v15 = a2;
    v31 = a2;
    if ( !(_DWORD)v3 || !a2 )
      goto LABEL_18;
    if ( a2 >= Name )
    {
      if ( a2 < (WCHAR *)((char *)Name + v33) )
      {
LABEL_15:
        v16 = RtlAllocateHeap(
                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                KernelBaseGlobalData + 0x200000,
                2 * v3);
        v7 = v16;
        v32 = v16;
        if ( !v16 )
        {
          RtlSetLastWin32Error(8u);
LABEL_44:
          v8 = (WCHAR *)Src;
          goto LABEL_45;
        }
        v15 = (WCHAR *)v16;
        v31 = (WCHAR *)v16;
LABEL_18:
        v17 = Src;
        v34 = (void *)Src;
        while ( 1 )
        {
          v18 = ((_BYTE *)v28 - v17) >> 1;
          v19 = v18 + v6;
          if ( (_DWORD)v18 && v29 > v19 )
          {
            v20 = 2LL * (unsigned int)v18;
            memmove_0(v15, v17, v20);
            v15 = (WCHAR *)((char *)v15 + v20);
            v31 = v15;
          }
          v21 = *v14;
          *v14 = 0;
          FirstFile = (void *)InternalFindFirstFileExW(Src);
          *v14 = v21;
          if ( FirstFile == (void *)-1LL )
            break;
          FindClose(FirstFile);
          LODWORD(v23) = wcslen(Str);
          if ( (_DWORD)v23 )
            v28 = Str;
          else
            v23 = ((char *)v14 - (_BYTE *)v28) >> 1;
          v6 = v23 + v19;
          if ( v29 > v6 && a2 )
          {
            v24 = 2LL * (unsigned int)v23;
            memmove_0(v15, v28, v24);
            v15 = (WCHAR *)((char *)v15 + v24);
            v31 = v15;
          }
          v17 = v14;
          v34 = v14;
          if ( !*v14 || !(unsigned int)FindLFNorSFN_U(v14, &v28, (__int16 **)&v30) )
            goto LABEL_33;
          v14 = (__int16 *)v30;
        }
        v6 = 0;
LABEL_33:
        if ( v6 )
        {
          v25 = wcslen((const wchar_t *)v17);
          v6 += v25;
          if ( v29 > v6 && a2 )
          {
            memmove_0(v15, v17, 2LL * (unsigned int)(v25 + 1));
            if ( v7 )
              memmove_0(a2, v7, 2LL * (v6 + 1));
          }
          else
          {
            ++v6;
          }
        }
        goto LABEL_44;
      }
      if ( a2 >= Name )
        goto LABEL_18;
    }
    if ( &a2[v3] < Name )
      goto LABEL_18;
    goto LABEL_15;
  }
LABEL_46:
  if ( v8 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
  if ( v7 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
  SetErrorMode(v10);
  return v6;
}
