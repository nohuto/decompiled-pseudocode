/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088
 * Callers:
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1409522D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14095E124 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB592C (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PiDqPnPGetObjectPropertyInBestLocale(__int64 a1, int a2, char *a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rsi
  _WORD *v6; // r12
  __int64 v7; // r14
  __int128 v8; // xmm0
  void *v9; // r15
  unsigned int v10; // r13d
  __int64 v11; // rdx
  _WORD *v12; // rax
  signed int GenericStoreProperty; // ebx
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  _WORD *Pool2; // rax
  _WORD *v17; // rcx
  unsigned __int64 v18; // rdi
  _WORD *v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rdi
  int v23; // eax
  void *v24; // rcx
  void *v25; // rcx
  __int64 v26; // rax
  signed int ObjectPropertyWorker; // eax
  int v28; // eax
  void *v30; // rcx
  void *v31; // rcx
  _DWORD v32[4]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v33; // [rsp+78h] [rbp-51h]
  __int64 v34; // [rsp+80h] [rbp-49h]
  char *v35; // [rsp+88h] [rbp-41h]
  _WORD *v36; // [rsp+90h] [rbp-39h]
  __int64 v37; // [rsp+98h] [rbp-31h]
  _DWORD *v38; // [rsp+A0h] [rbp-29h]
  const wchar_t *v39; // [rsp+A8h] [rbp-21h]
  unsigned int v40; // [rsp+B0h] [rbp-19h]
  int v41; // [rsp+B4h] [rbp-15h]
  _DWORD *v42; // [rsp+B8h] [rbp-11h]
  __int64 v43; // [rsp+C0h] [rbp-9h]
  _WORD *v48; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  _OWORD *v50; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v48 = va_arg(va1, _WORD *);
  v50 = va_arg(va1, _OWORD *);
  v5 = (__int64)v50;
  v6 = v48;
  v7 = a4;
  *v50 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  while ( 2 )
  {
    if ( !*v6 )
      return (unsigned int)PiDqPnPGetObjectProperty(a1, a2, (_DWORD)a3, v7, a5, 0LL, v5);
    v8 = *(_OWORD *)v7;
    v9 = 0LL;
    LODWORD(v48) = 512;
    v10 = 0;
    v32[0] = 0;
    *(_OWORD *)v5 = v8;
    v11 = 0x7FFFFFFFLL;
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 16);
    *(_DWORD *)(v5 + 20) = a5;
    v12 = v6;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v11;
    }
    while ( v11 );
    GenericStoreProperty = v11 == 0 ? 0xC000000D : 0;
    v14 = (0x7FFFFFFF - v11) & -(__int64)(v11 != 0);
    if ( v11 )
    {
      if ( !v14 )
        goto LABEL_21;
      v15 = 2 * (v14 + 1);
      if ( is_mul_ok(v14 + 1, 2uLL) )
      {
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
        *(_QWORD *)(v5 + 24) = Pool2;
        v17 = Pool2;
        if ( Pool2 )
        {
          v18 = v15 >> 1;
          if ( v18 && v18 <= 0x7FFFFFFF )
          {
            v19 = v6;
            v20 = 2147483646 - v18;
            do
            {
              if ( !(v20 + v18) )
                break;
              if ( !*v19 )
                break;
              *v17++ = *v19++;
              --v18;
            }
            while ( v18 );
            Pool2 = v17 - 1;
            if ( v18 )
              Pool2 = v17;
            GenericStoreProperty = v18 == 0 ? 0x80000005 : 0;
          }
          else
          {
            GenericStoreProperty = -1073741811;
            if ( !v18 )
            {
LABEL_20:
              if ( GenericStoreProperty >= 0 )
                goto LABEL_21;
              goto LABEL_59;
            }
          }
          *Pool2 = 0;
          goto LABEL_20;
        }
        GenericStoreProperty = -1073741670;
      }
      else
      {
        GenericStoreProperty = -1073741675;
      }
    }
LABEL_59:
    v30 = *(void **)(v5 + 24);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0x58706E50u);
      *(_QWORD *)(v5 + 24) = 0LL;
    }
LABEL_21:
    if ( GenericStoreProperty < 0 )
      goto LABEL_37;
    do
    {
      if ( (unsigned int)v48 > v10 )
      {
        v10 = (unsigned int)v48;
        if ( v9 )
          ExFreePoolWithTag(v9, 0x58706E50u);
        v9 = (void *)ExAllocatePool2(0x100uLL);
        if ( !v9 )
        {
          GenericStoreProperty = -1073741670;
          goto LABEL_62;
        }
      }
      LODWORD(v48) = 0;
      if ( a2 )
      {
        v21 = *(_QWORD *)&PiPnpRtlCtx;
        v35 = a3;
        v37 = a4;
        v22 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
        v38 = v32;
        va_copy((va_list)v42, va);
        v33 = 0LL;
        v34 = 0LL;
        v41 = 0;
        v43 = 0LL;
        v36 = v6;
        v39 = (const wchar_t *)v9;
        v40 = v10;
        if ( v22 )
        {
          v23 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, a1);
          if ( v23 == -1073741822 )
          {
            v22 = 0LL;
          }
          else
          {
            if ( v23 == -1073741536 )
            {
LABEL_30:
              GenericStoreProperty = v33;
LABEL_31:
              v7 = a4;
              continue;
            }
            if ( v23 )
            {
              GenericStoreProperty = -1073741595;
              goto LABEL_31;
            }
          }
        }
        ObjectPropertyWorker = PnpGetObjectPropertyWorker(v21, a1, a2, v35, (__int64)v36, v37, v38, v39, v40, v42, v43);
        GenericStoreProperty = ObjectPropertyWorker;
        if ( !v22 )
          goto LABEL_31;
        LODWORD(v33) = ObjectPropertyWorker;
        v28 = guard_dispatch_icall_no_overrides(v21, a1);
        if ( v28 == -1073741822 )
          goto LABEL_31;
        if ( v28 != -1073741536 )
        {
          if ( v28 )
            GenericStoreProperty = -1073741595;
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      GenericStoreProperty = PnpGetGenericStoreProperty(
                               PiPnpRtlCtx,
                               (_DWORD)a3,
                               (_DWORD)v6,
                               v7,
                               (__int64)v32,
                               (__int64)v9,
                               v10,
                               (__int64)va);
    }
    while ( GenericStoreProperty == -1073741789 );
    if ( GenericStoreProperty >= 0 )
    {
      *(_DWORD *)(v5 + 32) = v32[0];
      *(_DWORD *)(v5 + 36) = (_DWORD)v48;
      *(_QWORD *)(v5 + 40) = v9;
      goto LABEL_39;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0x58706E50u);
LABEL_37:
    if ( GenericStoreProperty == -1073741275 )
    {
      GenericStoreProperty = 0;
LABEL_39:
      if ( *(_DWORD *)(v5 + 32) )
        return (unsigned int)GenericStoreProperty;
      v24 = *(void **)(v5 + 24);
      if ( v24 )
        ExFreePoolWithTag(v24, 0x58706E50u);
      v25 = *(void **)(v5 + 40);
      if ( v25 )
        ExFreePoolWithTag(v25, 0x58706E50u);
      v26 = -1LL;
      do
        ++v26;
      while ( v6[v26] );
      v6 += v26 + 1;
      continue;
    }
    break;
  }
LABEL_62:
  v31 = *(void **)(v5 + 24);
  if ( v31 )
    ExFreePoolWithTag(v31, 0x58706E50u);
  return (unsigned int)GenericStoreProperty;
}
