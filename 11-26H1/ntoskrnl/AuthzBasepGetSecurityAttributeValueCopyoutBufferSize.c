/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403B1580
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rcx
  int v5; // r8d
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 *v14; // r11
  unsigned __int64 v15; // r9
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 *v23; // r9
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 *v27; // r8
  __int64 *v28; // r9
  unsigned __int64 v29; // r11

  v4 = *a2;
  v5 = *(unsigned __int16 *)(a1 + 48);
  if ( v5 != 6 )
  {
    if ( v5 == 3 )
    {
      v11 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v11 >= v4 )
      {
        v12 = 16LL * *(unsigned int *)(a1 + 60);
        v8 = 0;
        if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
        {
          v9 = v11 + v12;
          if ( v11 + v12 >= v11 )
          {
            v13 = *(__int64 **)(a1 + 72);
            v14 = (__int64 *)(a1 + 72);
            while ( v13 != v14 )
            {
              v15 = v9 + *((unsigned __int16 *)v13 + 20);
              if ( v15 < v9 )
                return (unsigned int)-1073741675;
              v13 = (__int64 *)*v13;
              v9 = v15;
            }
            goto LABEL_5;
          }
        }
      }
    }
    else
    {
      v16 = v5 - 1;
      if ( !v16 )
        goto LABEL_2;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_2;
      v18 = v17 - 2;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 && v19 != 11 )
          return (unsigned int)-1073741811;
        v20 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v20 >= v4 )
        {
          v21 = 16LL * *(unsigned int *)(a1 + 60);
          v8 = 0;
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v20 + v21;
            if ( v20 + v21 >= v20 )
            {
              v22 = *(__int64 **)(a1 + 72);
              v23 = (__int64 *)(a1 + 72);
              while ( v22 != v23 )
              {
                v24 = v9 + *((unsigned int *)v22 + 12);
                if ( v24 < v9 )
                  return (unsigned int)-1073741675;
                v22 = (__int64 *)*v22;
                v9 = v24;
              }
              goto LABEL_5;
            }
          }
        }
      }
      else
      {
        v25 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v25 >= v4 )
        {
          v26 = 24LL * *(unsigned int *)(a1 + 60);
          v8 = 0;
          if ( is_mul_ok(0x18uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v25 + v26;
            if ( v25 + v26 >= v25 )
            {
              v27 = *(__int64 **)(a1 + 72);
              v28 = (__int64 *)(a1 + 72);
              while ( v27 != v28 )
              {
                v29 = v9 + *((unsigned __int16 *)v27 + 24);
                if ( v29 < v9 )
                  return (unsigned int)-1073741675;
                v27 = (__int64 *)*v27;
                v9 = v29;
              }
              goto LABEL_5;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741675;
  }
LABEL_2:
  v6 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v6 < v4 )
    return (unsigned int)-1073741675;
  v7 = 8LL * *(unsigned int *)(a1 + 60);
  v8 = 0;
  if ( !is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    return (unsigned int)-1073741675;
  v9 = v6 + v7;
  if ( v6 + v7 < v6 )
    return (unsigned int)-1073741675;
LABEL_5:
  *a2 = v9;
  return v8;
}
