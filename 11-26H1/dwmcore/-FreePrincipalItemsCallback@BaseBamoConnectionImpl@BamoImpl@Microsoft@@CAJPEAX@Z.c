/*
 * XREFs of ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x18023F930
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162B54 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180162BB0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x180240828 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback(
        struct Microsoft::BamoImpl::ConnectionIndirector **a1)
{
  unsigned int **v2; // rbx
  unsigned int *v3; // rbp
  unsigned int *i; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  char v9; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v9, a1[12]);
  v2 = (unsigned int **)(a1 + 24);
  if ( a1[8] )
  {
    v3 = (unsigned int *)a1[25];
    for ( i = *v2; i != v3; ++i )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
        (Microsoft::BamoImpl::BaseBamoConnectionImpl *)a1,
        *i);
  }
  *((_BYTE *)a1 + 219) = 0;
  if ( a1[24] != a1[25] )
    a1[25] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*v2;
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v9);
  Microsoft::BamoImpl::BamoImplObject::Release(a1[12], v5, v6, v7);
  return 0LL;
}
