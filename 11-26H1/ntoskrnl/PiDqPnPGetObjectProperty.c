/*
 * XREFs of PiDqPnPGetObjectProperty @ 0x14095D7B0
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPropertyCallback @ 0x14095D540 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14095E124 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140AB4850 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB592C (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectProperty(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, _WORD *a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // r13d
  void *v10; // r15
  unsigned int v11; // r12d
  int GenericStoreProperty; // r14d
  __int64 v13; // rcx
  _WORD *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _WORD *Pool2; // rax
  _WORD *v18; // r8
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  _WORD *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdi
  int *v24; // rsi
  int v25; // eax
  HANDLE v27; // r15
  unsigned int *v28; // rcx
  unsigned int v29; // r14d
  const wchar_t *v30; // r12
  __int64 v31; // r13
  ULONG *v32; // r15
  int v33; // eax
  void *v34; // rcx
  void *v35; // rcx
  unsigned int v36; // [rsp+50h] [rbp-B0h]
  unsigned int v37; // [rsp+54h] [rbp-ACh] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  unsigned int *v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  int *v50; // [rsp+B8h] [rbp-48h]
  const wchar_t *v51; // [rsp+C0h] [rbp-40h]
  unsigned int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  unsigned int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  _QWORD v56[5]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v57; // [rsp+108h] [rbp+8h]
  unsigned int *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  unsigned int v64; // [rsp+190h] [rbp+90h]

  v7 = a7;
  v8 = (__int64)a6;
  v39 = 0LL;
  v9 = a2;
  v36 = 0;
  v10 = 0LL;
  v37 = 512;
  v11 = 0;
  v38 = 0;
  GenericStoreProperty = 0;
  *(_OWORD *)a7 = *(_OWORD *)a4;
  *(_DWORD *)(a7 + 16) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a7 + 20) = a5;
  *(_QWORD *)(a7 + 32) = 0LL;
  *(_QWORD *)(a7 + 40) = 0LL;
  *(_QWORD *)(a7 + 24) = 0LL;
  if ( a6 )
  {
    v13 = 0x7FFFFFFFLL;
    v14 = a6;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    GenericStoreProperty = -1073741811;
    if ( v13 )
      GenericStoreProperty = 0;
    v15 = 0x7FFFFFFF - v13;
    if ( v13 )
    {
      if ( !v15 )
        goto LABEL_20;
      v44 = 0LL;
      v16 = 2 * (v15 + 1);
      if ( is_mul_ok(v15 + 1, 2uLL) )
      {
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
        *(_QWORD *)(a7 + 24) = Pool2;
        v18 = Pool2;
        if ( Pool2 )
        {
          v19 = v16 >> 1;
          if ( v19 && v19 <= 0x7FFFFFFF )
          {
            GenericStoreProperty = 0;
            v20 = 2147483646 - v19;
            v21 = a6;
            while ( v20 + v19 && *v21 )
            {
              *v18++ = *v21++;
              if ( !--v19 )
              {
                --v18;
                GenericStoreProperty = -2147483643;
                break;
              }
            }
            *v18 = 0;
          }
          else
          {
            GenericStoreProperty = -1073741811;
            if ( v19 )
              *Pool2 = 0;
          }
          if ( GenericStoreProperty >= 0 )
            goto LABEL_20;
        }
        else
        {
          GenericStoreProperty = -1073741670;
        }
      }
      else
      {
        GenericStoreProperty = -1073741675;
      }
    }
    v34 = *(void **)(a7 + 24);
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0x58706E50u);
      *(_QWORD *)(a7 + 24) = 0LL;
    }
  }
LABEL_20:
  if ( GenericStoreProperty < 0 )
    goto LABEL_38;
  do
  {
    if ( v37 > v11 )
    {
      v11 = v37;
      v36 = v37;
      if ( v10 )
        ExFreePoolWithTag(v10, 0x58706E50u);
      v39 = ExAllocatePool2(0x100uLL);
      v10 = (void *)v39;
      if ( !v39 )
      {
        v7 = a7;
        GenericStoreProperty = -1073741670;
        goto LABEL_69;
      }
    }
    v37 = 0;
    if ( v9 )
    {
      v22 = *(_QWORD *)&PiPnpRtlCtx;
      v47 = a3;
      v49 = a4;
      v23 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
      v48 = v8;
      v24 = &v38;
      v54 = &v37;
      v45 = 0LL;
      v46 = 0LL;
      v53 = 0;
      v55 = 0LL;
      v50 = &v38;
      v51 = (const wchar_t *)v10;
      v52 = v11;
      if ( v23 )
      {
        v25 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, a1);
        if ( v25 == -1073741822 )
        {
          v23 = 0LL;
        }
        else
        {
          if ( v25 == -1073741536 )
          {
            GenericStoreProperty = v45;
            goto LABEL_30;
          }
          if ( v25 )
          {
            GenericStoreProperty = -1073741595;
            goto LABEL_30;
          }
        }
        v24 = v50;
      }
      v27 = 0LL;
      v28 = v54;
      v29 = v52;
      v30 = v51;
      v31 = v47;
      v41 = v55;
      v42 = v49;
      v43 = v48;
      v44 = v54;
      v64 = v52;
      Handle = 0LL;
      if ( (_WORD)v55 )
      {
        GenericStoreProperty = -1073741811;
      }
      else
      {
        if ( v51 )
        {
          if ( !v52 )
            v30 = 0LL;
        }
        else
        {
          v29 = 0;
          v64 = 0;
        }
        *v24 = 0;
        *v28 = 0;
        memset_0(v56, 0, 0x40uLL);
        if ( (unsigned int)(a2 - 1) > 0xA )
        {
          GenericStoreProperty = -1073741811;
LABEL_50:
          if ( v27 )
            ZwClose(v27);
          goto LABEL_52;
        }
        if ( *(_QWORD *)(v22 + 8LL * a2 + 296) )
        {
          v32 = v44;
          v56[1] = v43;
          v56[2] = v42;
          v59 = v41;
          v56[0] = v31;
          v56[3] = v24;
          v56[4] = v30;
          v57 = v29;
          v58 = v44;
          GenericStoreProperty = guard_dispatch_icall_no_overrides(v22, a1);
          if ( GenericStoreProperty != -1073741802 )
          {
LABEL_49:
            v27 = Handle;
            goto LABEL_50;
          }
          if ( !v31 )
          {
            GenericStoreProperty = PnpOpenObjectRegKey(v22, a1, a2, 33554433, 0, (__int64)&Handle);
            if ( GenericStoreProperty < 0 )
              goto LABEL_49;
            LODWORD(v31) = (_DWORD)Handle;
          }
          GenericStoreProperty = PnpGetGenericStoreProperty(
                                   v22,
                                   v31,
                                   v43,
                                   v42,
                                   (__int64)v24,
                                   (__int64)v30,
                                   v64,
                                   (__int64)v32);
          if ( GenericStoreProperty >= 0 )
            GenericStoreProperty = PnpValidatePropertyData(v30, *v32);
          goto LABEL_49;
        }
        GenericStoreProperty = -1073741822;
      }
LABEL_52:
      v9 = a2;
      if ( v23 )
      {
        LODWORD(v45) = GenericStoreProperty;
        v33 = guard_dispatch_icall_no_overrides(v22, a1);
        if ( v33 != -1073741822 )
        {
          if ( v33 != -1073741536 )
          {
            v10 = (void *)v39;
            v11 = v36;
            if ( v33 )
              GenericStoreProperty = -1073741595;
            goto LABEL_30;
          }
          GenericStoreProperty = v45;
        }
      }
      v10 = (void *)v39;
      v11 = v36;
LABEL_30:
      v8 = (__int64)a6;
      continue;
    }
    GenericStoreProperty = PnpGetGenericStoreProperty(
                             PiPnpRtlCtx,
                             a3,
                             v8,
                             a4,
                             (__int64)&v38,
                             (__int64)v10,
                             v11,
                             (__int64)&v37);
  }
  while ( GenericStoreProperty == -1073741789 );
  if ( GenericStoreProperty >= 0 )
  {
    *(_DWORD *)(a7 + 32) = v38;
    *(_DWORD *)(a7 + 36) = v37;
    *(_QWORD *)(a7 + 40) = v10;
    return (unsigned int)GenericStoreProperty;
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  v7 = a7;
LABEL_38:
  if ( GenericStoreProperty == -1073741275 )
    return 0LL;
LABEL_69:
  v35 = *(void **)(v7 + 24);
  if ( v35 )
    ExFreePoolWithTag(v35, 0x58706E50u);
  return (unsigned int)GenericStoreProperty;
}
