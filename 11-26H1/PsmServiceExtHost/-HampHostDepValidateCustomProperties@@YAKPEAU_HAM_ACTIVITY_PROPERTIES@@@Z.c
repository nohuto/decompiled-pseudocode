/*
 * XREFs of ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007ED84
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007A0B4 (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180011FEC (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampHostDepValidateCustomProperties(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  unsigned int v2; // edi
  _BYTE Buf1[32]; // [rsp+20h] [rbp-19h] BYREF
  int v5; // [rsp+40h] [rbp+7h]
  __int64 v6; // [rsp+48h] [rbp+Fh]
  __int64 v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  __int64 v9; // [rsp+60h] [rbp+27h]
  __int128 v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+78h] [rbp+3Fh]

  v2 = 0;
  if ( !(unsigned int)HampUtilCheckAndSanitizeActivityProperties(a1)
    || (*(_DWORD *)a1 & 0xFF7FD9BF) != 0
    || *((_DWORD *)a1 + 1)
    || *((_DWORD *)a1 + 2)
    || *((_WORD *)a1 + 70)
    || *((_DWORD *)a1 + 67) != 5
    || *((_DWORD *)a1 + 68) )
  {
    return 0LL;
  }
  memset_0(Buf1, 0, 0x68uLL);
  v6 = 128LL;
  v5 = 0;
  v11 = 33LL;
  v10 = 0xFFFFFFFFFFFFFFFFuLL;
  v9 = -1LL;
  v8 = -1LL;
  v7 = -1LL;
  LOBYTE(v2) = memcmp_0(Buf1, (char *)a1 + 280, 0x68uLL) == 0;
  return v2;
}
