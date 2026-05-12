/*
 * XREFs of RaidSetTcgLockingObject @ 0x140096028
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObject @ 0x140086498 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x14008AD88 (RaidUnitStorageTcgSetLockingObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x140094074 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x140094918 (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x140131260 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x1401315C4 (TcglibSetBand.c)
 *     TcglibStartTransaction @ 0x140131F98 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x140132028 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidSetTcgLockingObject(
        __int64 a1,
        unsigned int a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        unsigned int a9,
        const void *a10,
        NTSTRSAFE_PSTR pszDest)
{
  int v13; // r14d
  int v14; // eax
  int v15; // esi
  __int64 v16; // r12
  int TcgLockingObject; // ebx
  int v19; // r15d
  int v20; // r15d
  const char *v21; // r8
  __int64 v22; // r9
  _OWORD v25[2]; // [rsp+68h] [rbp-98h] BYREF
  int v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char v29; // [rsp+D0h] [rbp-30h]
  char v30; // [rsp+D1h] [rbp-2Fh]
  char v31; // [rsp+D2h] [rbp-2Eh]
  char v32; // [rsp+D3h] [rbp-2Dh]
  char v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  _OWORD v35[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]

  memset_0(v27, 0, 0x50uLL);
  v26 = 0;
  v36 = 0LL;
  v13 = 1;
  v14 = *(_DWORD *)a1;
  v15 = 1;
  memset(v25, 0, sizeof(v25));
  memset(v35, 0, sizeof(v35));
  if ( v14 != 1431193940 )
  {
    if ( v14 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v16 = *(_QWORD *)(a1 + 6120);
    if ( !v16 || !*(_QWORD *)(a1 + 6128) )
      return (unsigned int)-1073741637;
LABEL_11:
    TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v27, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v28 && !v34 )
      return (unsigned int)-1073741811;
    TcgLockingObject = RaidFillTcgAuthKey(v16, 0, a9, a10, (unsigned int *)v25, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( a3 )
    {
      v19 = a4 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v15 = 3;
        }
        else
        {
          v15 = 2;
        }
      }
      v13 = v15;
    }
    else
    {
      if ( v29 )
      {
        if ( v31 )
        {
          v15 = 3;
        }
        else if ( v33 )
        {
          v15 = 2;
        }
      }
      if ( v30 )
      {
        if ( v32 )
        {
          v13 = 3;
        }
        else if ( v33 )
        {
          v13 = 2;
        }
      }
    }
    TcgLockingObject = TcglibOpenSession(v16, 2LL, v35);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v16, v35);
    if ( TcgLockingObject >= 0 )
    {
      TcgLockingObject = TcglibSetBand(
                           v16,
                           (unsigned int)v35,
                           a2,
                           v15,
                           v13,
                           a5,
                           a6,
                           a8 & -(__int64)(a7 != 0),
                           (__int64)v25);
      TcglibStopTransaction(v16, v35, (unsigned int)TcgLockingObject, v22);
      if ( TcgLockingObject >= 0 )
      {
LABEL_40:
        TcglibCloseSession(v16, v35);
        return (unsigned int)TcgLockingObject;
      }
      v21 = "TcglibSetBand";
    }
    else
    {
      v21 = "TcglibStartTransaction";
    }
    RtlStringCbCopyA(pszDest, 0x20uLL, v21);
    goto LABEL_40;
  }
  if ( (*(_BYTE *)(a1 + 507) & 0x40) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 3592);
    if ( v16 )
    {
      if ( *(_QWORD *)(a1 + 3600) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
