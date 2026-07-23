/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140ADFA38 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     _RegRtlEnumValue @ 0x140975A14 (_RegRtlEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140ADFF30 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3)
{
  const wchar_t *v3; // rsi
  void *v4; // r13
  int inited; // ebx
  unsigned int v6; // r12d
  const wchar_t *v7; // rdi
  wchar_t *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  void *Pool2; // rdi
  ULONG i; // r15d
  int v14; // eax
  const wchar_t *v15; // r14
  size_t v16; // r13
  __int64 v17; // rax
  wchar_t v18; // ax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v23; // eax
  ULONG v24; // r14d
  __int64 v25; // rcx
  ULONG j; // esi
  __int64 v27; // rcx
  int v28; // eax
  ULONG v29; // [rsp+40h] [rbp-28h] BYREF
  int v30; // [rsp+44h] [rbp-24h] BYREF
  UNICODE_STRING v31[2]; // [rsp+48h] [rbp-20h] BYREF
  int Data; // [rsp+B0h] [rbp+48h] BYREF
  int v33; // [rsp+B4h] [rbp+4Ch]
  void *v34; // [rsp+B8h] [rbp+50h]
  const wchar_t *v35; // [rsp+C0h] [rbp+58h]
  size_t MaxCount; // [rsp+C8h] [rbp+60h] BYREF

  v35 = a3;
  v34 = a2;
  v33 = HIDWORD(a1);
  v3 = a3;
  v29 = 0;
  v4 = a2;
  LODWORD(MaxCount) = 0;
  v30 = 0;
  Data = 0;
  inited = PnpCtxRegQueryInfoKey(a1, a2, 0LL, 0LL, &v29, &MaxCount, 0LL);
  if ( inited >= 0 )
  {
    v6 = MaxCount + 1;
    if ( v3 )
    {
      v7 = v3;
      if ( *v3 )
      {
        do
        {
          v8 = wcschr(v7, 0x5Cu);
          if ( v8 )
          {
            v9 = v8 - v7;
          }
          else
          {
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
          }
          v10 = v9 + 1;
          if ( v10 > v6 )
            v6 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( v7[v11] );
          v7 += v11 + 1;
        }
        while ( *v7 );
        v4 = v34;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v29 )
          {
            if ( inited >= 0 )
              goto LABEL_43;
            goto LABEL_44;
          }
          LODWORD(MaxCount) = v6;
          v14 = RegRtlEnumValue(v4, i, Pool2, &MaxCount, &v30, 0LL, 0LL);
          inited = v14;
          if ( v14 < 0 )
            break;
          if ( v30 == 3 || !v30 )
          {
            v15 = v3;
            if ( *v3 )
            {
              v16 = (unsigned int)MaxCount;
              do
              {
                if ( !wcsncmp(v15, (const wchar_t *)Pool2, v16) )
                {
                  v18 = v15[v16];
                  if ( v18 == 92 || !v18 )
                    break;
                }
                v17 = -1LL;
                do
                  ++v17;
                while ( v15[v17] );
                v15 += v17 + 1;
              }
              while ( *v15 );
              v3 = v35;
              v4 = v34;
            }
            if ( !*v15 )
            {
              v23 = PnpCtxRegDeleteValue(0LL, v4, (const WCHAR *)Pool2);
              inited = v23;
              if ( v23 == -1073741772 )
              {
                inited = 0;
              }
              else if ( v23 < 0 )
              {
                goto LABEL_44;
              }
            }
          }
        }
        if ( v14 == -2147483622 )
        {
          inited = 0;
          while ( 1 )
          {
LABEL_43:
            if ( !*v3 )
              goto LABEL_44;
            inited = DrvDbSplitDeviceIdDriverInfMatch(v3, (NTSTRSAFE_PWSTR)Pool2, v6);
            if ( inited < 0 )
              goto LABEL_44;
            if ( (_BYTE)Data )
            {
              v31[0] = 0LL;
              inited = RtlInitUnicodeStringEx(v31, (PCWSTR)Pool2);
              if ( inited < 0 )
                goto LABEL_39;
              v20 = ZwSetValueKey(v4, v31, 0, 3u, &Data, 4u);
            }
            else
            {
              v20 = PnpCtxRegSetValue(v19, v4, (__int64)Pool2, 0LL, 0LL, 0);
            }
            inited = v20;
LABEL_39:
            if ( inited < 0 )
              goto LABEL_44;
            v21 = -1LL;
            do
              ++v21;
            while ( v3[v21] );
            v3 += v21 + 1;
          }
        }
        goto LABEL_44;
      }
    }
    else
    {
      v24 = v29;
      if ( !v29 )
        return 0;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( j = 0; j < v24; ++j )
        {
          LODWORD(MaxCount) = v6;
          inited = PnpCtxRegEnumValue(v25, v4, j, Pool2, (__int64)&MaxCount, 0LL, 0LL, 0LL);
          if ( inited < 0 )
          {
            if ( inited == -2147483622 )
              inited = 0;
            break;
          }
          v28 = PnpCtxRegDeleteValue(v27, v4, (const WCHAR *)Pool2);
          inited = v28;
          if ( v28 == -1073741772 )
          {
            inited = 0;
          }
          else if ( v28 < 0 )
          {
            break;
          }
        }
LABEL_44:
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)inited;
      }
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inited;
}
