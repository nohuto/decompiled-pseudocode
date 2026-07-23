/*
 * XREFs of CmpDoReOpenTransKey @ 0x140869E38
 * Callers:
 *     CmpDoReDoCreateKey @ 0x140869B10 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoRecord @ 0x140869C08 (CmpDoReDoRecord.c)
 * Callees:
 *     CmpTestRegistryLock @ 0x140261420 (CmpTestRegistryLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpSplitParentKeyName @ 0x140C5EBFC (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v7; // xmm1
  bool v8; // r12
  char v9; // r14
  int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  __int16 v13; // ax
  HANDLE v14; // rbx
  NTSTATUS v15; // eax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // rdx
  NTSTATUS v21; // eax
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v28[2]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v29; // [rsp+90h] [rbp-70h]
  __int128 *v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A4h] [rbp-5Ch]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  _QWORD *v34; // [rsp+B8h] [rbp-48h]
  _BYTE v35[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v36; // [rsp+D8h] [rbp-28h]

  v23 = a3;
  v34 = a4;
  v28[1] = 0;
  v32 = 0;
  memset_0(v35, 0, 0x1D0uLL);
  v7 = *a2;
  v25 = 0LL;
  Handle = 0LL;
  v26 = v7;
  v27 = 0LL;
  v8 = CmpTestRegistryLock();
  v9 = 0;
  v10 = -1073741762;
  if ( !(_WORD)v7 )
    return (unsigned int)v10;
  while ( 1 )
  {
    CmpInitializeParseContext(v35);
    v36 = 8;
    v29 = 0LL;
    v28[0] = 48;
    v30 = &v26;
    v31 = 4928;
    v33 = 0LL;
    v11 = ObOpenObjectByName((unsigned int)v28, (_DWORD)CmKeyObjectType, 0, 0, a3, (__int64)v35, (__int64)&Handle);
    LOBYTE(v12) = v8;
    v10 = v11;
    CmpCleanupParseContext(v35, v12);
    if ( v10 >= 0 )
      break;
    CmpSplitParentKeyName(&v26, &v26, &v27);
    v13 = *((_WORD *)a2 + 1) - v26 - 2;
    LOWORD(v27) = *(_WORD *)a2 - v26 - 2;
    WORD1(v27) = v13;
    if ( !(_WORD)v26 )
    {
      v14 = Handle;
      goto LABEL_14;
    }
  }
  v14 = Handle;
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v16 = Object;
  v10 = v15;
  if ( v15 < 0 )
    goto LABEL_12;
  v10 = 0;
  if ( !v8 )
  {
    CmpLockRegistry();
    v9 = 1;
  }
  v17 = *(_QWORD *)(v16[1] + 32LL);
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v17 + 4160) )
    goto LABEL_9;
  if ( v9 )
  {
    CmpUnlockRegistry(v17);
    v9 = 0;
  }
  v16[8] = a1 + 88;
  ObfDereferenceObject(v16);
  v16 = 0LL;
  if ( (_WORD)v27 )
  {
    CmpInitializeParseContext(v35);
    v30 = &v27;
    v36 = 8;
    v28[0] = 48;
    v29 = v14;
    v31 = 4928;
    v33 = 0LL;
    v19 = ObOpenObjectByName((unsigned int)v28, (_DWORD)CmKeyObjectType, 0, 0, v23, (__int64)v35, (__int64)&v25);
    LOBYTE(v20) = v8;
    v10 = v19;
    CmpCleanupParseContext(v35, v20);
    if ( v10 < 0
      || (Object = 0LL,
          v21 = ObReferenceObjectByHandle(v14, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
          v16 = Object,
          v10 = v21,
          v21 < 0) )
    {
LABEL_10:
      if ( v9 )
        CmpUnlockRegistry(v17);
LABEL_12:
      if ( v16 )
        ObfDereferenceObject(v16);
      goto LABEL_14;
    }
    v10 = 0;
    if ( !v8 )
    {
      CmpLockRegistry();
      v9 = 1;
    }
    v17 = *(_QWORD *)(v16[1] + 32LL);
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v17 + 4160) )
    {
LABEL_9:
      v10 = -1073741762;
      goto LABEL_10;
    }
    if ( v9 )
      CmpUnlockRegistry(v17);
    v16[8] = a1 + 88;
    ObfDereferenceObject(v16);
    ZwClose(v14);
    v14 = v25;
  }
  *v34 = v14;
  v14 = 0LL;
LABEL_14:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)v10;
}
