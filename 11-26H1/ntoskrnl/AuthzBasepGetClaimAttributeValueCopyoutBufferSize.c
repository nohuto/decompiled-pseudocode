/*
 * XREFs of AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A92E6C
 * Callers:
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A92DC4 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 */

NTSTATUS __fastcall AuthzBasepGetClaimAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  int v2; // r8d
  unsigned __int64 v4; // r9
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rcx
  __int64 ***v13; // r10
  __int64 **i; // rdx
  unsigned __int64 v15; // r8
  NTSTATUS result; // eax
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  ULONGLONG v20; // r11
  __int64 v21; // r10
  ULONGLONG v22; // r11
  __int64 ***v23; // r10
  __int64 **v24; // rdx
  __int64 v25; // r10
  ULONGLONG v26; // r11
  __int64 ***v27; // r10
  __int64 **j; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 48);
  v4 = *a2;
  pullResult = 0LL;
  v6 = v2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v9 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v9 >= v4 )
        {
          v11 = *(unsigned int *)(a1 + 60);
          v10 = 8 * v11;
          pullResult = 0LL;
          if ( is_mul_ok(8uLL, v11) )
          {
            v12 = v9 + v10;
            if ( v9 + v10 >= v9 )
            {
              v13 = (__int64 ***)(a1 + 72);
              for ( i = *v13; i != (__int64 **)v13; i = (__int64 **)*i )
              {
                v15 = v12 + *((unsigned __int16 *)i + 20);
                if ( v15 < v12 )
                  return -1073741675;
                v12 = v15 + 2;
                if ( v15 + 2 < v15 )
                  return -1073741675;
              }
              goto LABEL_20;
            }
          }
        }
        return -1073741675;
      }
      v17 = v8 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
            goto LABEL_17;
          if ( v19 != 10 )
            return -1073741811;
        }
        if ( ((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL) >= v4 )
        {
          result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
          if ( result < 0 )
            return result;
          v12 = v22 + pullResult;
          if ( v22 + pullResult >= v22 )
          {
            v23 = (__int64 ***)(v21 + 72);
            v24 = *v23;
            while ( v24 != (__int64 **)v23 )
            {
              v29 = v12 + *((unsigned int *)v24 + 12);
              if ( v29 < v12 )
                return -1073741675;
              v24 = (__int64 **)*v24;
              v12 = v29;
            }
            goto LABEL_20;
          }
        }
      }
      else if ( ((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL) >= v4 )
      {
        result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
        if ( result < 0 )
          return result;
        v12 = v26 + pullResult;
        if ( v26 + pullResult >= v26 )
        {
          v27 = (__int64 ***)(v25 + 72);
          for ( j = *v27; j != (__int64 **)v27; j = (__int64 **)*j )
          {
            v30 = v12 + *((unsigned __int16 *)j + 24);
            if ( v30 < v12 )
              return -1073741675;
            v12 = v30 + 2;
            if ( v30 + 2 < v30 )
              return -1073741675;
          }
          goto LABEL_20;
        }
      }
      return -1073741675;
    }
  }
LABEL_17:
  if ( ((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v4 )
    return -1073741675;
  result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
  if ( result >= 0 )
  {
    v12 = v20 + pullResult;
    if ( v20 + pullResult >= v20 )
    {
LABEL_20:
      result = 0;
      *a2 = v12;
      return result;
    }
    return -1073741675;
  }
  return result;
}
