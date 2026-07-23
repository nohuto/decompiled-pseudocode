/*
 * XREFs of AdtpBuildRegistryValueString @ 0x1408962BC
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     AdtpBuildHexInt64String @ 0x140896150 (AdtpBuildHexInt64String.c)
 *     AdtpBuildReplacementString @ 0x1408969A4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUlongString @ 0x140B1256C (AdtpBuildUlongString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildRegistryValueString(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        UNICODE_STRING *a4,
        char *a5)
{
  size_t v5; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // edi
  int v9; // r9d
  const WCHAR *v10; // r12
  char v11; // bp
  unsigned __int32 v12; // ecx
  int v13; // eax
  bool v14; // sf
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int *v18; // rdx
  __int64 v19; // r8
  __int16 v20; // cx
  int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // edx
  __int64 v24; // rax
  WCHAR v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  WCHAR *Pool2; // rax
  const WCHAR *v30; // r12
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 MaximumLength; // ax
  int v35; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v7 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  *a5 = 0;
  v11 = 1;
  switch ( a1 )
  {
    case 4:
      if ( a2 >= 4 )
      {
        v12 = *a3;
LABEL_4:
        v13 = AdtpBuildUlongString(v12, 0LL, (__int64)a5);
LABEL_11:
        v8 = v13;
        v14 = v13 < 0;
        goto LABEL_38;
      }
      goto LABEL_36;
    case 5:
      if ( a2 >= 4 )
      {
        v12 = _byteswap_ulong(*a3);
        goto LABEL_4;
      }
      goto LABEL_36;
    case 11:
      if ( a2 >= 8 )
      {
        v13 = AdtpBuildHexInt64String(a3, (__int64)a4, (__int64)a3, 0LL, v35, a5);
        goto LABEL_11;
      }
      goto LABEL_36;
  }
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( a2 >= 2 && (v28 = (unsigned __int64)a2 >> 1, *((_WORD *)a3 + v28 - 1)) )
    {
      Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
      v30 = Pool2;
      if ( !Pool2 )
        goto LABEL_43;
      memmove(Pool2, v7, v5);
      v30[v28] = 0;
    }
    else
    {
      v30 = (const WCHAR *)a3;
      v11 = 0;
      if ( a2 < 2 )
        v30 = 0LL;
    }
    RtlInitUnicodeString(a4, v30);
    *a5 = v11;
    Length = a4->Length;
    if ( a4->Length >= (unsigned __int16)v5 )
      Length = v5;
    a4->Length = Length;
    MaximumLength = a4->MaximumLength;
    if ( MaximumLength >= (unsigned __int16)v5 )
      MaximumLength = v5;
    a4->MaximumLength = MaximumLength;
  }
  else
  {
    if ( a1 != 7 )
    {
LABEL_36:
      v27 = ExAllocatePool2(0x100uLL);
      a4->Buffer = (wchar_t *)v27;
      if ( v27 )
      {
        *a5 = 1;
        *(_DWORD *)&a4->Length = 1703936;
        v8 = AdtpBuildReplacementString(1800LL, a4);
        v14 = (v8 & 0x80000000) != 0;
LABEL_38:
        if ( !v14 )
          return v8;
        goto LABEL_44;
      }
LABEL_43:
      v8 = -1073741801;
LABEL_44:
      if ( *a5 )
      {
        Buffer = a4->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
      }
      *a5 = 0;
      return v8;
    }
    v15 = a2 >> 1;
    v16 = 0;
    if ( a2 >> 1 )
    {
      do
      {
        v17 = v15 - 1;
        if ( *((_WORD *)a3 + v17) )
          break;
        if ( v16 >= 2 )
          break;
        ++v16;
        --v15;
      }
      while ( (_DWORD)v17 );
    }
    if ( v15 )
    {
      v18 = a3;
      v19 = v15;
      do
      {
        v20 = *(_WORD *)v18;
        v21 = v9 + 1;
        v18 = (unsigned int *)((char *)v18 + 2);
        if ( v20 != 42 )
          v21 = v9;
        v9 = v21;
        --v19;
      }
      while ( v19 );
      v22 = v21 + v15;
      v10 = (const WCHAR *)ExAllocatePool2(0x100uLL);
      if ( !v10 )
        goto LABEL_43;
      v23 = 0;
      v24 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v24 >= v22 )
        {
LABEL_33:
          v10[v24] = 0;
          goto LABEL_34;
        }
        v25 = *(_WORD *)v7;
        v26 = (unsigned int)(v24 + 1);
        if ( !*(_WORD *)v7 )
          break;
        if ( v25 != 42 )
        {
          v10[v24] = v25;
          goto LABEL_31;
        }
        v10[v24] = 42;
        v24 = (unsigned int)(v24 + 2);
        v10[v26] = 42;
LABEL_32:
        ++v23;
        v7 = (unsigned int *)((char *)v7 + 2);
        if ( v23 >= v15 )
          goto LABEL_33;
      }
      v10[v24] = 42;
LABEL_31:
      v24 = (unsigned int)v26;
      goto LABEL_32;
    }
LABEL_34:
    RtlInitUnicodeString(a4, v10);
    if ( v10 )
      *a5 = 1;
  }
  return v8;
}
