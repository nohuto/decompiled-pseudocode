/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x1406897DC
 * Callers:
 *     UcpLogEventGenerateDump @ 0x14068964C (UcpLogEventGenerateDump.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14069DF40 (ZwQueryWnfStateData.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // r8
  _DWORD *v10; // rcx
  size_t Size; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF

  Size = 0LL;
  v12 = WNF_UCP_CLIENT_CONFIG_BUFFER;
  ZwQueryWnfStateData(&v12, 0LL, 0LL, (char *)&Size + 4, 0LL, &Size);
  if ( (_DWORD)Size )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, (unsigned int)Size);
      if ( (int)ZwQueryWnfStateData(&v12, 0LL, 0LL, (char *)&Size + 4, v7, &Size) >= 0 && *v7 == 1 )
      {
        v8 = v7[1];
        v9 = 0LL;
        if ( v8 )
        {
          v10 = v7 + 5;
          do
          {
            if ( *(v10 - 3) != *a1 )
              goto LABEL_14;
            *a2 = *((_BYTE *)v10 + 5);
            switch ( *v10 )
            {
              case 1:
                if ( *(v10 - 1) != a1[2] )
                  goto LABEL_14;
                break;
              case 2:
                break;
              case 4:
                goto LABEL_16;
              default:
                *a3 = 0;
                goto LABEL_14;
            }
            if ( *(v10 - 2) == a1[1] )
            {
LABEL_16:
              *a3 = v7[5 * v9 + 6];
              break;
            }
LABEL_14:
            v9 = (unsigned int)(v9 + 1);
            v10 += 5;
          }
          while ( (unsigned int)v9 < v8 );
        }
      }
      ExFreePoolWithTag(v7, 0x72656355u);
    }
  }
}
