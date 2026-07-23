/*
 * XREFs of AccelWaitForWorkCompletion @ 0x1402A148C
 * Callers:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelWaitForWorkCompletion(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  bool v5; // dl
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD v13[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h]
  __int64 *v15; // [rsp+38h] [rbp-19h]
  int v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h]
  __int64 v18; // [rsp+50h] [rbp-1h]
  __int64 v19; // [rsp+58h] [rbp+7h]
  __int64 v20; // [rsp+60h] [rbp+Fh]
  char v21; // [rsp+C0h] [rbp+6Fh]

  v3 = a3;
  v13[1] = 0;
  memset_0(v13, 0, 0x7CuLL);
  v5 = 0;
  if ( !a1 || (v3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (v3 & 1) == 0 )
  {
    v14 = *a1;
    v16 = *((_DWORD *)a1 + 6);
    v17 = a1[6];
    v18 = a1[7];
    v13[0] = 2;
    v15 = a1;
    v19 = v3;
    v20 = 0LL;
    return AccelpInternalOperationHandler(v13);
  }
  v7 = *(_QWORD *)(*a1 + 16);
  v8 = a1[7];
  v9 = *(_DWORD *)(v7 + 184);
  switch ( v9 )
  {
    case 1:
      v10 = *(_DWORD *)(v7 + 188) - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v5 = *(_BYTE *)(v8 + 6) != 1;
          return !v5 ? 0xC0000001 : 0;
        }
      }
      goto LABEL_19;
    case 2:
      v12 = *(_DWORD *)(v8 + 8);
      if ( *(_QWORD *)v8 )
      {
        if ( (v12 & 1) == 0 )
        {
          v21 = 1;
          goto LABEL_20;
        }
      }
      else if ( (v12 & 1) == 0 )
      {
        v21 = 0;
LABEL_20:
        v5 = v21;
        return !v5 ? 0xC0000001 : 0;
      }
      v21 = 2;
      goto LABEL_20;
    case 3:
LABEL_19:
      v21 = *(_BYTE *)v8 & 0x3F;
      goto LABEL_20;
  }
  return !v5 ? 0xC0000001 : 0;
}
