/*
 * XREFs of RaidGetTcgProperties @ 0x140094E78
 * Callers:
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x14003A488 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x14006CC88 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x140083308 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x140083864 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x140083E90 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x140084420 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x140084A2C (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x140084FAC (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x140085F48 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x140086498 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x140086A78 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x140087028 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1400875CC (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x140087B5C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1400880D0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140088708 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x140088CB4 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400892C4 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140089860 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x14008A830 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x14008AD88 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x14008B3A0 (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x14008B974 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x14008BF3C (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     RaidGetTcgConfigInformation @ 0x1400946E8 (RaidGetTcgConfigInformation.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer @ 0x14008E9D0 (McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer.c)
 *     TcglibDiscoverDevice @ 0x140130E30 (TcglibDiscoverDevice.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidGetTcgProperties(int *a1, char *a2)
{
  int v2; // eax
  char v3; // r13
  int *v4; // rsi
  void *Pool; // rbp
  _WORD *v8; // rbx
  int *v9; // r14
  __int64 v10; // r15
  int v11; // edi
  unsigned int v12; // ecx
  char v14; // [rsp+D0h] [rbp-88h]
  __int128 v15; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+100h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( v2 == 1431193940 )
  {
    v4 = a1;
    if ( (*((_BYTE *)a1 + 507) & 0x40) == 0 )
    {
      Pool = (void *)*((_QWORD *)a1 + 449);
      v8 = (_WORD *)*((_QWORD *)a1 + 450);
      v9 = (int *)*((_QWORD *)a1 + 3);
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  if ( v2 != 1094997074 )
    return (unsigned int)-1073741637;
  v9 = a1;
  if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  Pool = (void *)*((_QWORD *)a1 + 765);
  v8 = (_WORD *)*((_QWORD *)a1 + 766);
LABEL_7:
  v10 = *((_QWORD *)a1 + 1);
  if ( !Pool )
  {
    Pool = (void *)RaidAllocatePool(256LL, 6240LL, 1129603410LL, *((_QWORD *)a1 + 1));
    if ( !Pool )
      return (unsigned int)-1073741801;
    v14 = 1;
  }
  memset_0(Pool, 0, 0x1860uLL);
  if ( v8 )
    goto LABEL_15;
  v8 = (_WORD *)RaidAllocatePool(256LL, 168LL, 1129603410LL, v10);
  if ( v8 )
  {
    v3 = 1;
LABEL_15:
    memset_0(v8, 0, 0xA8uLL);
    v11 = TcglibDiscoverDevice(a1, Pool, v8);
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)v8 == 512
        && *((_BYTE *)v8 + 52)
        && *((_BYTE *)v8 + 64)
        && *((_BYTE *)v8 + 121)
        && (v12 = *((_DWORD *)v8 + 18), *((_DWORD *)v8 + 32) >= v12)
        && *((_BYTE *)v8 + 148)
        && !*((_BYTE *)v8 + 126)
        && !*((_BYTE *)v8 + 127)
        && !(*((_DWORD *)v8 + 35) % *((_DWORD *)v8 + 36))
        && (unsigned __int16)v8[68] >= v12 )
      {
        if ( v4 )
        {
          if ( !*((_QWORD *)v4 + 449) )
            *((_QWORD *)v4 + 449) = Pool;
          if ( !*((_QWORD *)v4 + 450) )
            *((_QWORD *)v4 + 450) = v8;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 765) )
            *((_QWORD *)v9 + 765) = Pool;
          if ( !*((_QWORD *)v9 + 766) )
            *((_QWORD *)v9 + 766) = v8;
        }
        Pool = 0LL;
        v8 = 0LL;
      }
      else
      {
        if ( v4 )
          *((_BYTE *)v4 + 507) |= 0x40u;
        else
          *((_BYTE *)v9 + 111) |= 0x10u;
        RaidDriverGetName(*((_QWORD *)v9 + 2), (__int64)&v15);
        if ( (byte_140173447 & 2) != 0 )
        {
          if ( v4 )
            McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              *((_BYTE *)v4 + 104),
              *((_BYTE *)v4 + 105),
              *((_BYTE *)v4 + 106),
              (__int64)(v4 + 526),
              (__int64)(v9 + 1282),
              *((const wchar_t **)&v15 + 1),
              (const char *)v4 + 168,
              (const char *)v4 + 177,
              (const char *)v4 + 242,
              *((const wchar_t **)v9 + 643),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
          else
            McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              255,
              255,
              255,
              (__int64)&v16,
              (__int64)(v9 + 1282),
              *((const wchar_t **)&v15 + 1),
              byte_14015304C,
              byte_14015304C,
              byte_14015304C,
              *((const wchar_t **)v9 + 643),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
        }
        v11 = -1073741637;
      }
    }
    else
    {
      RtlStringCbCopyA(a2, 0x20uLL, "TcglibDiscoverDevice");
    }
    if ( v3 && v8 )
      ExFreePoolWithTag(v8, 0x43546152u);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v14 && Pool )
    ExFreePoolWithTag(Pool, 0x43546152u);
  return (unsigned int)v11;
}
