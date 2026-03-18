/*
 * XREFs of GreDeleteServerMetaFile @ 0x1402622C8
 * Callers:
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401EF344 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     FreeDdeXact @ 0x14026C370 (FreeDdeXact.c)
 *     vCleanupMetaType @ 0x14026FFF0 (vCleanupMetaType.c)
 * Callees:
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x140310F34 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x140310F80 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteServerMetaFile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  LOBYTE(a2) = 21;
  v2 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>(v6, v2);
  v3 = 0;
  if ( v6[0] )
  {
    v4 = *(_DWORD *)(v6[0] + 24LL);
    if ( v4 == 1599096397 || v4 == 1480934989 )
    {
      HmgFree(*(_QWORD *)v6[0]);
      v6[0] = 0LL;
      v3 = 1;
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>(v6);
  return v3;
}
