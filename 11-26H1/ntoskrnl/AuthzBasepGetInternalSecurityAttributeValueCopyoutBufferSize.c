/*
 * XREFs of AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x14048B68C
 * Callers:
 *     SepGetTokenAccessInformationBufferSize @ 0x140A4EF60 (SepGetTokenAccessInformationBufferSize.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140A4F210 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v8; // r8d
  __int64 **v9; // r10
  __int64 *v10; // rdx
  unsigned int v11; // r9d
  __int64 ***v12; // r10
  __int64 **v13; // rdx
  unsigned int v14; // ecx
  __int64 ***v15; // r10
  __int64 **v16; // rdx
  unsigned int v17; // r9d

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 >= *a2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
    if ( v5 <= 0xFFFFFFFF && v4 + (unsigned int)v5 >= v4 )
    {
      v6 = 0;
      v8 = v4 + v5;
      if ( *(_WORD *)(a1 + 48) != 1 && *(_WORD *)(a1 + 48) != 2 )
      {
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 3:
            v12 = (__int64 ***)(a1 + 72);
            v13 = *v12;
            while ( v13 != (__int64 **)v12 )
            {
              v14 = v8 + *((unsigned __int16 *)v13 + 20);
              if ( v14 < v8 )
                return (unsigned int)-1073741675;
              v13 = (__int64 **)*v13;
              v8 = v14;
              v6 = 0;
            }
            goto LABEL_18;
          case 4:
            v15 = (__int64 ***)(a1 + 72);
            v16 = *v15;
            while ( v16 != (__int64 **)v15 )
            {
              v17 = v8 + *((unsigned __int16 *)v16 + 24);
              if ( v17 < v8 )
                return (unsigned int)-1073741675;
              v16 = (__int64 **)*v16;
              v6 = 0;
              v8 = v17;
            }
            goto LABEL_18;
          case 5:
            goto LABEL_13;
        }
        if ( *(_WORD *)(a1 + 48) != 6 )
        {
          if ( *(_WORD *)(a1 + 48) != 16 )
            return (unsigned int)-1073741811;
LABEL_13:
          v9 = (__int64 **)(a1 + 72);
          v10 = *v9;
          while ( v10 != (__int64 *)v9 )
          {
            v11 = v8 + *((_DWORD *)v10 + 12);
            if ( v11 < v8 )
              return (unsigned int)-1073741675;
            v10 = (__int64 *)*v10;
            v6 = 0;
            v8 = v11;
          }
        }
      }
LABEL_18:
      *a2 = v8;
      return v6;
    }
  }
  return (unsigned int)-1073741675;
}
