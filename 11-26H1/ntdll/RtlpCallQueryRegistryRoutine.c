/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1800447EC
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlpQueryRegistryDirect @ 0x180044EB0 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x180044FD8 (RtlpValidateKeyTrust.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009B9D0 (RtlExpandEnvironmentStrings_U.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v8; // ebx
  __int64 v9; // r8
  wchar_t *v11; // rdx
  __int64 v12; // r10
  unsigned int v13; // r15d
  int v14; // ecx
  int v15; // eax
  char *v16; // r12
  wchar_t *Buffer; // rsi
  unsigned int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  NTSTATUS result; // eax
  int v22; // eax
  bool v23; // cf
  _WORD *v24; // rcx
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // ecx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // eax
  wchar_t *v32; // rcx
  int v33; // ecx
  __int64 v34; // r13
  wchar_t *v35; // rdi
  wchar_t *v36; // r13
  __int64 v38; // rdx
  unsigned int v39; // r15d
  int RegistryDirect; // eax
  bool v41; // cc
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+50h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+B8h] [rbp+50h] BYREF
  wchar_t *v47; // [rsp+C0h] [rbp+58h]
  _DWORD *v48; // [rsp+C8h] [rbp+60h]

  v48 = a4;
  v8 = 0;
  v9 = (unsigned int)*a4;
  *a4 = 0;
  v11 = a3;
  v12 = a1;
  v47 = a3;
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( *((_DWORD *)a3 + 1) )
  {
    v14 = *((_DWORD *)a3 + 2);
    if ( v14 != -1 )
    {
      v15 = *((_DWORD *)a3 + 3);
      if ( v15 || *((_DWORD *)a3 + 1) != v13 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_6:
          v13 = *((_DWORD *)a3 + 1);
          Buffer = (wchar_t *)((char *)a3 + *((unsigned int *)a3 + 2));
          v18 = *((_DWORD *)a3 + 3);
          goto LABEL_7;
        }
        if ( v15 )
          v26 = v14 + v15;
        else
          v26 = *((_DWORD *)a3 + 4) + 20;
        v27 = *((_DWORD *)a3 + 4);
        v28 = v27 + 2;
        v16 = (char *)(((unsigned __int64)a3 + v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v29 = (int)(v27 + 2);
        if ( v29 >= 2 )
        {
          ReturnedLength = v9 + (_DWORD)a3;
          if ( (int)v9 + (int)a3 - (int)v16 < v28 )
          {
            result = -1073741789;
            *a4 = v28 + (_DWORD)v16 - (_DWORD)a3;
            return result;
          }
          memmove(v16, a3 + 10, v27);
          v30 = *((unsigned int *)a3 + 4);
          v12 = a1;
          v11 = (wchar_t *)((unsigned __int64)&v16[v29 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
          v47 = v11;
          v9 = ReturnedLength - (unsigned int)v11;
          *(_WORD *)&v16[v30] = 0;
          goto LABEL_6;
        }
        return -1073741764;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  v18 = *(_DWORD *)(a2 + 48);
  v16 = *(char **)(a2 + 16);
  Buffer = *(wchar_t **)(a2 + 40);
  if ( !v18 )
  {
    v24 = *(_WORD **)(a2 + 40);
    if ( v13 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      while ( *v24++ )
        ;
      v18 = (_DWORD)v24 - (_DWORD)Buffer;
    }
    else if ( v13 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      if ( *Buffer )
      {
        do
        {
          while ( *v24++ )
            ;
        }
        while ( *v24 );
      }
      v18 = (_DWORD)v24 - (_DWORD)Buffer + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v13 - 1 > 1 && v13 != 7 )
      goto LABEL_10;
    v23 = (v19 & 4) != 0;
    return v23 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v13 )
    return -1073741788;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v33 = 0;
      v34 = v18 - 4LL;
      v35 = Buffer;
      v36 = (wchar_t *)((char *)Buffer + v34);
      if ( Buffer < v36 )
      {
        do
        {
          while ( *v35++ )
            ;
          v38 = *(unsigned int *)(a2 + 8);
          v39 = (_DWORD)v35 - (_DWORD)Buffer;
          if ( (v38 & 0x20) != 0 )
          {
            if ( a7 )
            {
              v33 = RtlpValidateKeyTrust(v12, v38, v9);
              if ( v33 < 0 )
                return v33;
            }
            RegistryDirect = RtlpQueryRegistryDirect(1LL, Buffer, v39, *(_QWORD *)(a2 + 24));
            *(_QWORD *)(a2 + 24) += 16LL;
          }
          else
          {
            RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, wchar_t *, _QWORD, __int64, _QWORD))a2)(
                               v16,
                               1LL,
                               Buffer,
                               v39,
                               a5,
                               *(_QWORD *)(a2 + 24));
          }
          v33 = 0;
          if ( RegistryDirect != -1073741789 )
            v33 = RegistryDirect;
          if ( v33 < 0 )
            break;
          v12 = a1;
          Buffer = v35;
        }
        while ( v35 < v36 );
      }
      return v33;
    }
    if ( v13 == 2 )
    {
      v31 = v18 - 2;
      if ( v18 - 2 <= 0xFFFA && (v18 & 1) == 0 )
      {
        ReturnedLength = 0;
        v32 = Buffer;
        Source = 0LL;
        Destination = 0LL;
        while ( v31 )
        {
          if ( *v32 == 37 )
          {
            Source.Buffer = Buffer;
            Source.MaximumLength = v18;
            Source.Length = v18 - 2;
            Destination.Buffer = v11;
            Destination.Length = 0;
            if ( (int)v9 <= 0 )
            {
              Destination.MaximumLength = 0;
            }
            else if ( (unsigned int)v9 > 0xFFFE )
            {
              Destination.MaximumLength = -2;
              v11[32766] = 0;
            }
            else
            {
              Destination.MaximumLength = v9;
              v11[((unsigned __int64)(int)v9 >> 1) - 1] = 0;
            }
            result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
            v13 = 1;
            if ( result >= 0 )
            {
              Buffer = Destination.Buffer;
              v18 = Destination.Length + 2;
              break;
            }
            if ( result == -1073741789 )
            {
              v41 = ReturnedLength <= 0xFFFC;
              *v48 = ReturnedLength + (_DWORD)v47 - (_DWORD)a3;
              if ( v41 && Destination.MaximumLength != 0xFFFE )
                return result;
            }
            else if ( result != -2147483643 )
            {
              return result;
            }
            break;
          }
          ++v32;
          v31 -= 2;
        }
      }
    }
  }
  v20 = *(unsigned int *)(a2 + 8);
  if ( (v20 & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1, v20, v9);
      if ( result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v13, Buffer, v18, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, wchar_t *, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            Buffer,
            v18,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v8;
}
