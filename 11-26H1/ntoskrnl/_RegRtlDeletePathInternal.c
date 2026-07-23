/*
 * XREFs of _RegRtlDeletePathInternal @ 0x140A3F340
 * Callers:
 *     _PnpCtxRegDeletePath @ 0x140A46B38 (_PnpCtxRegDeletePath.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryInfoKey @ 0x140974E10 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A3F538 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A3F778 (_RegRtlDeleteKeyTransacted.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlDeletePathInternal(char *a1, const wchar_t *a2, char a3, __int64 a4, int a5)
{
  const wchar_t *v9; // rax
  __int64 v10; // r10
  unsigned int v11; // ebx
  size_t v12; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v14; // rdi
  unsigned int i; // eax
  wchar_t *v17; // rax
  unsigned int v18; // eax
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF

  Handle = 0LL;
  a5 = 0;
  v20 = 0;
  if ( a2 )
  {
    v9 = a2;
    v10 = 0x7FFFLL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    v11 = v10 == 0 ? 0xC000000D : 0;
    if ( v10 )
    {
      v12 = ((0x7FFF - v10) & -(__int64)(v10 != 0)) + 1;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v14 = Pool2;
      if ( Pool2 )
      {
        v11 = RtlStringCchCopyExW(Pool2, v12, a2, 0LL, 0LL, 0x100u);
        if ( !v11 )
        {
          if ( !a3 )
            goto LABEL_15;
          for ( i = RegRtlDeleteTreeInternal(a1, v14, a4, 0LL); ; i = RegRtlDeleteKeyTransacted(a1, v14, 0LL) )
          {
            v11 = i;
            if ( i )
            {
              if ( i != -1073741772 )
                break;
            }
            v17 = wcsrchr(v14, 0x5Cu);
            if ( !v17 )
              break;
            do
            {
              *v17 = 0;
              if ( v17 == v14 )
                break;
              --v17;
            }
            while ( *v17 == 92 );
LABEL_15:
            v18 = RegRtlOpenKeyTransacted(a1, v14, 0, 1u, &Handle, a4);
            v11 = v18;
            if ( v18 )
            {
              if ( v18 != -1073741772 )
              {
                if ( v18 == -1073741444 )
                  v11 = 0;
                break;
              }
            }
            else
            {
              v11 = RegRtlQueryInfoKey(Handle, &a5, 0LL, &v20, 0LL, 0LL);
              ZwClose(Handle);
              if ( v11 != -1073741444 && v11 )
                break;
              if ( v20 || a5 )
              {
                v11 = -1073741535;
                break;
              }
            }
          }
        }
        ExFreePoolWithTag(v14, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
